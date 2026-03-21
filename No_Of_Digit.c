#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0){
        count = count + 1;
        n = n/10;
    }
    printf("No. of digit is = %d",count);
return 0;
}