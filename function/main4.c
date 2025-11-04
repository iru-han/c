#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fruit(int n);

int main() {
	fruit(1);
	return 0;
}

int fruit(int count) {
	printf("apple: %d\n", count);

	if (count == 3)
		return 0; // 함수를 끝낸다

	fruit(count + 1);
	printf("jam\n");
}

