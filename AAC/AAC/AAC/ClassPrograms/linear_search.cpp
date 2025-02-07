#include<bits/stdc++.h>
using namespace std;

void find(vector<int> v,int n){
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            cout<<"Element found at index "<<i;
            return ;
        }
    }
    cout<<"Element not found ";
}
int main(){
    vector<int> v;
    int n,size;

    cin>>size;
    
    
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    cin>>n;

    find(v,n);

    return 0;
}
