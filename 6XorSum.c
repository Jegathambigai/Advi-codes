#include<stdio.h>
int main(){
    int n,k,a[100],b[100],i,j,l=0,g=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the maximum xor value:");
    scanf("%d",&k);
   for(i=0;i<=k;i++){
        for(j=0;j<n;j++){
            l=l+(a[j]^i);

        }
        b[i]=l;
        l=0;
    }
    for(i=0;i<=k;i++){
        if(l<b[i]){
            l=b[i];
            g=i;
        }
    }
  
    printf("Xor_sum(%d):%d",g,l);
}