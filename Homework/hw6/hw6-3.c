#include <stdio.h>

int main() {
    int start, end;

    printf("Start : ");
    scanf("%d", &start);

    printf("End : ");
    scanf("%d", &end);

    // วนจากแม่สูตรคูณ start ถึง end
    for (int i = start; i <= end; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // เว้นบรรทัดหลังจากแต่ละแม่สูตรคูณ
    }
        return 0;
}