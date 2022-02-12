#include<stdio.h>

int main(){
    int n;
    printf("\n enter hoe many element you want in arry");
    scanf("%d",&n);
    int arr[n],value,i;
       for(i=0;i<n;i++){
        printf("\n enter your value");
        scanf("%d",&arr[i]);
        //printf("\n %d",arr[i]);
    }

    printf("\n enter one number to find from array\n");
    scanf("%d",&value);

    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            //printf("%d\n",i);

        if(value == arr[i]){
            printf("\n congo your value is founded at %d th position \n",i+1);
            return 0;
        }
    }
    printf("\n im realy sorry i m not able to find your number");


}
