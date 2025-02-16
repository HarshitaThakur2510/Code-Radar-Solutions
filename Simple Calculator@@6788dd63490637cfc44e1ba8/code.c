// Your code here...
#include<stdio.h>
void main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);
    switch(ch){
        case '+':printf("%d",a+b);
        break;
        case '-':printf("%d",a-b);
        break;
        case '*':printf("a*b");
        break;
        case '/':printf("%d",a/b);
        break;
    }

}