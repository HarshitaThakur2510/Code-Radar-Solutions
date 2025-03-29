// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+i-1;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}