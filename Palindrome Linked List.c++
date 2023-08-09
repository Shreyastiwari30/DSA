#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
bool checkpalindrome(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
      if (arr[s] != arr[e]) {
        return 0;
      }
      s++;
      e--;
    }
    return 1;
}
bool isPalindrome(LinkedListNode<int> *head) {
    
    vector<int> arr;
    LinkedListNode<int>* temp=head;

    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }

    if(checkpalindrome(arr))
    {
        return true;
    }
    else
    {
        return false;
    }

}
