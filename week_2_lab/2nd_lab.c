// searchKey(int array[], int size, int key) �Լ��� �̿��ؼ� 
// ã���� �ε��� ��ȯ, ��ã���� -1 ��ȯ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search_key(int array[], int size, int key) {

	for (int i = 0; i < size; i++) {
		if (array[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {

#define SIZE 10

	int search, arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	printf("�迭���� ã�ƾ� �� ���ڴ�? ");
	scanf("%d", &search);

	if (search_key(arr, SIZE, search) == -1) {
		printf("ã�� ���ڴ� �����ϴ�.");
	}
	else {
		printf("%d��° �ε����� �ֽ��ϴ�.", search_key(arr, SIZE, search));
	}

	return 0;
}