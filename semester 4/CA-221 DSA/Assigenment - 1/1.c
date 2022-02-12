#include<stdio.h>
int stack[100],top=-1,value,i,el_number;
void push(){
    if(top>el_number-2)
        printf("\n your stack is full");
    else{
        top+=1;
        printf("\n enter value to insert");
        scanf("%d",&value);
        stack[top]=value;
    }
};

void pop(){
    if(top == -1)
        printf("\n stack is underflow");
    else{
        value=stack[top];
        top -=1;
        printf("your %d is deleted",value);
    }

};

void Display(){
    for(i=top;i>-1;i--){
        printf("\n%d",stack[i]);
    }

};



int main(){

    printf("\n enter how many elemenrt you want to enter : ");
    int case_ch;
    scanf("%d",&el_number);
    while(1){
        printf("\n enter your choice ::=>>");
        printf("\n 1.enter element \n 2.delete element \n 3. Display \n 4. exit");
        scanf("%d",&case_ch);

        switch(case_ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;

        case 3:
            Display();
            break;
        case 4:
            return 0;
            break;
        default :
            printf("\n please enter valid choice \"lol\"");
            break;
        }
    }

	return 0;

}
