#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a==1900){
        printf("Not a Leap Year");
    }

    else if(a%4==0){
        printf("Leap Year");
    }
    else if(a%400==0){
        printf("Leap Year");
    }

    
    else{
        printf("Not a Leap Year");
    }
}