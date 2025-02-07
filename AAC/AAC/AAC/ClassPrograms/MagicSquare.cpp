#include<bits/stdc++.h>
using namespace std;


void magicSquare(int n){
    vector<vector<int> > mSquare(n,vector<int> (n,0));
    
    int i=0;
    int j=n/2;
    
    for(int num=1;num<=n*n;num++){
    	
    	mSquare[i][j]=num;
    	
    	int nextRow = (i-1+n)%n;
    	int nextCol = (j-1+n)%n;
    	
    	if(mSquare[nextRow][nextCol]!=0){
    		i=(i+1)%n;
		}
		else{
			i=nextRow;
    		j=nextCol;
		}
		
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mSquare[i][j]<<" ";
		}
		cout<<endl;
	}
    
}


int main(){
    int n;
    cin>>n;
    if(n%2!=0){
    	magicSquare(n);
	}
	else{
		cout<<"Only odd number";
	}
    
    return 0;
}
