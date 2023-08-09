#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/
Node* detectloop(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
       
        if(slow==fast)
        {
            return slow;
        }

    }
    return NULL;
}
bool isCircular(Node* head){
    if(head==NULL)
    {
        return true;
    }
    Node* temp=detectloop(head);
   /* while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }*/
    if(temp==head)
    {
        return true;
    }

       
       
 return false;
    
}
