#include <bits/stdc++.h> 

void solve(stack<int>&inputStack,int count, int N)
{
   if(count==N/2)
   {
      inputStack.pop();
      return;
   }

   int ans=inputStack.top();
   inputStack.pop();

   solve(inputStack,count+1,N);
   inputStack.push(ans);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   int count=0;
   solve(inputStack,count,N);

   
}
