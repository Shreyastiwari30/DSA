#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
Node<int>* reverse(Node<int>* head)
    {
        Node<int>* curr=head;
        Node<int>* prev=NULL;
        Node<int>* next=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    
    void inserttail(Node<int>* &head,Node<int>* &tail,int value)
    {
        Node<int>* temp=new Node<int>(value);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return ;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    Node<int>* add(Node<int>* first,Node<int>* second)
    {
        int carry=0;
        
        Node<int>* anshead=NULL;
        Node<int>* anstail=NULL;
        
        while(first!=NULL || second!=NULL || carry!=0)
        {
            int val1=0;
            if(first!=NULL)
            {
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL)
            {
                val2=second->data;
            }
            
            int sum=carry+val1+val2;
            int digit=sum%10;
            
            inserttail(anshead,anstail,digit);
            
            carry=sum/10;
            
            if(first!=NULL){
                first=first->next;
            }
            if(second!=NULL)
            {
                second=second->next;    
            }
            
        }
        
       
        return anshead;
    }
   
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
        first=reverse(first);
        second=reverse(second);
        
        Node<int>* ans=add(first,second);
        
        ans=reverse(ans);
        
        return ans;
}
