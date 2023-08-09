/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *getmiddle(Node *head)
{
    Node* slow=head;
    Node* fast=slow->next;

    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else if(head->next->next==NULL)
    {
        return head->next;
    }

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }

    return slow;







}

int getlength(Node* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}





Node *findMiddle(Node *head) {
   return getmiddle(head);
   
   /*
    int len=getlength(head);
    int mid;
    mid=(len/2);
  
    Node* temp=head;
    int cnt=0;
    while(cnt<mid)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
    */
}



