#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete1();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
int choice;
while (1)
{
    printf("\n 1.Insert ");
    printf("\n 2.Delete ");
    printf("\n 3.Display  ");
    printf("\n 4.Quit ");
    printf("\n Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete1();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\n Wrong choice.... ");
        }
    }
}
void insert()
    {
        int item;
        if(rear == MAX - 1)
        printf("\nQueue Overflow ");
        else
        {
        if(front== - 1)
            front = 0;
        printf("\n Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
        //if(front== - 1)
          //  front = 0;
        }
}
void delete1()
{
    if(front == - 1 || front > rear)
    {
        printf("\n Queue Underflow ");
            return;
    }

    else
    {
        printf("\nElement deleted from queue is : %d", queue_array[front]);
        if(front == rear){
                //printf("\n you are in f = r");

                front = -1;
                rear = -1;
            }
        front = front + 1;

    }

}
void display()
{
    int i;
    if(front == - 1)
        printf("\n Queue is empty");
    else
    {
        printf("\n Queue is:");
        for(i = front; i <= rear; i++)
            printf("\n %d ", queue_array[i]);
            printf("\n");
    }
}

