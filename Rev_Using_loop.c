#include<stdio.h>

int main(){
    int n,rev=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    printf("Reverse of given no. is = %d ",rev);
return 0;
}