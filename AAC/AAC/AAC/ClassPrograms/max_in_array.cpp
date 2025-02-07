#include<bits/stdc++.h>
using namespace std;

void maxInArray(vector<int>v){
    int max=v[0];
    for(int i=1;i<v.size();i++){
        if(max<v[i]){
            max = v[i];
        }
    }

    cout<<"Max  : "<<max;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
    maxInArray(v);
    return 0;
}
