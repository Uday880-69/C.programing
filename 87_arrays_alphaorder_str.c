#include<stdio.h>
#include<string.h>
int main(){
    struct names{
        char name[100];
    };
    struct names arr[100];
    int n,i,j;
    char temp[100];
    printf("Enter the number of names: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name %d: ",i+1);
        scanf("%s",arr[i].name);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(arr[i].name,arr[j].name)>0){
                strcpy(temp, arr[i].name);
                strcpy(arr[i].name, arr[j].name);
                strcpy(arr[j].name, temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for(i=0;i<n;i++){
        printf("%s\n",arr[i].name);
    }
    return 0;
}