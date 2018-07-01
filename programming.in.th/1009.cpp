#include<bits/stdc++.h>
using namespace std;
unsigned long long int findNumber(string numb1[3]){
     int len = numb1[1].length();
     string numb="";
    for(int i=0;i<len;i+=4)
    {
        /*cout<<numb1[0][i]<<numb1[0][i+1]<<numb1[0][i+2]<<endl;
        cout<<numb1[1][i]<<numb1[1][i+1]<<numb1[1][i+2]<<endl;
        cout<<numb1[2][i]<<numb1[2][i+1]<<numb1[2][i+2]<<endl;*/
        if(numb1[1][i]=='|')
        {
            //4,5,6,8,9,0
            if(numb1[1][i+2]=='|')
            {
                //4,8,9,0
                if(numb1[1][i+1]=='_')
                {
                    //4,8,9
                    if(numb1[2][i]=='|')
                    {
                        //8
                        //cout<<8;
                        numb+='8';
                    }
                    else
                    {
                        //4,9
                        if(numb1[2][i+1]=='_')
                        {
                            //9
                            //cout<<9;
                            numb+='9';
                        }
                        else
                        {
                            //4
                            //cout<<4;
                            numb+='4';
                        }
                    }
                }
                else
                {
                    //0
                    //cout<<0;
                    numb+='0';
                }
            }
            else
            {
                //5,6
                if(numb1[2][i]=='|')
                {
                    //6
                    //cout<<6;
                    numb+='6';
                }
                else
                {
                    //5
                    //cout<<5;
                    numb+='5';
                }
            }
        }
        else
        {
            //1,2,3,7
            if(numb1[1][i+1]=='_')
            {
                //2,3
                if(numb1[2][i+2]=='|')
                {
                    //3
                    //cout<<3;
                    numb+='3';
                }
                else
                {
                    //2
                    //cout<<2;
                    numb+='2';
                }
                
            }
            else
            {
                //1,7
                if(numb1[0][i+1]=='_')
                {
                    //7
                    //cout<<7;
                    numb+='7';
                }
                else
                {
                    //1
                    //cout<<1;
                    numb+='1';
                }
            }
        }
    }
    unsigned long long int result = 0;
    len = numb.length();
    int i=0;
    while(len--)
    {
        result+=(numb[len]-'0')*pow(10,i);
        i++;
    }
    return result;
}
int main(int argc,char *argv[]){
    int a,b;
    string tmp;
    cin>>a>>b;
    string numb1[3];
    getline(cin,tmp);
    getline(cin,numb1[0]);
    getline(cin,numb1[1]);
    getline(cin,numb1[2]);
    string numb2[3];
    getline(cin,numb2[0]);
    getline(cin,numb2[1]);
    getline(cin,numb2[2]);
    printf("%llu",findNumber(numb1)+findNumber(numb2));
    
}
