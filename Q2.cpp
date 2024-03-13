/*Write a program to calculate a factorial of a number*/
// #include<iostream>
// using namespace std;
// int factorial(int No)
// {
//         int i=1;
//         int fact=1;
//         while(i<=No)
//         {
//                 fact=fact*i;
//                 i++;
//         }
//         return fact;
// }
// int main(void)
// {
//         int No;
//         cout<<"Emter The Number :";
//         cin>>No;
//         int result=factorial(No);
//         cout<<"Factotal of this number<<!"<<No<<"="<<result<<" ";
// }

// Using for loop
// #include<iostream>
// using namespace std;
// int factorial(int no)
// {
//         int fact=1;
//         for(int i=1; i<=no; i++)
//         {
//                 fact=fact*i;
//         }
//         return fact;
// }
// int main(void)
// {
//         int No;
//         cout<<"Enter The Number :";
//         cin>>No;
//         int result=factorial(No);
//         cout<<"!"<<No<<" = "<<result;
// }

// using Recursion: function call itself

#include<iostream>
using namespace std;
int factorial(int no)
{
        if(no<1)
        {
                return 1;
        }else{
                return no*factorial(no-1);
        }
}
int main(void)
{
        int No;
        cout<<"Enter The Number :";
        cin>>No;
        int ans=factorial(No);
        cout<<"!"<<No<<" = "<<ans;
}