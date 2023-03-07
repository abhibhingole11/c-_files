#include<stdio.h>
int addnumbers(int n);
int main(){
    int n;
    printf("enter the valu of n");
    scanf("%d",&n);
    printf("sum = %d", addnumber(n));
    return 0;
}
int addnumbers(int n){
    if(n!=0)
    return n*(n+1)/2;
    else
    return n;
}