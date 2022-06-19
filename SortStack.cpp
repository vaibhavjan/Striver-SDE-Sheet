#include<bits/stdc++.h>
void sortedInserted(stack<int> &stack,int n){
    if(stack.empty() or (!stack.empty() && stack.top()<n)){
        stack.push(n);
        return;
    }
    int k=stack.top();
    stack.pop();
    sortedInserted(stack,n);
    stack.push(k);
}
void sortStack(stack<int> &stack)
{
    if(stack.empty())
        return ;
    int n=stack.top();
    stack.pop();
    sortStack(stack);
    sortedInserted(stack,n);
	// Write your code here
}