#include<stdio.h>

int max(int n){
    int count=0;
    while(n!=0){
        int a=n%10;
        count++;
        n=n/10;
    }
    return count;
}


int getmax(int a[],int n){
    int maximum;
    for(int i=0;i<n;i++){
        if(max(a[i])>max(a[i+1])){
            maximum = a[i];
        }
    }
    return maximum;
}


void main(){
    int a[5] = {11,123,1234,1,10};
    int max = getmax(a,5);
    printf("%d",max);
}
