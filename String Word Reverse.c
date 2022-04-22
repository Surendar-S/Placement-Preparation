#include <stdio.h>
void main()
{
    char str[100];
    scanf("%[^\n]s", str);
    int i, j, len, pos = 0;
    for(len=0;str[len]!='\0';len++);
    for(i=0;i<=len;i++){
        if(str[i] == ' ' || i==len){
            for(j=i-1;j>=pos;j--)
                printf("%c", str[j]);
            printf(" ");
            pos = i+1;
        }
    }
}
