//Sathwika Nevoori
//csc-321


#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int x;
	double d;
	char c;
	float f;

	printf("Enter an integer: ");
	scanf("%d", &x);

	printf("Enter a double: ");
	scanf("%lf", &d);

	printf("Enter a character: ");
	scanf(" %c", &c);

	printf("Enter a float: ");
	scanf("%f", &f);

	if(x > 1){
		printf("Integer variable is greater than 1\n");

	}

	if (d == 3.14){
		printf("Double variable is equal to 3.14\n");
	}

	if(c != 'a'){
		printf("Character variable does not equal the letter a\n");
	}

	if(f < 0.0){
		printf("Float variable is less than 0.0\n");
	}

	return 0;
}
