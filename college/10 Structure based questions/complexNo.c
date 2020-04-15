//Write a C program to add two complex numbers by passing structure to a function.

typedef struct 
{
	int num;
	int root;
}complex;
void input(complex *in)
{
	printf("Enter the real part: ");
	scanf("%d", &in->num);
	printf("Enter the imaginary part: ");
	scanf("%d", &in->root);
}
void add(complex first, complex second, complex * sum)
{
	sum->num = first.num + second.num;
	sum->root = first.root + second.root;
}
int main()
{
	complex first;
	printf("Enter the data for first complex number\n");
	input(&first);

	complex second;
		printf("\nEnter the data for second complex number\n");
	input(&second);

	complex sum;
	add(first, second, &sum);

	if(sum.root > 0)
	{
		printf("Result: %d + %di", sum.num, sum.root);
	}
	else if(sum.root < 0)
	{
		printf("Result: %d i %di", sum.num, abs(sum.root));
	}
	else
	{
		printf("Result: %d", sum.num);
	}
	return 0;
}