#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(vector<int> & v)
{
    int i=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j!=0])
        {
            swap(v[i],v[j]);
            i++;
        }
    }

}
void printVec(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(4);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    vector<int> ans = moveZeros(v);
    
    cout<<" print the answer "<<endl;
    printVec(ans);
     

return 0;
}