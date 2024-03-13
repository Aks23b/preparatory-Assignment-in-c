/*Write a program to input n  numbers on command line arguments and calculate maximum of them*/
// #include<stdio.h>
// int main(int argc, char *argv[])
// {
//         printf("Argument count = %d",argc);
//         for(int i=0; i<argc; i++)
//         {
//                 printf("\n argv[%d]=%s",i,argv[i]);

//         }

// }

/*Enviornment variable */
// int main(int *argc, char *argv[], char *env[])
// {
//         for(int i=0; i<40; i++)
//         {
//                 printf("\n env[%d] = %s",i,env[i]);

//         }
// }

// // supply the command line arguments to perform addition of a number 
// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc, char *argv[])
// {
//         int sum=0;
//         for(int i=0; i<argc; i++)
//         {
//                 sum=sum+atoi(argv[i]);
//         }
//         printf("\n Result= %d",sum);
//         return 0;

// }

/*   */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
        int max=0;
        int a=atoi(argv[1]);
        int b=atoi(argv[2]);
        int c=atoi(argv[3]);

        if(a>b && a>c)
        {
                max=a;
        }else if(b>c && b>a)
        {
                max=b;
        }else
        {
                max=c;
        }
        printf("\n %d",max);

}