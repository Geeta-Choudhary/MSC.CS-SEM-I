#include<stdio.h>>
int pow(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    return x*pow(x,n-1);
}

int main(){
    int x,n;
    printf("Enter x,n :");
    scanf("%d%d",&x,&n);
    printf("%d^%d is:%d",x,n,pow(x,n));
}
