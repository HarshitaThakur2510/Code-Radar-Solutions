// Your code here...
#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=x-i; j>=0; j--){
            printf("* ");
        }
        printf("\n");
    }
}