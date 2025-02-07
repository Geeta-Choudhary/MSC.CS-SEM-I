#include<bits/stdc++.h>
using namespace std;


void matrixMultiplication(vector<vector<int> > v1,vector<vector<int> > v2,int r,int c){
    vector<vector<int> > v3(r,vector<int> (r));
    cout<<"Matrix Multiplication : \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        	v3[i][j]=0;
        	for(int k=0;k<c;k++){
        		v3[i][j]+=v1[i][k]*v2[k][j];
            	
			}
			cout<<" "<<v3[i][j];	
        }
        cout<<endl;
    }

}
int main(){ 
    
    int r,c;
    cin>>r;

    vector<vector<int> > v1(r,vector<int> (r));
    vector<vector<int> > v2(r,vector<int> (r));

    cout<<"Input for matrix 1 :";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            int val;
        	
        	cin>>v1[i][j];
        	
//            v1[i].push_back(val);
            
//            cout<<v1[i][j];
        }
    }

    cout<<"Input for matrix 2 :";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        	cin>>v2[i][j];

        }
    }
    
    
    matrixMultiplication(v1,v2,r,r);
    return 0;
}
