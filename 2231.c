#include <stdio.h>

int main() {
    
    int i, n, sum;
    scanf("%d", &n);
    
    for (i=1 ; i<n ; i++) {
        sum = i;
        int t = i;
        while( t != 0 ) {
            sum += t % 10;
            t /= 10;
        }

        if (sum == n) {
            printf("%d\n", i);
            return 0;
        }
    }
    
    printf("0\n");
}
