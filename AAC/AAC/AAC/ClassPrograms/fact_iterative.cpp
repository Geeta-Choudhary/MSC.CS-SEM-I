#include<bits/stdc++.h>
using namespace std;


void fact(int n){
    int fact = 2; 
    for(int i=3;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}
