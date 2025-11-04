#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(int* arr);

int main() {
	int number[4];
	printf("네 정수를 입력해주세요: ");

	for (int i = 0; i < 4; i++) {
		scanf("%d", &number[i]);
	}

	double result = average(number);
	printf("결과: %.2lf", result);

	return 0;

}

double average(int* arr) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += arr[i];
	}
	return sum / 4.0;
}

