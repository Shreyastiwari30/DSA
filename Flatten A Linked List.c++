Node* merge(Node* one, Node* two){
        
        
           if(two==NULL){
                return one;
           }
            
            Node* ans=new Node(-1);
            Node* temp=ans;
            while(one!=NULL && two!=NULL){
                if(one->data < two->data){
                    temp->child=one;
                    temp=one;
                    one=one->child;
                }
                else{
                    temp->child= two;
                    temp=two;
                    two=two->child;
                }
                
            }
            while(one!=NULL){
                    temp->child=one;
                    temp=one;
                    one=one->child;
                }
                while(two!=NULL){
                    temp->child=two;
                    temp=two;
                    two=two->child;
                }
                return ans->child;
                
        }
    
Node *flattenLinkedList(Node *head)
{
   // Your code here
   if(head==NULL||head->next==NULL){
       return head;
   }
   Node* down=head;
   Node* right =flattenLinkedList(head->next);
   down->next=NULL;
   Node* ans=merge(down,right);
   return ans;
}

