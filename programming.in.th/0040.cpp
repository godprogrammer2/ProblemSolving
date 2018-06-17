#include<bits/stdc++.h>
using namespace std;
int main(int argc,char *argv[]){
    int total;
    int len;
    string tmpNumber;
    scanf("%d",&total);
    for(int i=0;i<total;i++)
    {
        cin>>tmpNumber;
        len = tmpNumber.length();
        if((tmpNumber[len-1]-'0')%2!=0 or (tmpNumber[len-1]=='2' and len==1))
        {
            cout<<'T'<<endl;
        }
        else
        {
            cout<<'F'<<endl;
        }
        tmpNumber = "";
    }
}
