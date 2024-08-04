#include<stdio.h>
int main(){
    int n,p,i,d[100],b[100],c=0,t,j;
    printf("Enter the number of Monsters:");
    scanf("%d",&n);
    printf("Enter the initial experience:");
    scanf("%d",&p);
    printf("Enter the power of monsters:");
    for(i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    printf("Enter the bonus given for defeating:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

        
        if(d[i]>d[j]){
            t=d[i];
            d[i]=d[j];
            d[j]=t;
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }}
     
    for(i=0;i<n;i++){
        if(p>=d[i]){
            p=p+b[i];
            
            c=c+1;
        }
       
      
    }
     printf("No. of Monsters that can be defeated :%d",c);
    return 0;
}