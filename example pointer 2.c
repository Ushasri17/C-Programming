#include <stdio.h>
int main()
{
int a, b;
int c = 5;
int *p;
a = 4 * (c + 5) ;
p = &c;
b = 4 * (*p + 5) ;
printf ("a=%d b=%d \n", a, b);
int x, y;
int *ptr;
x = 10 ;
ptr = &x ;
y = *ptr ;
printf ("%d is stored in location %u \n", x, &x) ;
printf ("%d is stored in location %u \n", *&x, &x) ;
printf ("%d is stored in location %u \n", *ptr, ptr) ;
printf ("%d is stored in location %u \n", y, &*ptr) ;
printf ("%u is stored in location %u \n", ptr, &ptr) ;
printf ("%d is stored in location %u \n", y, &y) ;
*ptr = 25;
printf ("Now x = %d \n", x);
}