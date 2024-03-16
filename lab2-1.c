#include <stdio.h>
int main()
{
	printf("----- 2021041069 ������ -----\n");
	char charType;
	int integerType;
	float floatType;
	double doubleType;
	printf("Size of char: %ld byte\n", sizeof(charType));	   // �ڷ��� char�� 1byte�̹Ƿ� 1�� ���.
	printf("Size of int: %ld bytes\n", sizeof(integerType));   // �ڷ��� int�� 4byte �̹Ƿ� 4�� ���.
	printf("Size of float: %ld bytes\n", sizeof(floatType));   // �ڷ��� float�� 4byte �̹Ƿ� 4�� ���.
	printf("Size of double: %ld bytes\n", sizeof(doubleType)); // �ڷ��� double�� 8byte �̹Ƿ� 8�� ���.
	printf("-----------------------------------------\n");
	printf("Size of char: %ld byte\n", sizeof(charType));	   // �ڷ��� char�� 1byte�̹Ƿ� 1�� ���.
	printf("Size of int: %ld bytes\n", sizeof(integerType));   // �ڷ��� int�� 4byte �̹Ƿ� 4�� ���.
	printf("Size of float: %ld bytes\n", sizeof(floatType));   // �ڷ��� float�� 4byte �̹Ƿ� 4�� ���.
	printf("Size of double: %ld bytes\n", sizeof(doubleType)); // �ڷ��� double�� 8byte �̹Ƿ� 8�� ���.
	printf("-----------------------------------------\n");
	printf("Size of char*: %ld byte\n", sizeof(char *));	  // ������ �ڷ��� char�� �޸� ������ 4�̹Ƿ� 4�� ���. (x86����)
	printf("Size of int*: %ld bytes\n", sizeof(int *));		  // ������ �ڷ��� int�� �޸� ������ 4�̹Ƿ� 4�� ���. (x86����)
	printf("Size of float*: %ld bytes\n", sizeof(float *));	  // ������ �ڷ��� float�� �޸� ������ 4�̹Ƿ� 4�� ���. (x86����)
	printf("Size of double*: %ld bytes\n", sizeof(double *)); // ������ �ڷ��� double�� �޸� ������ 4�̹Ƿ� 4�� ���. (x86����)
	return 0;
}

// git ����

/*������ �ڷ����� ��� x86�� 32bit �ü�������� 4����Ʈ�� ����� ������
  x64�� 64it �ü�������� 8����Ʈ�� ����� �Ǵ� ���� Ȯ����.*/

// �����ʹ� Ư�� ������ �޸� �ּҸ� �����ϴ� �ڷ����̸� 1byte�� 8bit�̹Ƿ�
//  ���� 32bit���� ���� ������ �޸��� ũ��� �ִ� 4byte�̴�.
//  �׷��Ƿ� x86�� 32��Ʈ �ü�� �ȿ��� ��� ������ �ڷ����� ũ��� 4byte�̹Ƿ� 4�� ���.

// �̿� ���� ������ 64��Ʈ �ü�������� 64bit�� 8byte�̹Ƿ�
// 8byte�� ��� �ּҸ� ǥ���� �� �ֱ⿡ 8byte�� �޸��� ũ�Ⱑ �Ǹ�,
//  ������ x64���� ���� ��� ��� ������ �ڷ����� ũ�Ⱑ 8byte�� ���� Ȯ���� �� ����.