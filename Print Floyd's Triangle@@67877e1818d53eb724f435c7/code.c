// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<i+1;j++){
            printf("%d ",j);

        }
        printf("\n");
    }
}