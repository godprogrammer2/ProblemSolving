#include<bits/stdc++.h>
using namespace std;
struct NODE{
    int node;
    int weight;
    bool operator < (const NODE& right) const{
        return weight<right.weight;
    }
};
vector<NODE> graph[100001]={};
int node[100001]={};
int main(){
    int totalNode,st,ed,wieght;
    cin>>totalNode;
    for(int i=0;i<totalNode-1;i++)
    {
        cin>>st>>ed>>wieght;
        st--,ed--;
        graph[st].push_back({ed,wieght});
    }
    for(int i=0;i<totalNode;i++)
    {
        node[i] = INT_MAX;
    }
    node[0]=0;
    priority_queue<NODE> PQ;
    NODE tmp;
    PQ.push({0,0});
    int maxDistance = INT_MIN;
    while(!PQ.empty())
    {
        tmp = PQ.top();
        PQ.pop();
        if(node[tmp.node]>maxDistance)
        {
            maxDistance = node[tmp.node];
        }
        int len = graph[tmp.node].size();
        for(int i=0;i<len;i++)
        {
            if(node[tmp.node]+graph[tmp.node][i].weight<node[graph[tmp.node][i].node])
            {
                node[graph[tmp.node][i].node] = node[tmp.node]+graph[tmp.node][i].weight;
                PQ.push({graph[tmp.node][i].node,graph[tmp.node][i].weight});
            }
        }
    }
    cout<<maxDistance;
}
