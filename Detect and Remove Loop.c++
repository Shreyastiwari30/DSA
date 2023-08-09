/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydetectloop(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }

        if(slow==fast)
        {
            //cout<<"present at-> "<<slow->data;
            return slow;
        }
    }   
    return NULL;

}
Node* getstartpoint(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* intersection=floydetectloop(head);
    if(intersection==NULL)
    {
        return NULL;
    }
    Node* slow=head;

    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;

}
Node *removeLoop(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* start=getstartpoint(head);
    if(start==NULL)
    {
        return head;
    }
    Node* temp=start;
    while(temp->next!=start)
    {
        temp=temp->next;
    }

    temp->next=NULL;
    return head;
}
