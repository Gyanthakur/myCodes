#include<bits/stdc++.h>
using namespace std;
char getMaxOcc(string s)
{
    char arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        int number = 0;
        if(ch>='a'&&ch<='z')
        {
            // for lower case 
            number=ch-'a';
        }
        else
        {
            // for upper case
            number=ch-'A';
        }
        arr[number]++;

    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    char finaleAns = 'a'+ans;
    return finaleAns;

}
int main(){
    string s;
    cout<<"string name"<<endl;
    cin>>s;
    cout<<getMaxOcc(s)<<endl;
return 0;
}