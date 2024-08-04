#include<stdio.h>
int main(){
    int n,k,i,j,a=0;
    printf("Enter the Maximum possible values in the Array:");
    scanf("%d",&n);
    printf("Enter the length of the array:");
    scanf("%d",&k);
    if(k==1){
        a=n;
        printf("No. of Possible arrays :%d",a);
        return 0;
    }
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%i==0){
                
                a=a+1;
            }
        }
    }
    printf("No. of Possible arrays :%d",a);
    }
    return 0;
}