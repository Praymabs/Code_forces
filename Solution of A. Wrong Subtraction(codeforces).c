#include<stdio.h>

int main()
{
    long long int a=0,b=0,i,n;
    scanf("%lld %lld", &n, &a);
    for(i=1; i<=a; i++){
           b = n%10;
    if(b==0){
        n/=10;
    }else{
        n-=1;
    }
    }
    printf("%lld\n",n);
}
