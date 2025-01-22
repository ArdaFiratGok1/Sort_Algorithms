#include <stdio.h>
int main(){
    int arr[] = {5, 2, 8, 7, 1, 3, 4, -5, 3, 5}; //n =  10
    int min;
    int temp;
    for(int i = 0;i<9;i++){
        min=i;
        for(int j = 1+i ;j<10;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int k = 0 ; k<10;k++){
        printf("%d ",arr[k]);
    }

}
