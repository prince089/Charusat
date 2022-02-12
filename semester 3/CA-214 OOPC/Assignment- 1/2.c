#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");

    printf("menu : \n 1. addition \n 2.subtraction \n 3. multiplaction \n 4. division ");
    printf("\n enter your choice : ");
    int ch,no1,no2;

    float ans;
    scanf("%d",&ch);
    printf("enter your first number : ");
    scanf("%d",&no1);

    printf("enter your second number : ");
    scanf("%d",&no2);

    switch(ch){

                case 1: ans=no1+no2;
                        break;

                case 2: ans=no1-no2;
                        break;

                case 3: ans=no1*no2;
                        break;

                case 4: ans=no1/no2;
                        break;

    }


    printf("\n your answer is : %f",ans);




    system("pause");
}
