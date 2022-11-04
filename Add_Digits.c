#include<stdio.h>
int main(){
    int n,d;
    scanf("%d",&n);
    while(n>9){
        int x=0;
        while(n>0){
            d=n%10;
            n=n/10;
            x+=d;
        }
        n=x;
    }
    printf("%d",n);
}