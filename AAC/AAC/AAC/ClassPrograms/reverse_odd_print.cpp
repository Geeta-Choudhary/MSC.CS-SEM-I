#include<bits/stdc++.h>
using namespace std;

void reverse_odd_number(int s,int e){
    cout<<"Odd Numbers : "; 
    for(int i=e;i>=s;i--){
        if(i%2!=0){
            cout<<i<< " ";
        }
    }
    
}
int main(){
    int s,e;
    cin>>s>>e;
    reverse_odd_number(s,e);
    return 0;
}
