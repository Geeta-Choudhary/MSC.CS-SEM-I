#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> v){
    for(int i=0;i<v.size();i++){
        int swapped =1;
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=0;
            }
        }
        if(swapped){
            break;
        }
        swapped=1;
    }
    
    cout<<"Sorted Data : ";
    for(int i=0;i<v.size();i++){
    	cout<<v[i];
	}
}

int main(){
	
    vector<int> v;
    int n;
    cin>>n;

		
    for(int i=0;i<n;i++){
        int val ;
        cin>>val;
        
		v.push_back(val);
		
		
    }
	
//	for(int i=0;i<n;i++){
//    	cout<<v[i];
//	}

    bubble_sort(v);
    return 0;
}
