#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");


    int i,n;


    printf("\n enter how many element you want to enter : ");
    scanf("%d",&n);

    int no[n],max=no[0],min=no[0];
    for(i=0;i<n;i++){

        printf("\n enter %d element : ",i+1);
        scanf("%d",&no[i]);

        if(max<no[i])
            max=no[i];

        if(min>no[i])
            min=no[i];
    }

    printf("\n max num is : %d",max);
    printf("\n min num is :%d ",min);

    system("pause");
}
