// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(char j='A';j<='A'+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}