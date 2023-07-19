#include <stdio.h>

// function prototypes
int minimum(int, int);
int findGCD(int, int);
int findLCM(int, int);

int main()
{
	int num1, num2;
	printf("\n Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	int GCD = findGCD(num1, num2);
	int LCM = findLCM(num1, num2);

	printf("\n GCD of %d and %d is: %d", num1, num2, GCD);
	printf("\n LCM of %d and %d is: %d\n", num1, num2, LCM);

	return 0;
}

// function that finds the minium of two numbers
int minimum(int num1, int num2)
{

	if (num1 > num2)
	{

		return num2;
	}

	else
	{

		return num1;
	}
}

// function that finds the GCD of two numbers
int findGCD(int num1, int num2)
{

	int smaller = minimum(num1, num2);

	for (int i = smaller; i > 0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			return i;
		}
	}
}

// function that finds the LCM of two numbers
int findLCM(int num1, int num2)
{
	int bigger;
	int smaller = minimum(num1, num2);

	if (smaller == num1)
	{

		bigger = num2;
	}

	else
	{

		bigger = num1;
	}

	for (int i = bigger;; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{

			return i;
		}
	}
}