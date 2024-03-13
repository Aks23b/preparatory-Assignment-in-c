/*Write a program to reverse The letters present in the Given string Do not use strrev() function */

#include<iostream>
using namespace std;
void reverse(char arr[])
{
        // int len=sizeof(arr)/sizeof(arr[0]);
        for(int i=7; i>=0; i--)
        {
                cout<<arr[i];
        }
}
int main(void)
{
        // char arr[8]="Sunbeam";
        char arr[8];
        gets(arr);
        reverse(arr);
}