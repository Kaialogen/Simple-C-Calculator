#include <stdio.h>

int main()
{
	float num1, num2, res;
	int choice;
	printf("Simple Calculator\n");
	do
	{
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n\n");
		printf("Enter your Choice(1-5): ");
		scanf("%d", &choice);
		if (choice >= 1 && choice <=4)
		{
			printf("\nEnter any two numbers: ");
			scanf("%f %f", &num1, &num2);
		}
		switch (choice)
		{
		case 1:
			res = num1 + num2;
			printf("The result is %0.2f", res);
			break;
		case 2:
			res = num1 - num2;
			printf("The result is %0.2f", res);
			break;
		case 3:
			res = num1 * num2;
			printf("The result is %0.2f", res);
			break;
		case 4:
			res = num1 / num2;
			printf("The result is %0.2f", res);
			break;
		default:
			printf("\nWrong choice");
			break;

		}
		printf("\n----------------\n");
	} while (choice!=5);
	printf("Press any key to exit");
	return 0;	
}

