#include<bits/stdc++.h>
using namespace std;
int main(){
    int set1[6]={1,3,5,7,9,11};
    int set2[8]={1,2,4,5,11,23,34,56};
    vector<int>v(15);
    sort(set1,set1+6);
    sort(set2,set2+8);
    auto it = set_intersection(set1,set1+6,set2,set2+8,v.begin());
    v.resize(it-v.begin());
    cout<<endl;
    cout<<"intersection of the given two set is : ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}