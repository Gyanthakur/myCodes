#include <bits/stdc++.h>
#include<strings.h> 
char isUpperCase(char ch){
      if(ch>='A' && ch<='Z'){
          return ch;
      }
      return (ch-'a'+'A');
  }
bool checkPalindrome(string s)
{
   int start=0,end=s.size()-1;
   while(start<=end){
       if( (s[start]>=32 && s[start]<=47) || (s[start]>=58 && s[start]<=64) || (isspace(s[start]))){
           start++;
           continue;
       }
       
       if( (s[end]>=32 && s[end]<=47) || (s[end]>=58 && s[end]<=64) || (isspace(s[end]))){
           end--;
           continue;
       }
       if((isUpperCase(s[start]))!=(isUpperCase(s[end]) ) ){
           return false;
       }
       else{
           start++;
           end--;
       }   
   }
   return true;
}
int main()
{
    // char name[20];
    // cout<<"enter your name -> "<<endl;
    // cin>>name;
    // cout<<"your name is "<<name<<endl;
    // cout<<"length of the string is "<<getlength(name)<<endl;
    // cout<<"reverse string is " <<reverse(name[4],6);
    
return 0;
}