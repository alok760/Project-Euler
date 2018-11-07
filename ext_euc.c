#include<stdio.h>
void main() {
int q, a, b, r, s1 = 1, s2 = 0, s, t1 = 0, t2 = 1, t, y, z;
printf("Enter 2 numbers: ");
scanf("%d %d", &a, &b);
y = a;
z = b;
r = a%b;
while (r != 0) {
q = a/b;
s = s1 - s2*q;
t = t1 - t2*q;
s1 = s2;
s2 = s;
t1 = t2;
t2 = t;
a = b;
b = r;
r = a%b;
}
printf("gcd = %d, s = %d, t = %d \n", b, s2, t2);
int x = s2*y + t2*z;
printf("s*a + t*b = %d \n", x);
}
