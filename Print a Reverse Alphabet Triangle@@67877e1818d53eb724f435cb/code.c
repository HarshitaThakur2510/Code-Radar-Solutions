// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int num=n;
    for(int i=0;i<n;i++){
        for(char j='A'; j<'A'+num;j++){
            printf("%c ",j);
            num--;
        }
        printf("\n");
    }
}