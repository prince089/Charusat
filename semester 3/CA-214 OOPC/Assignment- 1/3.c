#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int no1,no2,no3,max,min;

   printf("enter your first number : ");
    scanf("%d",&no1);

    printf("enter your second number : ");
    scanf("%d",&no2);

    printf("enter your third number : ");
    scanf("%d",&no3);

        if(no1 > no2 && no1 > no3){

            printf("\n no1 is max");
        }


         if(no2 > no1 && no2 > no3){

            printf("\n no2 is max");
        }


        if(no3 > no1 && no3 > no2){

            printf("\n no3 is max");
        }

       if(no1 < no2 && no1 < no3){

            printf("\n no1 is min");
        }


         if(no2 < no1 && no2 < no3){

            printf("\n no2 is min");
        }


        if(no3 < no1 && no3 < no2){

            printf("\n no5 is min");
        }

    system("pause");
}
