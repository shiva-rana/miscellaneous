//Write a program to send entire data of a structure to a function
//employee name, id, sal
//input and print

#include<stdio.h>
typedef struct 
{
	char name[40];
	char id[25];
	float sal;
}employee;

void input(employee * e)
{
	printf("Enter the name of the employee: ");
	fgets(e->name,40,stdin);

	printf("Enter the employee id: ");
	fgets(e->id,25,stdin);

	printf("Enter the salary of the employee: ");
	scanf("%f", &e->sal);
}
void output(employee e)
{
	printf("__________EMPLOYEE DATA__________\n");
	printf("Name: %s", e.name);
	printf("Id: %s", e.id);
	printf("Salary: %0.2f", e.sal);
}
int main()
{
	employee emp;
	input(&emp);
	output(emp);
	return 0;
}