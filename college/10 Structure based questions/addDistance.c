//Write a program to add two distances in inch-feet system
//1 feet = 12 inch
#include<stdio.h>
typedef struct
{
	int feet;
	int inch;
}inchFeet;

void input(inchFeet * in)
{
	printf("Enter the feet's: ");
	scanf("%d", &in->feet);

	printf("Enter the inch's: ");
	scanf("%d", &in->inch);

	printf("\n");
}
void process(inchFeet first, inchFeet second, inchFeet * out)
{
	//inch = (inch1 + inch2)/12;
	//feet += (inch1 + inch2)%12;

	out->inch = (first.inch + second.inch)%12;
	out->feet = first.feet + second.feet;
	out->feet += ((first.inch + second.inch)/12);
}
int main()
{
	inchFeet first;
	inchFeet second;

	printf("Enter the first distance: \n");
	input(&first);
	printf("Enter the second distance: \n");
	input(&second);

	inchFeet out;
	process(first, second, &out);

	printf("Resultant: \n");
	printf("%d ft %d in", out.feet, out.inch);
	return 0;
}
