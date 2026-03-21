#include<stdio.h>

int main(){
    int m,n,pow=1;  // m --> Base & n --> Power 
    printf("Enter the value of m and n :");
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++){
        pow = pow*m;
    }
     printf("%d",pow);
return 0;
}