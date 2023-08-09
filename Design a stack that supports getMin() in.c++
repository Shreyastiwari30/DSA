class SpecialStack {
    public:
        stack<int> s;
        int mini=INT_MAX;
    void push(int data) {
        if(s.empty())
        {
            s.push(data);
            mini=data;
        }

        else
        {
            if (data < mini) {
              s.push(2*data-mini);
              mini=data;
            }
            else
            {
                s.push(data);
            }
        
        }
    }

    void pop() {
        if(!s.empty())
        {
            int curr=s.top();
            if(curr>mini)
            {
                s.pop();
            }
            else
            {
                int val=2*mini-curr;
                mini=val;
                s.pop();
            }
            
        }

        
    }

    int top() {
        if(s.empty())
        {
            return -1;
        }
        int curr=s.top();
        if (curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    int getMin() {
        if(s.empty())
        {
            return -1;
        }

        return mini;
    }  
};
