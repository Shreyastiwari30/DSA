void insertatbottom(stack<int> &s,int ele)
{
    if(s.empty())
    {
        s.push(ele);
        return;
    }

    int num=s.top();
    s.pop();

    insertatbottom(s,ele);
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return;
    }
    
    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insertatbottom(stack,num);

}
