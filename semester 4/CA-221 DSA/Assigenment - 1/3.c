#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int push(int stack[max], int *top, int data)
{
      if(*top == max -1)// testing for overflow
            return(-1);
      else
      {
            *top = *top + 1;
            stack[*top]= data;
            return(1);
      }
}
int pop(int stack[max], int *top, int data)
{
      if(*top == -1)// to check underflow
            return(-1);
      else
      {
            data= stack[*top];
            *top = *top - 1;
            printf("Popped number is : %d\n",data);
            return(data);
      }
}
void show(int stack[max],int *top)
{
    int i,j;
    for (i=*top;i>=0;i--){
            printf("\n");
        //for(j=0;j<='\0' + 1;j++)

        printf("%d",stack[i]);

    }
    if(*top == -1)
    {
        printf("Stack is empty");
    }
}
int main()
{
      int stack[max], nm;
      int top,ch,reply;
      top = -1;   // Initialize Stack
      printf("\tMENU");
      printf("\n----------------------------\n");
      printf("      1. PUSH\n");
      printf("      2. POP\n");
      printf("      3. SHOW\n");
      printf("      4. EXIT\n");
      printf("----------------------------\n");
      while(1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1 : // push
                        printf("\nEnter number : ");
                        scanf("%d",&nm);
                        reply = push(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Full or OVERFLOW\n");
                        else
                              printf("'%d' is Pushed in Stack.\n\n",nm);
                  break;
                  case 2 : // pop
                        reply = pop(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Empty or UNDERFLOW\n");
                        else
                              printf("Popped number is : %d\n",reply);

                              printf("\n");
                  break;
                  case 3 :
                        show(stack,&top);
                        break;
                  case 4 :
                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}

