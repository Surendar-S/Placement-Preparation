// sample input: 3
// sample output:3 2 1 1 2 3


#include <stdio.h>
void display(int n){
    if(n<1){
        return;
    }
    else{
        printf("%d ",n);
        display(n-1);
        printf("%d ",n);

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}
