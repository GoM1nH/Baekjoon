#include <stdio.h>

int HanoiTowerCount(int n, char from, char by, char to, int *cnt) {

  *cnt += 1;

	if(n != 1) {
        HanoiTowerCount(n-1, from, to, by, cnt);
        HanoiTowerCount(n-1, by, from, to, cnt);
  }

  return *cnt;
}

void HanoiTower(int n, char from, char by, char to) {

	if (n==1) printf("%c %c\n", from, to);
  else {
        HanoiTower(n-1, from, to, by);
        printf("%c %c\n", from, to);
        HanoiTower(n-1, by, from, to);
  }
}

int main() {
    
    int n, *count;
    int data = 0;
    count = &data;

    scanf("%d", &n);
    
    if (n>=1 && n<=20){
        int t = HanoiTowerCount(n ,'1', '2', '3', count);
        printf("%d\n",t);
        HanoiTower(n, '1', '2', '3');
    }
}