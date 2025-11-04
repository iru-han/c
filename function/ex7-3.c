#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_char(char ch, int count); // 함수 선언, 헤더

int main() {
    print_char('A', 7);
    printf("\n");
    return 0;
}

void print_char(char ch, int count) { // 매개변수 - 재료
    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }


}
