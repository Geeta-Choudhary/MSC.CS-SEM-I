#include<bits/stdc++.h>
using namespace std;

int TOH(char f,char t,char a, int n){
	if(n==1){
		cout<<"Move "<<n<<" disc form "<<f<<" to "<<t<<endl;
		return 0;
	}
	
	TOH(f,a,t,n-1);
	
	cout<<"Move "<<n<<" disc from "<<f<<" to "<<t<<endl;
	
	
	TOH(a,t,f,n-1);
	
	
}

int main(){
	int n;
	cin>>n;
	
	TOH('A','B','C',n);	
	
	
	return 0;
}
