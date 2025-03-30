// Your code here...
#include<stdio.h>
void main(){
    int n,max=0,min=0;
    scanf("%d",&n);
        int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=max){
            max=arr[j];
        }
        else{
            min=arr[j];
        }
    }
    printf("%d %d",min,max);

}