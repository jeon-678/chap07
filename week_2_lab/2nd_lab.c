// searchKey(int array[], int size, int key) 함수를 이용해서 
// 찾으면 인덱스 반환, 못찾으면 -1 반환

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

	printf("배열에서 찾아야 할 숫자는? ");
	scanf("%d", &search);

	if (search_key(arr, SIZE, search) == -1) {
		printf("찾는 숫자는 없습니다.");
	}
	else {
		printf("%d번째 인덱스에 있습니다.", search_key(arr, SIZE, search));
	}

	return 0;
}