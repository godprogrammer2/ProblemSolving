P[0] = 0
P[1] = 1
P[2] = 2
P[3] = 3
P[4] = 4
ans = 0
---------------------------------------
int findroot(int i)
{
    if(p[i]==i) return i;
    else
        return p[i]=findroot(p[i]);
}
----------------------------------------
for(i=0; i<m; i++)
    {    
        roota =findroot(arr[i].u),rootb =findroot(arr[i].v);
        
        if(roota!=rootb)
            p[roota]=rootb,ans+=arr[i].w;
            
    }
------------------------------------------





--------------------------
