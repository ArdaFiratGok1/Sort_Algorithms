#include <stdio.h>
int main(){
    int arr[] = {5, 2, 8, 7, 1, 3, 4, 6, 9, -5}; //n =  10
    int temp;
    for(int i = 0; i < 9 ; i++){
    
        for(int j = 0;j<9-i;j++){

            if(arr[j] > arr [j+1]){

                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }

    }
    for(int k = 0 ; k<10;k++){
        printf("%d ",arr[k]);
    }
}