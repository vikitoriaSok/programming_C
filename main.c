#include <stdio.h>
#define N 20

int main() {
    int sieve[N] = {0}; // 0 - ������������ �������, 1 - ���������
    int i, j;

    // ��������� 0 � 1
    sieve[0] = sieve[1] = 1;

    // ��������� �������� "������ ����������"
    for (i = 2; i * i < N; i++) {
        if (sieve[i] == 0) { // ���� i - �������
            for (j = i * i; j < N; j += i) {
                sieve[j] = 1; // �������� ������� i ��� ���������
            }
        }
    }

    // ������� ������� �����
    printf("Prime numbers up to %d: ", N);
    for (i = 2; i < N; i++) {
        if (sieve[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


