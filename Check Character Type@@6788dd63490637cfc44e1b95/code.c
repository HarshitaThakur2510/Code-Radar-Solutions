// Your code here...
#include<stdio.h>
void main(){
    char ch;
    scanf("%d",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U'){
        printf("Vowel");
    }
    else if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Consonant");
    }
}

