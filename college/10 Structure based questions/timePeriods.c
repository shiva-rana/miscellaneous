//Write a program to find difference between two time periods using structure.
//hh:mm:ss

#include<stdio.h>
typedef struct 
{
	int hh;
	int mm;
	int ss;
}timePeriod;
void input(timePeriod * p)
{
	printf("Enter the hours: ");
	scanf("%d", &p->hh);

	printf("Enter the minutes: ");
	scanf("%d", &p->mm);

	printf("Enter the seconds: ");
	scanf("%d", &p->ss);
}
void process(timePeriod first, timePeriod second, timePeriod * out)
{
	if(second.hh * 60 * 60 + second.mm * 60 + second.ss < first.hh * 60 * 60 + first.mm * 60 + first.ss )
	{
		if(first.ss < second.ss)
		{
			out->ss = first.ss - second.ss + 60;
			first.mm --;
		}
		else
		{
			out->ss = first.ss - second.ss ;
		}

		if(first.mm < second.mm)
		{
			out->mm = first.mm - second.mm + 60;
			first.hh --;
		}
		else
		{
			out->mm = first.mm - second.mm ;
		}

		out->hh = first.hh - second.hh;
	}
	else
	{
		if(second.ss < first.ss)
		{
			out->ss = second.ss - first.ss + 60;
			second.mm --;
		}
		else
		{
			out->ss = second.ss - first.ss ;
		}

		if(second.mm < first.mm)
		{
			out->mm = second.mm - first.mm + 60;
			second.hh --;
		}
		else
		{
			out->mm = second.mm - first.mm ;
		}

		out->hh = second.hh - first.hh;
	}
}
void output(timePeriod out)
{
	printf("\n__________TIME PERIOD DIFFERENCE__________");
	printf("\nDifference: %d:%d:%d ", out.hh, out.mm, out.ss);
}
int main()
{
	printf("________ENTER INFO________\n");
	printf("First Period: \n");
	timePeriod first;
	input(&first);

	printf("\nSecond Period: \n");
	timePeriod second;
	input(&second);

	timePeriod out;

	process(first, second, &out);
	output(out);
	return 0;
}