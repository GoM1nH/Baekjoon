#include <stdio.h>

#define KG    0
#define CM    1
#define RANK  2

int main() {

    int n;
    int people[50][3] = { 0 };

    scanf("%d", &n);

    for (int i=0 ; i<n ; i++) { // 몸무게, 키 입력받음
        scanf("%d %d", &people[i][KG], &people[i][CM]); 
        people[i][RANK] = 1;
    }

    for (int i=0 ; i<n ; i++) { //등수 매기기
        for (int j=i+1 ; j<n ; j++) {
            if (people[i][KG] > people[j][KG] && people[i][CM] > people[j][CM]) {
                people[j][RANK] += 1;
            } else if (people[i][KG] < people[j][KG] && people[i][CM] < people[j][CM]) {
                people[i][RANK] += 1;
            }
        }
    }

    for (int i=0 ; i<n ; i++) { //랭크 출력
        printf("%d ", people[i][RANK]);
    }
    printf("\n");

    return 0;
}