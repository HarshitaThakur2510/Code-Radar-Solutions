#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c==a){
        printf("Equilateral");
    }
    else if(a==b || a==c ||c==b ){
        printf("Isosceles");

    }
    else{
        printf("Scalene");
    }
}