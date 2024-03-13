/* Read At most 10 names of students and store them into an array of char nameof students[10][50] sort the array and display them back */

#include<stdio.h>
int main(void)
{
        int arr[10][50];
        for(int i=0; i<10; i++)
        {
                printf("\n Enter the array :");
                scanf("%s",arr[i]);
        }
        for(int i=0; i<10; i++)
        {
                printf(" %s ",arr[i]);
        }
}