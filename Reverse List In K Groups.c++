/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    int size=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    if(size<k)
    {
        return head;
    }

    
    if(head==NULL)
    {
        return head;
    }

    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int cnt=0;

    while(curr!=NULL && cnt<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }

    if(next!=NULL)
    {
       head->next = kReverse(next,k);
    }


    return prev;
}
