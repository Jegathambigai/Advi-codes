#include<stdio.h>
#include<math.h>
int main(){
    int n,c,f,i,s1,tf,ts,a=0,j,b=0,d=0,e=0,g=0;
    char s[100],t;
    printf("Enter the array size:");
    scanf("%d",&n);
    getchar();
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%c",&s[i]);
    }
    
    printf("Enter the total cash value:");
    scanf("%d",&c);
     printf("Enter the cost to swap:");
    scanf("%d",&s1);
    printf("Enter the cost to flip:");
    scanf("%d",&f);
if(f<s1){
for(i=0;i<n;i++){
    if(s[i]=='1'){
        e=e+1;
    }
  }
  tf=e*f;

  if(c>tf){
    c=c-tf;
    tf=e;
  }
  else{
    tf=c/f;
    c=c-(tf*f);
  }
 
  for(i=0;i<n;i++){
    if(b<tf){
    if(s[i]=='1'){
        s[i]='0';
        b=b+1;
    }
  }
  }e=0; 
  for(i=0;i<n;i++){
        if(s[i]=='0'){
            e=e+1;

        }
}

    ts=e*s1;
    
    if(c>ts){
        c=c-ts;
        ts=e;
    }
    else{
        ts=c/s1;
        c=c-(ts*s1);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a<ts){
            if(s[i]=='1'&&s[j]=='0'){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
                a=a+1;
            }
            }
        }
    }e=0;
}
else{
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            e=e+1;

        }
}

    ts=e*s1;
    
    if(c>ts){
        c=c-ts;
        ts=e;
    }
    else{
        ts=c/s1;
        c=c-(ts*s1);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a<ts){
            if(s[i]=='1'&&s[j]=='0'){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
                a=a+1;
            }
            }
        }
    }e=0;
    for(i=0;i<n;i++){
    if(s[i]=='1'){
        e=e+1;
    }
  }
  tf=e*f;

  if(c>tf){
    c=c-tf;
    tf=e;
  }
  else{
    tf=c/f;
    c=c-(tf*f);
  }
 
  for(i=0;i<n;i++){
    if(b<tf){
    if(s[i]=='1'){
        s[i]='0';
        b=b+1;
    }
  }
  }e=0; 
  
} 
    
    
    for(i=n-1;i>=0;i--){
     if(s[i]=='1'){
            d=d+pow(2,n-i-1);
       }
      
       
    }
    printf("Decimal number:%d",d);
    
}