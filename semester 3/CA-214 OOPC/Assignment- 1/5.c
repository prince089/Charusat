#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");

    int no[5],i;

    for(i=0;i<5;i++){

        printf("\n enter %d element : ",i+1);
        scanf("%d",&no[i]);

    }
 for(i=0;i<5;i++){

        printf("\n  %d element is :%d",i+1,no[i]);


    }


    system("pause");
}
