#include<stdio.h>
void main() {
int a, b, r;
printf("Enter 2 numbers:");
scanf("%d %d", &a, &b);
r = a%b;
while(r!=0){
a=b;
b=r;
r=a%b;
}
printf("gcd: %d\n", b);
}
