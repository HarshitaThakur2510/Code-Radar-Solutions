// Your code here...
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
        if(a==2){
            printf("Prime");
        }
    for(int i=2; i<a; i++){

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