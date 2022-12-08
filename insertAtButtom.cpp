#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s, int x)
{
    // base case 
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}
stack<int>pushBottom(stack<int>& myStack, int x)
{
    solve(myStack,x);
    return myStack;
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(7);
    int x=9;
    pushBottom(s,x);
    

    

return 0;
}