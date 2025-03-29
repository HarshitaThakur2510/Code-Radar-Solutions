// Your code here...
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==n||i==0){
            for(int j=0;j<n;j++){
                printf("*");
            }
        else if(i<n||i>0){
            for(int k=0;k<n;k++){
                if(k=0||k=n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        
        }
        }
    }
}