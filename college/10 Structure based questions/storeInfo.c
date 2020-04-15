//Write  a program to store information of a student
//name, section, roll no, age ,branch ,course

#include<stdio.h>
typedef struct
{
	char name[40];
	char section;
	int rno;
	int age;
	char course[20];
	char branch[20];
}student;

void studentIn(student *s)
{
	printf("__________STUDENT INPUT__________\n");
	printf("Enter the name of the student: ");
	fgets(s->name, 40, stdin);

	printf("Enter the section of the student: ");
	scanf("%c", &s->section);

	printf("Enter the roll number  of the student: ");
	scanf("%d", &s->rno);

	printf("Enter the age of the student: ");
	scanf("%d", &s->age);

	fflush(stdin);

	printf("Enter the Course of the student: ");
	fgets(s->course, 20, stdin);

	printf("Enter the Branch of the student: ");
	fgets(s->branch, 20, stdin);
}

void studentOut(student s)
{
	printf("___________STUDENT INFO__________");
	printf("\nName: %s", s.name);
	printf("\nSection: %c", s.section);
	printf("\nRoll number: %d", s.rno);
	printf("\nAge: %d", s.age);
	printf("\nCourse: %s", s.course);
	printf("\nBranch: %s", s.branch);
}

int main()
{
	student s;
	studentIn(&s);
	studentOut(s);
	return 0;
}