#include <stdio.h>
void main()
{
    char str[100];
    scanf("%[^\n]s", str);
    int i, j, len, pos = 0;
    for(len=0;str[len]!='\0';len++);
    for(i=len;i>=0;i--){
        printf("%c", str[i]);
    }
}
I/P: String Reverse
O/P: esreveR gnirtS
