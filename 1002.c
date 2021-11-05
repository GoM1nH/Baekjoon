#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main(void) {

    int t, i;
    float x1, x2, y1, y2, r1, r2;

    scanf("%d", &t);

    float *result = (float *)malloc(sizeof(float)*t);

    for (i=0 ; i<t ; i++) {

        scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);

        float h = pow(x2-x1,2) + pow(y2-y1,2);
        float distance = sqrt(h); // 두 원 중심 사이의 거리
        float rsum = r1 + r2;
        float rlarge;

        if (r1 > r2) rlarge = r1;
        else rlarge = r2; 

        if (distance == 0) {
            if (r1 == r2) *(result+i) = -1;
            else *(result+i) = 0;
        } else {
            if (rsum == distance || distance + r1 == r2 || distance + r2 == r1) {
                *(result + i) = 1;
            } else if (distance > rsum || rsum + distance < (2*rlarge)) {
                *(result + i) = 0;
            } else *(result + i) = 2;
        }
    }

     for (i=0 ; i<t ; i++) {
        printf("%.0f\n", *(result + i));
    }

    free(result);

}