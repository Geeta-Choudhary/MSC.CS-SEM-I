#include<bits/stdc++.h>
using namespace std;



void divisor(int n){
    cout<<"Factors are : ";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)cout<<i<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    divisor(n);
    return 0;
}
