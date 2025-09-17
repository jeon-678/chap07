// 배열의 내용이 같은지 비교하는 반환값이 정수인 isEqualArrayInt 함수를 작성하시오

#include <stdio.h>

int is_equal_array_int(int a[], int b[], int size) {

	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			return 1;
		}
	}
	return 0;
}

int main() {

#define SIZE 5

	int a[SIZE] = { 34, 53, 32, 87, 29 };
	int b[SIZE] = { 34, 53, 32, 87, 29 };

	if (is_equal_array_int(a, b, SIZE) == 0) {
		printf("두 배열은 같습니다.");
	}
	else {
		printf("두 배열은 같지 않습니다.");
	}

	return 0;
}