#include <stdio.h>
int main(){
    int arr[] = {5, 2, 8, 7, 1, 3, 4, -5, 3, 5}; //n =  10
    int n=10;
    int j;
    int temp;

    for(int i = 1; i < n;i++){

        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int k = 0 ; k<10;k++){
        printf("%d ",arr[k]);
    }
}