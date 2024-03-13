#include<stdio.h>
struct student
{
        char nameofstudent[20];
        int rollno;
        int marks;
};
int main(void)
{
        struct student s1;
        printf("\n Enter the Name of student :");
        scanf("%s",s1.nameofstudent);
        printf("\n Enter the Roll no: ");
        scanf("%d",&s1.rollno);
        printf("\n Enter The marks");
        scanf("%d",&s1.marks);
        printf("\n Nameofstudent=%s RollNo=%d Marks=%d",s1.nameofstudent,s1.rollno,s1.marks);


}