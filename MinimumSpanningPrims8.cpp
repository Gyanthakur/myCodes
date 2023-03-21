#include<bits/stdc++.h>
using namespace std;
#define V 7
int main(){
    int G[V][V] = {{0,28,0,0,0,10,0},{28,0,16,0,0,0,14},{0,16,0,12,0,0,0},{0,0,12,22,0,18},{0,0,0,22,0,25,24},{10,0,0,0,25,0,0},{0,14,0,18,24,0,0}};
    int edge;
    int visit[V];
    for(int i=0;i<V;i++)
    {
        visit[i]=false;
    }
    edge=0;
    visit[0]=true;
    int x,y;
    cout<<"Edge :  Weight"<<endl;
    while(edge<V-1)
    {
        int min = INT_MAX;
        x=0;
        y=0;
        for(int i=0;i<V;i++)
        {
            if(visit[i])
            {
                for(int j=0;j<V;j++)
                {
                    if(!visit[j] && G[i][j])
                    {
                        if(min>G[i][j])
                        {
                            min=G[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        cout<<x<<"-->"<<y<<" : "<<min<<endl;
        visit[y]=true;
        edge++;
    }
    return 0;
}