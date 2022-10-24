#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    static long long n;scanf("%lld",&n);
    long long int k = (long  long int )log2(n);
    for(int i=1;i<=50-k-1;i++) printf("0");
    while(k>=0) printf("%lld",(n>>k--) & 1);
    return 0;
}
