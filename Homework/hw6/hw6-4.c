#include <stdio.h>

int main() {
    int n;                // จำนวนพจน์ที่ผู้ใช้ต้องการ
    long term = 9;        // ตัวเลขเริ่มต้นของอนุกรม
    long sum = 0;         // เก็บผลรวม

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Series = ");
    for (int i = 1; i <= n; i++) {
        printf("%ld", term);   // แสดงพจน์ปัจจุบัน
        sum += term;           // บวกเข้าผลรวม

        if (i < n) {
            printf(" + ");     // ใส่เครื่องหมาย + ถ้ายังไม่ใช่พจน์สุดท้าย
        }

        term = term * 10 + 9;  // คำนวณพจน์ถัดไป เช่น 9 → 99 → 999 → ...
    }

    printf("\nSum = %ld\n", sum);

    return 0;
}