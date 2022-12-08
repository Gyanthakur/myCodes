#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& inputStack, int cnt, int size)
{
    // base case
    if(cnt==size/2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack,cnt+1,size);
    inputStack.push(num);
}
void deleteMiddle(stack<int>& inputStack, int n)
{
    int cnt=0;
    solve(inputStack,cnt,n);
}
int main(){

return 0;
}