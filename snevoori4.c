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
		printf("Integer variable is greater than 1.\n");

	}else{
		printf("Integer variable is not greater than 1.\n");
	}

	if (d >= 10.0){
		printf("Double variable is greater than or equal to 10.0.\n");
	}
	else{
		printf("Double variable is less than 10.0.\n");
	}

	if(c != 'a'){
		printf("Character variable does not equal the letter 'a'.\n");
	}else{
		printf("Character variable equals the letter 'a'.\n");
	}

	if(f < 5.0){
		printf("Float variable is less than 5.0.\n");
	}else{
		printf("Float variable is not less than 5.0.\n");
	}

	return 0;
}
