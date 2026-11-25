#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length,i=0,count=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    for(i=0;i<length;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    puts(str);
    for(i=0;i<length;i++){
       switch(str[i]){
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
                   count++;
                   break;
       }
    }
    printf("total vowels=%d",count);
    return 0;
}
