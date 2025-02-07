#include<bits/stdc++.h>
using namespace std;
void reverse_odd_number(int n){
    cout<<"Odd Numbers : "; 
    int i=1;

    do{
        if(i%2!=0){
            cout<<i<<endl;
        }
        i++;
    }while(i<=n);
    
}
int main(){
    int n;
    cin>>n;
    reverse_odd_number(n);
    return 0;
}
