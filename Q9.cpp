#include<iostream>
using namespace std;
void binaryNo(int *No)
{
        int rem[20];
        int i=0;
        while(*No!=0)
        {
                rem[i]=*No%2;
                *No=*No/2;
                i++;
        }
        for(int j=i-1; j>=0; j--)
        {
                cout<<" "<<rem[j];
        }
        cout<<endl;
}
void octal(int *No)
{
        int octal[20];
        int i=0;
        static int j=0;
        while(*No!=0)
        {
                octal[i]=*No%8;
                *No=*No/8;
                i++;
        }
        for(j=i-1; j>=0; j--)
        {
              cout<<octal[j];
        }
       
}
void hexadecimal(int *No)
{
        int hexad[20];
        int i=0;
        while(*No!=0)
        {
                hexad[i]=*No%16;
                *No=*No/16;
                i++;
        }
        for(int j=i-1; j>=0; j--)
        {
                cout<<hexad[j];
        }
}



int main(void)
{
        int No;
        cout<<"Enter The Number: ";
        cin>>No;
        // binaryNo(&No);
        // octal(&No);
        hexadecimal(&No);

        
}