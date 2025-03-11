// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%dx%d=%d \n",n,i,n*i);
    }
}