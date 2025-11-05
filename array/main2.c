//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// 스택오버플로우 안 나기 위해 재귀함수 대신 반복문으로 팩토리얼 구현
//// 다이나믹 프로그램
//int main()
//{
//    int N = 10;
//    int dp[10]; // 값 저장 배열, 변수에 값을 저장
//
//    dp[0] = 1;
//    for (int i = 1; i < 10; i++) {
//        // 점화식
//		dp[i] = i * dp[i - 1]; // f(n) = n * f(n-1)
//    }
//
//    printf("%d! = %d", N, dp[N-1]);
//
//    return 0;
//}
