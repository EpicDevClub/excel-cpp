#include <stdio.h>
#include <math.h>
int main()
{
	int q,remainder,result=0,number,order=0;

	do{
		printf("Enter number(Except 0) to check if it's an Armstrong Number: ");
		scanf("%d",&number);
		q=number;
		while(q>0){
			q/=10;
			order++;
		}
		q=number;
		while(q>0){
			remainder= q%10;
			remainder=int(pow(remainder,order));
			result+=remainder;

			q/=10;
		}
		if (result==number)
			printf("%d is an Armstrong Number\n",number);

		else
			printf("%d is not an Armstrong Number\n",number);

		result=0;
		order=0;
	
	}while(number!=0);
	return 0;

}