#include <stdio.h>
int main(){
    int arr[] = {5, 2, 8, 7, 1, 3, 4, 6, 2, -5}; //n =  10
    int swap=0;
    int temp;
    int k=0;
    while(swap==0){
        swap=1;
            for(int i = 0;i<9-k;i++){
                if(arr[i]>arr[i+1]){
                    swap=0;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }

            }
        k++;
    }
    for(int k = 0 ; k<10;k++){
        printf("%d ",arr[k]);
    }


}