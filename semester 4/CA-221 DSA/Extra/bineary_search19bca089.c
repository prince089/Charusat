#include<stdio.h>

int main(){
    int n;
    printf("\n enter hoe many element you want in arry");
    scanf("%d",&n);
    int arr[n],i,j,high=n-1,low=0,temp,mid=(low+high)/2;


    for(i=0;i<n;i++){
        printf("\n enter your value");
        scanf("%d",&arr[i]);
        //printf("\n %d",arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
        printf("\n %d",arr[i]);
    }

 printf("\n enter your number to find ");
 scanf("%d",&temp);

 while(low <= high){
        mid = (low+high)/2;

    if(temp < arr[mid]){
        high = mid-1;
    }
    else if(temp == arr[mid]){
        printf("\n your elemant found %d",temp);
        return 0;
    }
    else{
        low = mid+1;
    }

 }
 printf("\n i m realy sorry i m not able to find elemant::(");
}
