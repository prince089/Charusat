#include<stdio.h>

int main(){
    int array[]={10,11,12,14,1,2,6,2},i,j,temp,ex,pj;


    for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
            pj = i;
            for(j=i+1;j<sizeof(array)/sizeof(array[0]);j++){
                if(array[j] < array[pj]){
                    ex = array[j];
                    pj = j;
                }
                 temp = array[i];
                array[i] = array[pj];
                array[pj] = temp;
            }



    }

    for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
        printf("\n %d",array[i]);
    }
}
