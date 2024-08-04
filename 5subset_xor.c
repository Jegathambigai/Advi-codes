#include<stdio.h>
int main(){
    int n,a[100],i,b[100],c[100],l=0,d=0,e=0,f=0,g=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(l<(l^a[i])){
            l=l^a[i];
            
            e=e+1;
            
            b[d++]=l;
            c[f++]=e;
                
            
            
        }
        else if(l>(l^a[i])){
            
            
            l=0;
            e=0;
            l=l^a[i];
            e=e+1;
            if(i==n-1){
                b[d++]=l;
                c[f++]=e;
            }
            
        }
    }
    for(i=0;i<d;i++){
    if(c[i]<=n/2){
         g=b[i];
        
       }
    }
    printf("%d ",g);
    
}