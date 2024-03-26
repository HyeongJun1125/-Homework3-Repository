#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("\n2021041069 ������\n\n");
    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i; // input[i]�� i���� ����.

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);      // input�� �迭�� �̸��̸鼭 �迭�� ù��°�� input[0]�� �ּҰ��� ����.
    answer = sum1(input, MAX_SIZE);       // sum1 �Լ��� ��ȯ���� answer������ ����.
    printf("The sum is: %f\n\n", answer); // �Ʒ� �Լ����� 1���� 100���� ��� �迭�� ���� ���϶�� �����Ƿ� ������ 4950.000000�� ���.
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);      // input�� ���� �������� �����Ƿ� �����ϰ� input[0]�� �ּҰ��� ����.
    answer = sum2(input, MAX_SIZE);       // sum2 �Լ��� ��ȯ���� answer������ ����.
    printf("The sum is: %f\n\n", answer); // �Ʒ� �Լ����� 1���� 100���� ��� �迭�� ���� ���϶�� �����Ƿ� ������ 4950.000000�� ���.
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);      // ������ ���� �������� �����Ƿ� �����ϰ� input[0]�� �ּҰ��� ����.
    answer = sum3(MAX_SIZE, input);       // sum3 �Լ��� ��ȯ���� answer������ ����.
    printf("The sum is: %f\n\n", answer); // �Ʒ� �Լ����� 1���� 100���� ��� �迭�� ���� ���϶�� �����Ƿ� ������ 4950.000000�� ���.
}

float sum1(float list[], int n) // ���ڸ� �迭�� int�� ������ ����. (float list[]�� float*list�� ����)
{
    printf("list \t= %p\n", list);     // �� �Լ����� ���ڸ� (input,100)�� �޾����Ƿ� ���� ������ input�� �ּҰ��� input[0]�� �ּҰ��� ���.
    printf("&list \t= %p\n\n", &list); //*** ���������� ����� �迭 input�� sum1 �Լ����� ������������ �Ű������� float list[]�� ���ڰ� �ǰ�
    // ���� &list�� input�� ���� <�Ű����� list�� �ּҰ�>�� �ǹ��Ѵ�.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum; // �迭 index 0���� 100���� ��� �迭�� ������ ���Ͽ� ��ȯ.
}

float sum2(float *list, int n)
{
    printf("list \t= %p\n", list); // �� �Լ����� ���ڸ� (input,100)�� �޾����Ƿ� ���� ������ input�� �ּҰ��� input[0]�� �ּҰ��� ���.
    // ������ �����ߵ� �Ű����� ������ float list[]�� float*list�� ������ ������. (list[], * ��� �ּҰ��� �ޱ� ����)
    printf("&list \t= %p\n\n", &list); //*** ���������� ����� �迭 input�� sum1 �Լ����� ������������ �Ű������� float *list�� ���ڰ� �ǰ�
    // ���� &list�� input�� ���� �Ű������� <�����ͺ��� list�� �ּҰ�>�� �ǹ��Ѵ�.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i); // �ռ� ���ϵ鿡�� �����ߵ� (list+i)�� list�� ���������� ����� �������¸�ŭ i�� �̵�.
    // ���� �ݺ����� ���¿����� �׷��Ƿ� 0���� 100���� ù �ε������� �� �ε��������� ��� ���ϴ� �ڵ��̹Ƿ� �迭������ ������ ��µ�.
    return tempsum; // �迭 index 0���� 100���� ��� �迭�� ������ ���Ͽ� ��ȯ.
}

/* stack variable reuse test */
float sum3(int n, float *list)
{
    printf("list  \t= %p \n", list);     // ���� �����ϰ� input[0]�� �ּҰ��� ���.
    printf("&list  \t= %p \n\n", &list); // ������ ���� list�� �ּҰ��� ���.
    // sum1�� sum2������ �ּҰ��� ���̰� �ִ� ������ sum1, sum2 �Լ��� ����� �����Ͽ� �����غ����� ��
    // �Լ��� �Ű������� ������ ������ �ְڴٴ� ������ ����� �� ������ ����
    // Stack ���� �޸𸮿��� �Ҵ�Ǵ� ������ �޶��� �� �ְڴٴ� ����� ����.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum; // sum2�� �����ϰ� ��� �迭�� ������ ���Ͽ� ��ȯ.
}