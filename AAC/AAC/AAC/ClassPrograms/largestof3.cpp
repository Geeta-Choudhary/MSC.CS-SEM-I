#include<bits/stdc++.h>
using namespace std;

void largestofthree(int a,int b,int c){
    if(a>b&&a>c){
        cout<<a;
    }
    else if(b>a&&b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    largestofthree(a,b,c);
    return 0;
}
