#include <stdio.h>
#include <math.h>
int main()
{
	int year;

	do{
		printf("Enter a Year: ");
		scanf("%d",&year);
		
		if (year%400==0)
			printf("%d is a Leap Year.\n",year);
		else if (year%100==0)
			printf("%d is not a Leap Year.\n",year);
		else if (year%4==0)
			printf("%d is a Leap Year.\n",year);
		else
			printf("%d is not a Leap Year.\n",year);

	}while(year!=0);
	return 0;

}
