// Your code here...
#include<stdio.h>
void main(){
int n,a;
scanf("%d",&n);
int arr[n];
int arr1[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int j=0;j<n-a;j++){
    arr[i]=arr1[i+a];
  
}
for(int k=n;k>a+1;k--){
arr[k]=arr1[a-1];
a--;
}


}