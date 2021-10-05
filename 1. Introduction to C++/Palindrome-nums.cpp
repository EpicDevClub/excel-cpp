#include <stdio.h>
int main()
{
	int q,remainder,result=0,number;

	do{
		printf("Enter number(Except 0) to check if it's a Palindrome: ");
		scanf("%d",&number);
		q=number;

		while(q>0){
			remainder= q%10;
			result= result*10+remainder;

			q/=10;
		}
		if (result==number)
			printf("%d is a Palindrome\n",number);

		else
			printf("%d is not a Palindrome\n",number);

		result=0;
	
	}while(number!=0);
	return 0;

}