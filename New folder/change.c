#include<stdio.h>
float average(int a, int b, int c);
int main(){
    int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the value of average is %f\n ",average(a,b,c));
    return 0;
}
float average(int a, int b, int c){
float result;
result = (a+b+c)/3;
return result;
}