#include <stdio.h>
#define N 20

int main() {
    int sieve[N] = {0}; // 0 - потенциально простое, 1 - составное
    int i, j;

    // Исключаем 0 и 1
    sieve[0] = sieve[1] = 1;

    // Реализуем алгоритм "Решето Эратосфена"
    for (i = 2; i * i < N; i++) {
        if (sieve[i] == 0) { // Если i - простое
            for (j = i * i; j < N; j += i) {
                sieve[j] = 1; // Помечаем кратные i как составные
            }
        }
    }

    // Выводим простые числа
    printf("Prime numbers up to %d: ", N);
    for (i = 2; i < N; i++) {
        if (sieve[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


