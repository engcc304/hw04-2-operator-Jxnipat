/*
    จงเติมโค้ดโปรแกรมตามที่แสดงในส่วนของ Placeholder เพื่อแสดงผลลัพธ์ของ Operator ด้านซ้ายมือ พร้อมทั้งแก้ไขโค้ดโปรแกรมให้ถูกต้อง
*/
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    printf("Please enter value (a b) : ");
    scanf("%d %d", &a, &b); // TODO: #11 Input variable 'a' and 'b'

    // TODO: #12 Complete operator, and display all operator output. (and fix all bugs.)
    printf("a = %d , b = %d \n", a, b);
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b); // Missing semicolon at the end of the line
    printf("a / b = %d (b must greater than 0)\n", b > 0 ? a / b : 0); // Corrected the ternary expression
    printf("a %% b = %d \n", a % b); // Escaped '%' by using '%%'
    printf("++a = %d \n", ++a); // Increment 'a' before printing
    printf("a-- = %d \n", a--); // Print 'a' and then decrement it
    printf("a += 1 %d \n", a += 1); // Increment 'a' by 1
    printf("a += b %d \n", a += b); // Increment 'a' by 'b'
    printf("a -= 1 %d \n", a -= 1); // Decrement 'a' by 1
    printf("a -= b %d \n", a -= b); // Decrement 'a' by 'b'
    printf("a *= 1 %d \n", a *= 1); // Multiply 'a' by 1
    printf("a *= b %d \n", a *= b); // Multiply 'a' by 'b'
    printf("a %%= 1 %d \n", a %= 1); // Modulo 'a' by 1
    printf("a %%= b %d \n", a %= b); // Modulo 'a' by 'b'
    printf("a && b %d \n", a && b); // Logical AND between 'a' and 'b'
    printf("a || b %d \n", a || b); // Logical OR between 'a' and 'b'
    return 0;
}
