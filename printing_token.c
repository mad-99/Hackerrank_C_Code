#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    gets(s);
    int i=0,j;
    j=strlen(s);
    for(i=0;i<j;i++){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }
        else{
            printf("\n");
        }
    }
    return 0;
}
