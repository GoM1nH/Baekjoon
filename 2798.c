#include <stdio.h>
#include <malloc.h>

int blackjack(int n, int m, int *card) {
    int x, y, z, sum=0, max=0;
    for (x=0 ; x<n ; x++) {
        for(y=x+1 ; y<n ; y++) {
            for(z=y+1 ; z<n ; z++) {
                sum = *(card+x) + *(card+y) + *(card+z);

                if (sum == m) return sum;
                else if (sum < m) {
                    if (sum > max) max = sum;
                }
            }         
        }
    }

    return max;
}

int main() {
    
    int n, m;
    scanf("%d %d", &n, &m);
    int *card = (int *)malloc(sizeof(int) * n);
    for (int i=0 ; i<n ; i++) {
        scanf("%d", &card[i]);
    }
    
    int res = blackjack(n, m, card);
    printf("%d\n", res);

    free(card);
}