/*Write a program to calculate Fibonacci Series up to N Numbers */
#include<iostream> 
using namespace std;
void fibbonacci(int No)
{
        int a=0;
        int b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=0; i<No; i++)
        {
                int c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
        }
}
int main(void)
{
        int No;
        cout<<"Enter the Number :";
        cin>>No;
        fibbonacci(No);
}