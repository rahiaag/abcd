//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
  
  Node *reverseList(Node *start,Node *end){
      
      Node *prev=NULL;
      Node *curr=start;
      Node *temp=NULL;
      
      while (curr!=end){
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
      }
      return prev;
  }
  
  Node *reverseKGroup(Node *head, int k) {
      
     if (!head || k==1) return head;
     
     Node *dummy=new Node(0);
     dummy->next=head;
     Node*prev=dummy;
     Node *curr=head;
     
     while (curr){
         Node* start = curr; // Start of the current group
            Node* end = curr;

            // Move `end` k-1 steps or until the end of the list
            for (int i = 1; i < k && end; i++) {
                end = end->next;
            }

            // If there are fewer than k nodes left, reverse them
            Node* nextGroup = (end ? end->next : NULL);

            if (end) {
                end->next = NULL; // Temporarily break the list
                Node* newStart = reverseList(start, NULL);
                prev->next = newStart;
                start->next = nextGroup;
                prev = start;
                curr = nextGroup;
            } else {
                // Reverse the remaining nodes
                Node* newStart = reverseList(start, NULL);
                prev->next = newStart;
                break;
     }
     }
     return dummy->next;
      
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends