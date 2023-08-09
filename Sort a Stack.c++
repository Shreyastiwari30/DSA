#include <bits/stdc++.h>
void sorted(stack<int> &s,int ele)
{
	if(s.empty() || (!s.empty() && s.top()<ele))
	{
		s.push(ele);
		return;
	}

	int num=s.top();
	s.pop();

	sorted(s,ele);
	s.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}

	int num=stack.top();
    stack.pop();

	sortStack(stack);

	sorted(stack,num);
}
