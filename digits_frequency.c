#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char s[1000],i;
    int x[1000]={0},j,k;
    gets(s);
    k=strlen(s);
    for(i=48;i<=57;i++){
        for(j=0;j<k;j++){
            if(i==s[j]){
                x[i]=x[i]+1;
            }
        }
    }  
    for(i=48;i<=57;i++){
        printf("%d ",x[i]);
    }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
