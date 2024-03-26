#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
    printf("\n2021041069 ������\n\n");
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);         // �迭�� �̸����� �������̸� �迭�� ù��° �ּ��� one[0]�� �ּҸ� ����.
    printf("&one = %p\n", &one);       // �����ϰ� one[0]�� �ּҰ��� ���.
    printf("&one[0] = %p\n", &one[0]); // one[0]�� �ּҰ��� ���. ��������� 3���� ���� ���� ����Ŵ.
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //&one[0]�� 5�� ���ڷ� ��.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); // ������ �����ߵ� one == &one[0] �̹Ƿ� ��������� ���� ��°��� �����ϰ� ����.
    return 0;
}
void print_one(int *ptr, int rows)
{ /* print out a one-dimensional array using a pointer */
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //(ptr + i)�� �ּҰ�, �׸��� �� �ּҰ��� �����ϴ� ���� ����ϵ��� �ϴ� �ݺ���.
    // �ٸ� ���ϵ鿡�� �����ߵ� ptr[0]�� �������̰� ����� ������ ũ�⸸ŭ �󸶳� �̵��� �������� ������.
    //  Ex) (ptr+1)�� ��� ������ ���� ptr�� ���ڰ� int�� �迭�̰� int�� ũ��� 4byte. ���� 4byte��ŭ 1�� �̵��ϹǷ�
    // ��������� &one[1]�� �ǹ��ϸ� *(ptr+1)�� �� �������� �ǹ��ϹǷ� 1�� ����.
    printf("\n");
}