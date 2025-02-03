#include<stdio.h>
void descending_order(int arr[] , int size);
int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<=size-1; i++){
        scanf("%d", &arr[i]);

    }

descending_order(arr, size);

printf("result of array\n");
for(int i=0; i<=size-1; i++){
   printf("%d ", arr[i]); 
}

}
void descending_order(int arr[], int size){
    int n;
    for(int  i=0; i<=size-1; i++){
        for(int j=0;j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp;
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}