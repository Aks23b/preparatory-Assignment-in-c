#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
        int numbers=atol(argv[2]);
        for(int i=1; i<=10; i++)
        {
                printf("\n argv[%d]*%d= %d",numbers,i,numbers*i);
        }
}
