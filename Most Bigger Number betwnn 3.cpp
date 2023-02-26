// Tarik Cesar Program 
#include <stdio.h>
int biggest (int ,int, int);
main() {
    int a, b, c;
    printf("Enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);
biggest(a,b,c);
}
biggest(int m, int n, int p)
{
if(m>n&&n>p)
printf("m is big");
else
if(n>p)
 printf("n is big");
else
printf("p is big");
}

