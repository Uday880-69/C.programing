#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,count_char=0,count_word=0,inword=0,len;
    printf("ENTER THE STRING: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;str[i]!='\0'&& str[i]!='\n';i++){
        count_char++;
        if(str[i]==' ' || str[i]=='\t'){
            inword=0;
        }
        else if(!inword){
            inword=1;
            count_word++;
        }
    } 
    printf("total characters =%d\n",count_char);
    printf("total words =%d\n",count_word);
    return 0;
}