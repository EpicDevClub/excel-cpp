#include <stdio.h>
#include <math.h>
int main()
{
	int q,remainder,result=0,number,fact=1;

	do{
		printf("Enter number(Except 0) to check if it's a Strong Number: ");
		scanf("%d",&number);
		q=number;
		
		while(q>0){
			remainder= q%10;
			
			for (int i = 1; i <= remainder; ++i)
			{
				fact*=i;
			}
			
			result+=fact;

			q/=10;
			fact=1;
		}
		if (result==number)
			printf("%d is an Strong Number\n",number);

		else
			printf("%d is not an Strong Number\n",number);

		result=0;
	
	}while(number!=0);
	return 0;

}
