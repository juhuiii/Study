#include<stdio.h>

int main()
{
	double* ar; //double형 ar포인터 선언

	ar = new double[100]; //ar에 100만큼의 배열 새로운 공간 창출
	ar[50] = 3.14; //51번째 배열에 3.14의 값을 대입
	printf("%f\n", ar[50]);// 51번째 ar 값을 실수형으로 출력
	delete[] ar; //new연산자를 통한 ar공간 삭제
}