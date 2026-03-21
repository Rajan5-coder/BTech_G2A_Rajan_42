#include<stdio.h>

int main(){
    int n,n1,rev=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(rev==n1)
    printf("Given no. is a Palindrom no. %d",rev);
    else printf("Given no. is not a Palindrom no. %d",rev);
return 0;
}