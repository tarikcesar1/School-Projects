#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int x,y,z,x1,y1,z1,x2,y2,z2;
	double r,l,d,A;
	printf("enter x,y,z,co-ordinates of the center of the sphere \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("enter x1,y1,z1, coordinates \n");
	scanf("%d%d%d",&x1,&y1,&z1);
	printf("enter x2,y2,z2, coordinates \n");
	scanf("%d%d%d",&x2,&y2,&z2);
	r=sqrt(pow((x1-x2),2)+pow((y-y1),2)+pow((z-z1),2));
	d=sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
	A=2*asin(d/(2*r));
	l=(r*A);
	printf("\n the smallest arc length between the given points on the sphere is %f limits",l);
}
