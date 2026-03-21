#include<stdio.h>

int main(){
    int n,fac=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fac = fac + 1;
        }
    }
    printf("No. of factor of given no. is = %d ",fac);
return 0;
}