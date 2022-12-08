#include<bits/stdc++.h>
using namespace std;
bool checkEqual(int a[26], int b[26])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}
bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0; i<s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i=0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i<windowSize && i<s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;

        }
        if(checkEqual(count1,count2))
            return 1;
        while(i<s2.length())
           {
                char newChar = s2[i];
                int index = newChar - 'a';
                count2[index]++;
                char oldChar = s2[i-windowSize];
                index = oldChar - 'a';
                count2[index]--;
                i++;
                if(checkEqual(count1, count2))
                    return 1;
            }
            return 0;

        
    }
int main(){
// question. agr string me string k subpart ka permutation present ho to true nhi to false print krao.
    string s1;
    string s2;
    cout<<"Enter the string first  : "<<endl;
    getline(cin,s1);
    cout<<"Enter the string second  : "<<endl;
    getline(cin,s2);
    cout<<checkInclusion(s1,s2)<<endl;
return 0;
}