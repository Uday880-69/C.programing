#include<stdio.h>
int main(){
    int arr[10],arr1[10],i;
    printf("Enter 10 elements for the first array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr[10];
    for(i=0;i<10;i++){
        ptr[i]=&arr[i];
    }
    for(i=0;i<10;i++){
        arr1[i]=*ptr[9-i];
    }
    printf("Elements of the second array:\n");
    for(i=0;i<10;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}