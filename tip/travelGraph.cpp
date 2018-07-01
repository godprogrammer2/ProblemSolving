#include<bits/stdc++.h>
using namespace std;
bool graph[10][10]={};
int main(){
    int edge,fr,ed;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>fr>>ed;
        graph[fr][ed]=1;
    }
    int startNode,endNode;
    cin>>startNode>>endNode;
    stack<int> st;
    st.push(startNode);
    int now;
    int count=0;
    while(!st.empty())
    {
        now = st.top();
        cout<<now<<">";
        st.pop();
        for(int i=0;i<10;i++)
        {
            if(graph[now][i]!=0)
            {
                if(i == endNode)
                {
                    count++;
                    cout<<i<<endl;
                    break;
                }
                st.push(i);
            }
        }
    }
    cout<<"\n"<<count;
    
}
