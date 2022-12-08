#include<bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> &vec, int k,int mid)
{
    int painter=1;
    int time=0;
    for(int i=0;i<vec.size();i++)
    {
        if(time+vec[i]<=mid)
        {
            time+=vec[i];
        }
        else
        {
            painter++;
            if(painter>k||vec[i]>mid)
            {
                return false;
            }
            time=vec[i];
        }
    }
    return true;
}
   


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    //sort(boards.begin(),boards.end());
    int sum =0;
  
    for(int i=0;i<boards.size();i++)
    {
        sum = sum+boards[i];
    }
    int e=sum;
    int s=0;
    int mid=s+(e-s)/2;
    int ans=-1;
   while(s<=e)
   {
        if(isPossible(boards,k,mid)==1)
    {
        ans=mid;
        //s=mid+1;
        e=mid-1;
    }
    else
    {
        //ans=mid;
        s=mid+1;
        //e=(mid-1);
    }
       mid=s+(e-s)/2;
   }
    return ans;
}





int main(){


return 0;
}