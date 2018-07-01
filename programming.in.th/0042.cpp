#include<bits/stdc++.h>
#include<string>
using namespace std;
string tmpValue;
int check;
long double biPower(long double value){
    if(value - 2 <= -1)return 1;
    if(value - 1.0 <= 0)return 2;
    tmpValue = to_string(value);
    check = tmpValue[tmpValue.length()-8]-'0';
    if(check%2==0)
    {
        return biPower(value/2)*biPower(value/2);
    }
    else
    {
        return biPower(value/2)*biPower(value/2)*2;
    }
}
int main(int argc,char *argv[]){
    int totalQuest;
    cin>>totalQuest;
    int tmpNumber;
    long double answer=1;
    for(int i=0;i<totalQuest;i++)
    {
        scanf("%d",&tmpNumber);
        //printf("%.0Lf\n",biPower(tmpNumber));
        while(tmpNumber--)
        {
            answer*=2;
        }
        printf("%.0Lf\n",answer);
        answer = 1;
    }
}
