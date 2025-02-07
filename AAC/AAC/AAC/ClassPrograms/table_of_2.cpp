#include<bits/stdc++.h>
using namespace std;

void table_of_2(int n){
     
    for(int i=1;i<=n;i++){
        cout<<"2 * "<<i<<" = "<<(2*i)<<"\n";
    }
    
}
int main(){
    int n;
    cout<<"Print how many multiples : ";
    cin>>n;
    table_of_2(n);
    return 0;
}
