//#include <stdio.h>
//#include <stdlib.h> // malloc, free 사용
//
//int main()
//{
//    int N, X;
//
//    if (scanf("%d %d", &N, &X) != 2) {
//        return -1; // 입력 에러 처리
//    }
//
//    // 동적 할당
//    int* A = (int*)malloc(N * sizeof(int));
//
//    if (A == NULL) {
//        return -1; // 메모리 할당 실패 처리
//    }
//
//    // 수열 A 입력
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &A[i]);
//    }
//
//    // X보다 작은 수 출력
//    for (int i = 0; i < N; i++) {
//        if (A[i] < X) {
//            printf("%d ", A[i]);
//        }
//    }
//
//    // 할당된 메모리 해제 (가장 중요!)
//    free(A);
//
//    return 0;
//}