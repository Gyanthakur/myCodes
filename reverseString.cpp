#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
}

int main(){
    char name[20];
    cout<<"enter your name -> "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length of the string is "<<getlength(name)<<endl;
    // cout<<"reverse string is " <<reverse(name[4],6);
return 0;
}