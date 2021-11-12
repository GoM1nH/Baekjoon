#include <stdio.h>

int printstar(int x, int y, int n) { // x,y는 말 그대로 (x, y) 좌표를 의미. n은 size라고 생각한다.
    if (((x/n)%3) == 1 && ((y/n)%3) == 1) { printf(" ");}
    else {
        if (n/3 == 0) printf("*");
        else printstar(x, y, n/3);
    }
    return 0;
}

int main() {
    
    int i, j, n;
    scanf("%d", &n);
    for (i=0 ; i<n ; i++) { // 좌표 개념을 사용했다.
        for (j=0 ; j<n ; j++) {
            printstar(i, j, n); // 별 찍음!
        }
        printf("\n");
    }
    
}