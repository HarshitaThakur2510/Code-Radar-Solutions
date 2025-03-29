// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            printf("%d",j);

        }
        printf("\n");
    }
}