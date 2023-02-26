#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
main()
{
	int A[100],i,sum=0;
	float avg;
	time_t*timer;
	srand(time(timer));
	printf("the random numbers from 1 to 100 are :\n");
	for(i=1;i<=100;i++)
	{
		A[i]=1+rand()%100;
		printf("%d\t",A[i]);
		sum+=A[i];
		avg=sum/100.0;
	}
	printf("\n average of the random numbers =%2f\n", avg);
	return 0;
}
