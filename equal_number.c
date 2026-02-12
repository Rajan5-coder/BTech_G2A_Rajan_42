#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    if(a==b){
        printf("%d and %d are equal numbers",a,b);
    } else{
        printf("%d and %d are not equal",a,b);
    }
    return 0;
}
