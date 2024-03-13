/*Write a program To Check The input Characters for uppercase lowercase Number of digits and other characters Display Appropriate message*/
#include<iostream>
using namespace std;
char checkCharacter(char ch)
{
        if(ch>=97 && ch<=122)
        {
                cout<<"a-z Character printed In Lowecase ";
        }else if(ch>=65 && ch<=90)
        {
                cout<<"A-Z Character printed In Uppercase ";
        }else if(ch>=45 && ch<=57)
        {
                cout<<"0-9 character are in Number form";
        }


}
int main(void)
{
        char ch;
        cout<<"Enter The Character:";
        cin>>ch;
        checkCharacter(ch);
}
