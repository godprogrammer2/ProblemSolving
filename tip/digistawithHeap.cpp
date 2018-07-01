#include<bits/stdc++.h>
using namespace std;
int graph[7][7]={};
int node[7]={};
struct NODE{
    int node;
    int weight;
    bool operator < (const NODE& right) const{
        return weight>right.weight;
    }
};
int main(){
    int edge,st,ed,wieght;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>st>>ed>>wieght;
        graph[st][ed]=wieght;
    }
    for(int i=0;i<5;i++)
    {
        node[i] = INT_MIN;
    }
    int x;
    cin>>x;
    node[x]=0;
    priority_queue<NODE> PQ;
    NODE tmp;
    tmp.node = x;
    tmp.weight = 0;
    PQ.push(tmp);
    while(!PQ.empty())
    {
        tmp = PQ.top();
        PQ.pop();
        for(int i=0;i<5;i++)
        {
            if(graph[tmp.node][i]&&graph[tmp.node][i]+tmp.weight>node[i])
            {
                node[i] = graph[tmp.node][i]+tmp.weight;
                PQ.push({i,node[i]});
            }
        }
    }
     for(int i=0;i<;i++)
    {
        cout<<i<<":"<<node[i]<<endl;
    }
}
