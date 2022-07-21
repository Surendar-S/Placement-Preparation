#include<stdio.h>
int getmax(int a[],int n){
    int maxi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi = a[i];
        }
        else{
            maxi = maxi;
        }
    }
    return maxi;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    int max = getmax(a,n);
    while(max!=0){
        int x = max%10;
        c++;
        max=max/10;
    }
    int y=0;
    for(int j=1,pos=1;j<=c;j++,pos*=10){
        int count[10] = {0};
        int b[n];
        int k=9;
        for(int i=0;i<=n-1;i++){
            ++count[(a[i]/pos)%10];
        }
        for(int i=1;i<=k;i++){
            count[i] = count[i]+count[i-1];
        }
        for(int i=n-1;i>=0;i--){
            b[--count[(a[i]/pos)%10]]=a[i];
        }
        for(int i=0;i<=n-1;i++){
            a[i] = b[i];
        }
        printf("Pass:%d\t",j);
        for(int i=0;i<=n-1;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
//430 8 530 90 88 231 11 45 677 199
