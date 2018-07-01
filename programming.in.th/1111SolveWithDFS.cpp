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
    stack<NODE> ST;
    ST.push({0,0});
    NODE tmp;
    int len;
    int maxDistance = INT_MIN;
    while(!ST.empty())
    {
        tmp = ST.top();
        ST.pop();
        len = graph[tmp.node].size();
        for(int i=0;i<len;i++)
        {
            if(tmp.weight+graph[tmp.node][i].weight>maxDistance)
                maxDistance = tmp.weight+graph[tmp.node][i].weight;
            ST.push({graph[tmp.node][i].node,tmp.weight+graph[tmp.node][i].weight});
        }
    }
    cout<<maxDistance;
}

