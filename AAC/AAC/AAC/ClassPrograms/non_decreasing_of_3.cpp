#include<bits/stdc++.h>
using namespace std;


void largestofthree(int a,int b,int c){
    int l,m,s;

    if(a>b&&a>c){
        l=a;
        if(b>c){
            m=b;
            s=c;
        }
        else{
            m=c;
            s=b;
        }
    }
    else if(b>a&&b>c){
        l=b;
        if(a>c){
            m=a;
            s=c;
        }
        else{
            m=c;
            s=a;
        }
    }
    else{
        l=c;
        if(b>a){
            m=b;
            s=a;
        }
        else{
            m=a;
            s=b;
        }
    }

    cout<<"Largest : "<<l<<" Medium : "<<m<<" Smallest : "<<s;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    largestofthree(a,b,c);
    return 0;
}
