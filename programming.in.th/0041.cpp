#include<bits/stdc++.h>
using namespace std;
int main(int argc,char *argv[]){
    int n;
    int max = INT_MAX;
    cin>>n;
    if(n%2==0)
    {
        printf("%f",(float)n);
    }
    else if(n == 1)
    {
        printf("2.000000");
    }
    else if(n == 3)
    {
        printf("%f",(float)n-1+1.732051);
    }
    else 
    {
        printf("%f",(float)n-1+1.464102);
    }
}
