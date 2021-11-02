#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main() {
    
    int i, t;
    //min은 작동 횟수 최솟값
    scanf("%d", &t);
    
    int *min = (int *)malloc(sizeof(int) * t);

    for (i=0 ; i<t ; i++) {
        
        long long x, y, d;
        *(min+i) = 0;
        scanf("%lld %lld", &x, &y);

        if (y > x) {
        //x는 항상 y보다 작은 값을 갖는다
            
            d = y-x; //d 는 x와 y사이의 거리
            
            if (d == 1) {
                *(min+i) = 1;
            } else if (d == 2) {
                *(min+i) = 2;
            } else if (d <= 4) {
                *(min+i) = 3;
            } else {
                int k=2;

                while (*(min+i) == 0) { //pow(k+1,2) pow(k,2)

                    if ( (pow(k,2) < d) && (pow(k+1,2) >= d) ) {
                    
                        if (d >= (pow(k+1,2)-k)) {
                            *(min+i) = pow(k+1,2)-pow(k,2);
                        } else {
                            *(min+i) = pow(k+1,2) -pow(k,2);
                            *(min+i) -= 1;
                        }

                    } else {
                    
                        k++;
                    
                    }
              
                }
            }                        
        }        
    }
    
    for (i=0 ; i<t ; i++) printf("%d\n", *(min+i));

    free(min);
    
}