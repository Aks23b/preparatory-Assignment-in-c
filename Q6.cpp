/*Write a program to perform Matrix Multiplication*/

#include<iostream>
using namespace std;
void accepctarray(int arr1[3][3])
{
        cout<<endl<<"Enter The Array: ";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cin>>arr1[i][j];
                }
        }
}
void printarray(int arr1[3][3])
{
        cout<<"Print the array: ";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<arr1[i][j]<<" ";
                }
        }
        cout<<endl;
}
void sumofarray(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        arr3[i][j]=arr1[i][j]+arr2[i][j];
                       
                }
                
        }
        printarray(arr3);
}
void mulofarray(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        arr3[i][j]=arr1[i][j]*arr2[i][j];
                }
        }
        printarray(arr3);
}
int main(void)
{
        int arr1[3][3];
        int arr2[3][3];
        int arr3[3][3];
        accepctarray(arr1);
        accepctarray(arr2);
        sumofarray(arr1,arr2, arr3);
        mulofarray(arr1,arr2,arr3);

}
