#include<stdio.h>

int main()
{
	double* ar; //double�� ar������ ����

	ar = new double[100]; //ar�� 100��ŭ�� �迭 ���ο� ���� â��
	ar[50] = 3.14; //51��° �迭�� 3.14�� ���� ����
	printf("%f\n", ar[50]);// 51��° ar ���� �Ǽ������� ���
	delete[] ar; //new�����ڸ� ���� ar���� ����
}