#include <stdio.h>
#include <math.h>
int main()
{
	long long binaryNum,decimalNum=0,q,remainder,count=0,multiply=pow(2,count);

	do{
		printf("Enter Number in binary format(0 & 1): ");
		scanf("%lld",&binaryNum);

		q=binaryNum;
		while(q>0){
			remainder= q%10;
			decimalNum+= (remainder*multiply);

			count++;
			q/=10;
			multiply=pow(2,count);
		}

		printf("%lld in decimal is equal to: %lld\n",binaryNum,decimalNum);
		
		count=0;
		multiply=pow(2,count);
		decimalNum=0;
	}while(true);
	return 0;

}
