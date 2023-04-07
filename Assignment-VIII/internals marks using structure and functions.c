#include<stdio.h>

struct Student
 {
	int rollNumber;
    char name[20];
    char department[20];
	int assignments;
	int presentation;
	int viva_voce;
};

void Marks(struct Student stu) 
{
		int internalMarks;
		internalMarks = stu.assignments + stu.presentation + stu.viva_voce;
		printf("\n\n***********************");
		printf("\nRoll Number          : %d",stu.rollNumber);
		printf("\nName                 : %s",stu.name);
		printf("\nDepartment           : %s",stu.department);
		printf("\nTotal Internal Marks : %d",internalMarks);
		printf("\n***********************");
}



void main() 
{
	struct Student students[5];
	int i, totalStudents = 5;
	for(i=0;i<totalStudents;i++) {
		printf("\n\nEnter Details for Student %d",i+1);
		printf("\nEnter Roll Number: ");
		scanf("%d",&students[i].rollNumber);
		printf("\nEnter Name: ");
		scanf("%s",students[i].name);
		printf("\nEnter Department: ");
		scanf("%s",students[i].department);
		printf("\nEnter Assignment Mark(0-10): ");
		scanf("%d",&students[i].assignments);
		printf("\nEnter Presentation Mark (0-5): ");
		scanf("%d",&students[i].presentation);
		printf("\nEnter Viva-Voce Mark (0-5): ");
		scanf("%d",&students[i].viva_voce);
}
	for(i=0;i<totalStudents;i++) 
	{
		Marks(students[i]);	
	}	
}


