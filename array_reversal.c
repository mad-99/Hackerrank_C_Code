#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m , a[1000],temp;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
m=n-1;
for(int i=0;i<n/2;i++){
     temp=a[i];
     a[i]=a[m-i];
     a[m-i]=temp;
     
}
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
