/*Write a code if a string is a paindrome then print the msg as a string is a palindrome number*/
// #include<iostream>

// using namespace std;
// void palidrome()
// {
//         char arr[]={"abcdcba"};
//         int i=0;
//         int j=sizeof(arr)/sizeof(arr[0]);
//         while(i<j)
//         {
//                 if(arr[i]!=arr[j])
//                 {
//                         cout<<"Given String is not a palindrome Number ";
//                         exit(0);
//                 }
//                 i++;
//                 j--;
//         }
//         cout<<"Given string is a palindrome";


// }
// int main(void)
// {
//         char arr[8];
//         //cout<<"Enter the String : ";
//         // cin>>arr;
//         palidrome();
// }

// #include<iostream>
// #include<stdio.h>
// #include<string.h>
// using namespace std;

// void print(char arr[])
// {
//         for(int i=0; i<8; i++)
//         {
//                 printf("\n",arr[i]);
//         }
// }
// void ispalindrome(char arr[])
// {
//         int i=0;
//         int j=7;
//         while(i<j)
//         {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//                 i++;
//                 j--;
//                 puts(arr);
//         }
        
// }
// int main(void)
// {
//         char arr[8];
//         char original[8];
//         printf("Enter the Array : ");
//         gets(arr);
//         // strcpy(original,arr);
//         ispalindrome(arr);
// }




// #include<iostream>
// using namespace std;
// int main(void)
// {
//         char arr[8]={"abcdcba"};
//         int i=0; 
//         int j=7;
//         while(i<j)
//         {
//                 if(arr[i]!=arr[j])
//                 {
//                         cout<<"Given String is not a palindrome Number ";
//                 }
//                 i++;
//                 j--;
//         }
//         cout<<"Given string is a palidrome ";
// }

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//         char arr1[20];
//         char arr2[20];
//         printf("\n Enter the array : ");
//         gets(arr1);
//         strcpy(arr2,arr1);
//         strrev(arr2);
//         if(strcmp(arr1,arr2)==0)
//         {
//                 printf("The Given String is a palindrome number");
//         }else
//         {
//                 printf("The Given String is not a palindrome Number");
//         }
// }

/* Palindrome Number */
#include<stdio.h>
#include<string.h>
int main(void)
{
        char arr[20];
        int flag=0;
        int i=0;
        gets(arr);
        int len=strlen(arr);
        for(int i=0; i<len; i++)
        {
                if(arr[i]!=arr[len-i-1])
                {
                        flag=1;
                        break;
                }
        }
        if(flag==0)
        {
                printf("\n Given String is a palindrome string");
        }else
        {
                printf("\n Given String is not a palindrome string ");
        }

}