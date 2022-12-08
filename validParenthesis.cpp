#include<bits/stdc++.h>
using namespace std;
bool isParenthesis(string expression)
{
    stack<int>s;
    for(int i=0;i<expression.length();i++)
    {
        char ch = expression[i];
        if(ch=='('||ch=='{'||ch=='[')
        s.push(ch);
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='['))
                s.pop();
                else
                return false;
            }
            else
            return false;
        }
    }
    if(s.empty())
    return true;
    else
    return false;
}
int main(){
    string s = {'(','(',')','{',')'};
    if(isParenthesis(s))
    cout<<"valid Parenthesis"<<endl;
    else 
    cout<<"invalid parenthesis"<<endl;
return 0;
}