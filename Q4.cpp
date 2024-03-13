/*Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard. Assign grade 
based on the following rule: */
// #include<iostream>
// using namespace std;
// int main(void)
// {
//         int C;
//         int OS;
//         int java;
//         int OOPS;
//         int DataStructure;
//         int TotalMarks=0;
//         cout<<"Enter The C Marks : ";
//         cin>>C;
//         cout<<"Enter The OS Marks : ";
//         cin>>OS;
//         cout<<"Enter The java Marks: ";
//         cin>>java;
//         cout<<"Enter The OOPS Marks :";
//         cin>>OOPS;
//         cout<<"Enter The Datastructure Marks: ";
//         cin>>DataStructure;
//         TotalMarks=(C+OS+java+OOPS+DataStructure)/5;
//         if(TotalMarks>=90)
//         {
//                 cout<<"EXCELLENT";
//         }else if(TotalMarks>=80 && TotalMarks<90)
//         {
//                 cout<<"A";
//         }else if(TotalMarks>=70 && TotalMarks<80)
//         {
//                 cout<<"B";
//         }else if(TotalMarks>=60 && TotalMarks<70)
//         {
//                 cout<<"C";
//         }else if(TotalMarks<60)
//         {
//                 cout<<"Fail";
//         }

// }

/*Second Apprach using Function */

#include<iostream>
using namespace std;
int accepctmarks()
{
        int no;
        cout<<"Enter The marks of Subject : ";
        cin>>no;
        return no;
}
int main(void)
{
        int marks;
        cout<<"Enter the marks : ";
        cin>>marks;
        if(marks>20)
        {
                cout<<"The marks can't be greater than 20";
        }else 
        {
                int OS=accepctmarks();
                int C=accepctmarks();
                int DS=accepctmarks();
                int OOP=accepctmarks();
                int APP=accepctmarks();
                int total=(OS+C+DS+OOP+APP);
                if(total>=90)
                {
                        cout<<"Excellent";
                }else if(total>=80 && total<90)
                {
                        cout<<"A Grade";
                }else if(total>=70 && total<80)
                {
                        cout<<"B Grade";
                }else if(total>=60 && total<70)
                {
                        cout<<"C Grade";
                }else if(total<60)
                {
                        cout<<"Fail";
                }
        }
     
        
}
