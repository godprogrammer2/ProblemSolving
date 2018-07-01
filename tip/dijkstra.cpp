#include<bits/stdc++.h>
using namespace std;
int graph[7][7]={};
//int path[49]={};
int node[7]={};
bool visited[7] = {false};

int iMin(int arr[]){
    int min = INT_MAX;
    int index;
    for(int i=0;i<7;i++)
    {
        if(node[i]<min&&visited[i]==false)
        {
            min = node[i];
            index = i;
        }
    }
    return index;
}
int main(int argc,char *argv[]){
    int edge,st,ed,wieght;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>st>>ed>>wieght;
        st--,ed--;
        graph[st][ed]=wieght;
    }
    for(int i=0;i<7;i++)
    {
        node[i] = INT_MAX;
    }
    int x;
    cin>>x;
    x--;
    node[x] = 0;
    int now;
    for(int i=0;i<6;i++)
    {
        now = iMin(node);
        visited[now] = true;
        for(int next=0;next<7;next++)
        {
            if(graph[now][next]!=0&&!visited[next]&&graph[now][next]+node[now]<node[next]&&node[now]!=INT_MAX)
            {
                node[next] = graph[now][next]+node[now];
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        cout<<i+1<<":"<<node[i]<<endl;
    }
    
    
    
    
    
}
