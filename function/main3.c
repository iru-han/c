//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int recursive(int n);
//
//int main() {
//	recursive(0);
//	return 0;
//}
//
//int recursive(int n) {
//	printf("number: %d\n", n);
//
//	if (n == 10)
//		return 0; // 함수를 끝낸다
//
//	// 스택은 위에 쌓인게 빠진다. 10까지 오르고 스택이 빠지기 때문에 9, 8, 7, ... 이렇게 빠짐
//	recursive(n + 1); 
//}
//
