#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int x,int y,int z,int x1)
{
    if(x>y && x>z && x>x1){
        return x;
    }
    else if(y>x && y>z && y>x1){
        return y;
    }
    else if(z>x && z>y && z>x1){
        return z;
    }
    else{
        return x1;
    }
    return 0;
}
