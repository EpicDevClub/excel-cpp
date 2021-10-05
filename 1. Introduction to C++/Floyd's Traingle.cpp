#include <stdio.h>
int main()
{
	int number,printed=1;

	do{
		printf("Enter Number Of Rows You want: ");
		scanf("%d",&number);

		for (int i = 1; i <= number; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				printf("%d ",printed);
				printed++;
			}
			printf("\n");
		}

		
		

		
	}while(true);
	return 0;

}
