#include<stdio.h>
void main(){
  char str[100];
  int i, j, len, pos;
  scanf("%[^\n]s", str);
  for(len=0;str[len]!='\0';len++);
  pos = len;
  for(i=len;i>=0;i--){
    if(str[i] == ' '){
      for(j=i+1;j<=pos;j++)
        printf("%c", str[j]);
      printf(" ");
      pos = i-1;
    }
    else if(i == 0){
        for(j=i;j<=pos;j++)
            printf("%c", str[j]);
    }
  }
}

// I/P: I am a doctor
// O/P: doctor a am I
