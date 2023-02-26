#include<stdio.h>
float quadratic();
 main()
{
	quadratic ();

}
float quadratic()
{
	int a,b,c,d;
	float x1, x2;
	printf("Input the values of a, b, c:");
	scanf("%d %d %d", &a, &b, &c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("Both roots are equal \n");
		x1=-b/(2.0*a);
		x2=x1;
		printf("First root1=%f\n", x1);
		printf("Second root2=%f\n", x2);
	}
	else if(d>0)
{
printf("Both roots are read and diff-2\n");
x1=-b/(2*a);
x2=x1;
printf("First root= %f\n", x1);
printf("Second root= %f\n", x2);
}
}

