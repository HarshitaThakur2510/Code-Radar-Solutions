// Your code here...
#include<stdio.h>
void main(){
    int n,odd=0,even=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            eodd++;
        }

    }
    printf("% %d",even,odd);
}