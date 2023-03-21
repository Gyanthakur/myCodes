#include<bits/stdc++.h>
using namespace std;
int main(){
    int set1[5]={1,3,5,7,9};
    int set2[8]={1,2,4,5,6,10,12,14};
    vector<int>v(15);
    sort(set1,set1+5);
    sort(set2,set2+8);
    auto it = set_difference(set1,set1+5,set2,set2+8,v.begin());
    v.resize(it-v.begin());
    cout<<endl;
    cout<<"Difference of the given two set is : ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}