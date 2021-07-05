#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int task(int a,int b){
    int sum,diff;
    sum =a+b;
    diff=a-b;
    printf("%d %d",sum, diff);
    return 0;
}
int task_1(float a,float b){
    float sum,diff;
    sum =a+b;
    diff=a-b;
    printf("\n%.1f %.1f",sum ,diff);
    return 0;
}
int main()
{
    int n,m;
    float a,b;
    scanf("%d %d",&n , &m);
    scanf("%f %f",&a,&b);
    task(n,m);
    task_1(a,b);
    return 0;
}
