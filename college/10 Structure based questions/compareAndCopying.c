//Write a program to compare and copying struture variable.
//int a, b;
//two struct to compare
//one copy

#include<stdio.h>
typedef struct 
{
	int a;
	int b;
}num;
int main()
{
	num first={1,2};
	num second={2,2};
	num copy;
	//copying

	copy.a =first.a;
	copy.b = first.b;

	printf("Values in copy are: ");
	printf("%d, %d",copy.a, copy.b);
	//comparing
	if(first.a == second.a)
	{
		printf("\nVariable a are equal");
	}
	if(first.b == second.b)
	{
		printf("\nVariable b are equal");
	}
	return 0;
}