#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


Node* constructLL(int arr[],int n) {
        Node* head=new Node;
        Node *last;
        head->data=arr[0];
        head->next=NULL;
        last=head;


        for(int i=1;i<n;i++){
            Node* newNode= new Node();
            newNode->data=arr[i];
            newNode->next=NULL;
            last->next=newNode;
            last=newNode;
        }

        while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
int arr[]={1,2,3,4,5};
constructLL(arr,5);

return 0;
    
}


