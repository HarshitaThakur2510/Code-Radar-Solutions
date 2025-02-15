// Your code here...
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=2; i<a; i++){
        if(a==2){
            printf("Prime");
        }
        else if(a%i==0){
            printf("Not Prime");
            break;
            
        }
        else{
            printf("Prime");
            break;
        }
        
       

    }
}