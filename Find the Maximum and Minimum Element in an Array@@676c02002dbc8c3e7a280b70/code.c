
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
        int arr[n];
        
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min =arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>=max){
            max=arr[j];
        }
        if(arr[j]<=min){
            min=arr[j];
        }
    }
    printf("%d %d",min,max);

}