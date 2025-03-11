// Your code here...
#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(int j=i; j<=0; j--){
            printf('*');
        }
    }
}