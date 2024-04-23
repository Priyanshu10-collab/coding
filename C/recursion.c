#include<stdio.h>

double fac(int a){
    //base case
    if(a == 0 || a == 1)
    return 1;

    //processing
    return a*fac(a-1);
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The Factorial of %d : %f",n,fac(n));

    return 0;
}