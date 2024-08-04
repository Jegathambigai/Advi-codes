#include<stdio.h>
int main(){
    int n,k=0,i,j,a[100],b[50],c=0,m=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    if(a[i]<a[i+1]){
        k=k+1;
        if(a[i+1]>=a[i+2]||i+1==n-1){
            b[c++]=k;
            k=0;
        }
    }
    
}
for(i=0;i<c;i++){
    if(m<b[i]){
        m=b[i];
    }
}
printf("Longest ascending order subsequence length: %d",m+1);
return 0;
}