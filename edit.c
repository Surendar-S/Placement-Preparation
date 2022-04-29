// input: ABCDEGH
// output: aHBgeFDe

# include<stdio.h>
void main(){
    char str[200];
    scanf("%[^\n]s",str);
    int len,i=0;
    for(len=0;str[len]!='\0';len++);
    while(str[i]!='\0'){
        if(i==0){
            char temp = str[i+1];
            str[i+1] = str[len-1];
            str[len-1] = temp;
            len = len-1;
            i=i+1;
        }
        else{
            char temp = str[i];
            str[i] = str[len-1];
            str[len-1] = temp;
            len = len-1;
            i=i+1;
        }
        
    }
    printf("%s",str);
}
