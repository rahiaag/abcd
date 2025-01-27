//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache {
  private:
  class Node{
      public:
      int key;
      int value;
      Node *prev;
      Node *next;
      
      Node(int k,int v){
          key=k;
          value=v;
          Node *prev=NULL;
          Node *next=NULL;
      }
  };
  unordered_map<int,Node*>mp;
  Node*head;
  Node*tail;
  int capacity;
  
  void removeNode(Node *node){
      node->prev->next=node->next;
      node->next->prev=node->prev;
  }
  
  void addNodeToFront(Node *node){
     node->next=head->next;
     node->prev=head;
     head->next->prev=node;
     head->next=node;
  }
  public:
  
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) :capacity(cap){
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    // Function to return value corresponding to the key.
    int get(int key) {
        if (mp.find(key)!=mp.end()){
            Node *node=mp[key];
            removeNode(node);
            addNodeToFront(node);
            return node->value;
        }
        return -1;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        
        if (mp.find(key)!=mp.end()){
            Node *node=mp[key];
            node->value=value;
            removeNode(node);
            addNodeToFront(node);
        }else{
        if (mp.size()==capacity){
            Node *temp=tail->prev;
            removeNode(temp);
            mp.erase(temp->key);
            delete temp;
        }
        
        Node*newNode=new Node(key,value);
        addNodeToFront(newNode);
        mp[key]=newNode;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--) {
            string q;
            cin >> q;
            if (q == "PUT") {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->put(key, value);
            } else {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends