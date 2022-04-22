#include<stdio.h>
#include<ctype.h>
void main(){
    int i, len, count = 0;
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    for(len=0;str[len]!='\0';len++){
        str[i] = tolower(str[i]);
    }
    char temp[256];
    for(i=0;i<len;i++)
        temp[str[i]] = 1;
    for(i=0;i<256;i++){
        if(temp[i] == 1)
            count++;
    }
    printf("%d", count);
    if(count == 26)
        printf("Panagram");
    else
        printf("Not a Panagram");
}
