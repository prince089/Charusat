#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");

    int i, n;

    /* Input upper limit from user */
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    /* Start loop from 1 and increment it by 1 */
    for(i=1; i<=n; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;



    system("pause");
}
