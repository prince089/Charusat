#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int push(char stack[max][80], int *top, char data[80])
{
      if(*top == max -1)// testing for overflow
            return(-1);
      else
      {
            *top = *top + 1;
            strcpy(stack[*top], data);
            return(1);
      }
}
int pop(char stack[max][80], int *top, char data[80])
{
      if(*top == -1)// to check underflow
            return(-1);
      else
      {
            strcpy(data, stack[*top]);
            *top = *top - 1;
            return(1);
      }
}
void show(char stack[max][80],int *top)
{
    int i,j;
    for (i=*top;i>=0;i--){
            printf("\n");
        for(j=0;j!='\n' + 1;j++)
    {
        printf("%c",stack[i][j]);
    }
    }
    if(*top == -1)
    {
        printf("Stack is empty");
    }
}
int main()
{
      char stack[max][80], nm[80];
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
                        printf("\nEnter string : ");
                        scanf("%s",nm);
                        reply = push(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Full or OVERFLOW\n");
                        else
                              printf("'%s' is Pushed in Stack.\n\n",nm);
                  break;
                  case 2 : // pop
                        reply = pop(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Empty or UNDERFLOW\n");
                        else
                              printf("Popped string is : %s\n",nm);
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

