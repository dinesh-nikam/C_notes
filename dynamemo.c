#include<stdio.h>
#include<stdlib.h>
int main(){
    // syntax 
    // malloc:
    //single block memory
    // ptr_name=(type data)malloc (no of elements *size)
int *ptr, n;
printf("enter the no of elements");
scanf("%d", &n);
ptr=(int*)calloc(n,sizeof(int));

ptr = (int*)malloc(n*sizeof(int));

// malloc return type is void  so thats why you have type cast 
if (ptr==NULL){
    printf("memeory is not allocated");
    return 0;

}
printf("enter the memory for reasigning memeory");
scanf("%d",&n);

ptr = (int*)realloc(ptr, n*sizeof(int));
printf("enter the values ");
for(int i=0; i<n; i++){

scanf("%d", &ptr[i]);
}

printf("elements are following ");
for(int i=0; i<n; i++){

printf("%d ", ptr[i]);
}
free(ptr);  


    // calloc 
    // continuous memory allocation

    // realloc
    // reallocation of memeory

    // free 
    // remove the memory

}