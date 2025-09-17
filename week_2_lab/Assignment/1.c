#include <stdio.h>
#define ARR_SIZE 15

int input();
void output(int a, int b);

int main(){

    input();

    return 0;
}

int input(){
    int a, d;

    printf("첫 번째 항? ");
    scanf("%d", &a);

    printf("공차? ");
    scanf("%d", &d);

    output(a, d);

    return 0;
}

void output(int a, int d){

    int arr[ARR_SIZE];

    printf("등차수열: ");

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        arr[i] = a + (d * i);

        printf("%d ", arr[i]);
    }

}
