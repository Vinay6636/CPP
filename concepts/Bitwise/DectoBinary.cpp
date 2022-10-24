#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    static long  n,sum,t=1;
    scanf("%ld",&n);
    while(n){
        sum+=(n&1)*t;
        t*=10;
        n>>=1;
    }
    printf("%ld",sum);
    return 0;
}
