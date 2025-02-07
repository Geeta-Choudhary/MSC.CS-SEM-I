#include<bits/stdc++.h>
using namespace std;

int recursiveSum(int n){
	if(n==1)
	return 1;
	
	return n+recursiveSum(n-1);
	
}

int main(){
	int n;
	cin>>n;
	
	cout<<"Sum : "<<recursiveSum(n);
	return 0;
}
