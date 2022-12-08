#include<bits/stdc++.h>
using namespace std;
string spaceReplace(string &s)
{
    string temp = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){

    // question. when given space vha pr "@40" print krao.
    string s;
    cout<<"Enter the string more than 5 word : "<<endl;
    getline(cin,s);
    cout<<spaceReplace(s)<<endl;
return 0;
}