#include<bits/stdc++.h>
using namespace std;
string removeOcc(string s, string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s;
    // string temp = "";
    // for(int i=0;i<26;i++)
    // {
    //     char ch;
    //     if((ch>='a'&& ch<='z')||(ch>='a'&& ch<='z'))
    //     temp.push_back(ch);
    // }
    // cout<<"Enter the occurence character of string : "<<endl;
    // getline(cin,s);
    // cout<<removeOcc(s,temp)<<endl;
return 0;
}