#include<bits/stdc++.h>

using namespace std;

struct A
{
    int u,v;
    double w;
    bool operator< (const A& o)const
    {
        return w <o.w;
    }
};
A arr[600000];
int p[1010];
int findroot(int i)
{
    if(p[i]==i) return i;
    else
        return p[i]=findroot(p[i]);
}
int main()
{
    int n,m,i,roota,rootb;
    double ans=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) p[i]=i;
    for(i=0; i<m; i++)
        scanf("%d %d %lf",&arr[i].u,&arr[i].v,&arr[i].w);
    sort(arr,arr+m);
    for(i=0; i<m; i++)
    {    
        roota =findroot(arr[i].u),rootb =findroot(arr[i].v);
        if(roota!=rootb)
            p[roota]=rootb,ans+=arr[i].w;
    }
    printf("%.3f",ans);

}
