// �迭�� ������ ������ ���ϴ� ��ȯ���� ������ isEqualArrayInt �Լ��� �ۼ��Ͻÿ�

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
		printf("�� �迭�� �����ϴ�.");
	}
	else {
		printf("�� �迭�� ���� �ʽ��ϴ�.");
	}

	return 0;
}