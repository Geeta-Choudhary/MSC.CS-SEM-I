#include<bits/stdc++.h>
using namespace std;

void minInArray(vector<int>v){
    int min=v[0];
    for(int i=1;i<v.size();i++){
        if(min>v[i]){
            min = v[i];
        }
    }

    cout<<"Min  : "<<min;
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
    minInArray(v);
    return 0;
}
