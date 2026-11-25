#include<stdio.h>
int main(){
    int arr[100],i,n,*ptr;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements for the array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //using pointer to find the largest element
    ptr=arr;
    int max=*ptr;
    for(i=1;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("The largest element in the array is: %d\n", max);
    return 0;
}