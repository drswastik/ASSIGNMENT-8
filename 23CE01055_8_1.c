#include<stdio.h>
void cirswift(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;
    return;
} 
int main(){
    int a,b,c;
    int* p=&a;
    int* q=&b;
    int* r=&c;
    printf("Enter variable 1:");
    scanf("%d",&a);
    printf("Enter variable 2:");
    scanf("%d",&b);
    printf("Enter variable 3:");
    scanf("%d",&c);
    cirswift( p,q,r);
    printf("%d,%d,%d",a,b,c);
    return 0;
}