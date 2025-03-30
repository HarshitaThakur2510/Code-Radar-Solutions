// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
  
    for(int i=n;i>0;i--){
        for(char j='A'; j<'A'+i;j++){
            printf("%c ",j);
           
        }
        printf("\n");
    }
}