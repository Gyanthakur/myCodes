#include<bits/stdc++.h>
using namespace std;
bool valid(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z'))
    {
        return 1;
    }
    return 0;
}
char toLower(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}
bool checkPalindrome(string a)
{
    int start = 0;
    int end = a.length()-1;
    while(start<=end)
    {
        if(a[start]!=a[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
bool isPalindrome(string s)
{
    string temp="";
    for(int j=0;j<s.length();j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
       
    }
     for(int j=0;j<temp.length();j++)
        {
            temp[j]=toLower(temp[j]); 
        }
    return checkPalindrome(temp);


}
int main(){
    char name[20];
    cout<<"enter name : "<<endl;
    cin>>name;
    cout<<isPalindrome(name); 


return 0;
}