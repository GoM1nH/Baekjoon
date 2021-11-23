#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y) {
    
    int num1 = *(int *)x;
    int num2 = *(int *)y;

    if (num1 > num2) return 1;
    else if (num1 < num2) return -1;
    else return 0;

}

int main() {
    int num;
    int *p;
    scanf("%d", &num);
    p = (int *)malloc(sizeof(int)*num);
    
    for (int i=0 ; i<num ; i++) {
        scanf("%d", &p[i]);
    }
   
    qsort(p, num, sizeof(int), compare);
    
    for (int i=0 ; i<num ; i++) {
        printf("%d\n", p[i]);
    }
    
    free(p);
}