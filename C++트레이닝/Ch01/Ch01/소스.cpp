//#include <stdio.h>
//#include "cursor.h" // ������� cursor ����
//#pragma warning(disable:4996) // scanf ���� ����
//
//class RandNum // Ŭ���� RandNum ����
//{
//private: // ����� ������(�ܺ� ���� �Ұ�)
//	int num; // ������ ���� num ����
//
//public: // ���� ������
//	RandNum() { randomize(); } // �������� �� �ʱ�ȭ
//	void Generate() { num = random(100) + 1; } // ���� ���� (���� 1~100)
//	BOOL Compare(int input) { // input���� ���� ��� ��ȯ
//		if (input == num) { // input���� num ��
//			printf("������ϴ�.\n"); // ���ٸ�, ���ڿ� ���
//			return TRUE; // True ��ȯ
//		}
//		else if (input > num) { // input���� num ��
//			printf("�Է��� ���ں��� �� �۽��ϴ�.\n"); // �۴ٸ�, ���ڿ� ���
//		}
//		else { // input���� num ��
//			printf("�Է��� ���ں��� �� Ů�ϴ�.\n"); // ũ�ٸ�, ���ڿ� ���
//		}
//		return FALSE; // False ��ȯ
//	}
//};
//
//class Ask // Ŭ���� Ask ����
//{
//private:
//	int input; // ������ ���� input ����
//
//public:
//	void Prompt() { printf("\n���� ���� ���ڸ� ���� ������.\n"); } // 
//	BOOL AskUser() { // �� ���� �Ǵ� ����
//		printf("���ڸ� �Է��ϼ���(���� ���� 999) : "); // ���ڿ� ���
//		scanf("%d", &input); // ����ڿ��� ���ڸ� �Է¹���
//		if (input == 999) { // input���� 999 ��
//			return TRUE; // 999�� ��� True ��ȯ
//		}
//		return FALSE; // �ƴҰ�� False ��ȯ
//	}
//	int GetInput() { return input; }
//};
//
//int main()
//{
//	RandNum R; // ��ü R ����
//	Ask A; // ��ü A ����
//
//	for (;;) { // �ݺ�
//		R.Generate(); // 1~100 ������ ���� ����
//		A.Prompt(); // Ask ȣ��
//		for (;;) { // �ݺ�
//			if (A.AskUser()) {
//				exit(0); // ���� 999�� ��� (True==0), ����
//			}
//			if (R.Compare(A.GetInput())) { // Compare�� input���� ����
//				break; // ���� False�� ���, �ݺ��� ��� �ݺ���
//			}
//		}
//	}
//}



//#include <stdio.h>
//
//int main()
//{
//	int age = 25; // ������ ���� age ����, �ʱ�ȭ
//	bool isAdult = age > 19; // age�� 19���� ũ��(���̸�) �Ʒ� �ڵ� ����
//	if (isAdult) {
//		puts("�����Դϴ�.");
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	enum origin { EAST, WEST, SOUTH, NORTH }; // ������ �±� origin ����
//	enum origin mark = WEST; // ��������
//	printf("%d ����\n", mark); // mark��(WEST : 1) ���
//
//	struct SHuman // ����ü �±� SHuman ����
//	{
//		char name[12]; // ����ü ��� ����
//		int age; // ����ü ��� ����
//		double height; // ����ü ��� ����
//	};
//	struct SHuman kim = { "�����", 29, 181.4 }; // ����ü ���� kim ����
//	printf("�̸� = %s, ���� = %d\n", kim.name, kim.age); // ����ü ���� kim�� name, age(���) ����, ���
//}
//#include <stdio.h>
//
//int main()
//{
//	int* pi; // ������ ������ ���� pi ����
//
//	pi = new int; // ������ ���� pi�� ������ ���� Ȯ��
//	*pi = 123; // ������ ���� pi ����
//	printf("*pi = %d\n", *pi); // *pi ���
//	delete pi; // �Ҵ� ���� (new�� ������ ������ ����)
//}
//#include <stdio.h>
//
//int main()
//{
//	int* ar; // ������ ������ ���� ar ����
//
//	ar = new int[5]; // ������ ���� �ټ����� ������ 20����Ʈ�� ���� Ȯ��
//	for (int i = 0; i < 5; i++) {
//		ar[i] = i; // �迭 �Ҵ�
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d��° = %d\n", i, ar[i]); // ������ ar ���
//	}
//	delete[] ar; // �Ҵ� ���� (new�� ������ ������ ����)
//}
//#include <iostream> // cout�� �⺻ ��� ���� iostream
//using namespace std; // ǥ�� C++ ���̺귯���� ���ǵ� std ���ӽ����̽� ��� ����
//
//int main()
//{
//	cout << "First C++ Program" << endl; // ���ڿ� ���, endl==\n(����)
//
//	int i = 56; // ������ ���� i ����, �ʱ�ȭ
//	char ch = 'S'; // ������ ���� ch ����, �ʱ�ȭ
//	double d = 2.414; // �Ǽ��� ���� d ����, �ʱ�ȭ
//
//	cout << i << ch << d << endl; // ����, �Ǽ�, ���ڿ� ���
//}
//#include <iostream> // cout�� cin�� �⺻ ��� ���� iostream
//using namespace std; // ǥ�� C++ ���̺귯���� ���ǵ� std ���ӽ����̽� ��� ����
//
//int main()
//{
//	int age; // ������ ���� age ����
//	cout << "���̸� �Է��Ͻÿ� : "; // ���ڿ� ���
//	cin >> age; // ���� ���� �Է¹޾� age�� ����
//	cout << "����� " << age << "���Դϴ�." << endl; // age�� ���ڿ� ���
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 3; // ������ ���� i ����, �ʱ�ȭ
//	int& ri = i; // ������ ���۷��� ri ����, �ʱ�ȭ
//
//
//	printf("i = %d, ri = %d\n", i, ri); // i�� ri �� ���
//	ri++; // ri �� ����
//	printf("i = %d, ri = %d\n", i, ri); // i�� ri �� ���
//	printf("i���� = %x, ri���� = %x\n", &i, &ri); // i�� ri�� �ּ� ���, ���
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 3, j = 7; // ������ ���� i,j ����, �ʱ�ȭ
//	int& ri = i; // ������ ���۷��� ri ����, �ʱ�ȭ
//
//	printf("i=%d, ri=%d, j=%d\n", i, ri, j); // i,ri,j�� �� ���
//	ri = j; // ri�� ������ i �̹Ƿ�, i=j�� ����
//	printf("i=%d, ri=%d, j=%d\n", i, ri, j); // i,ri,j�� �� ���
//}
//#include <stdio.h>
//
//void plusref2(int& ra) // ���۷����� �μ��� �޴� �Լ� plusref2 ����
//{
//	ra = ra + 1; // ra ���� 1 ������Ŵ
//}
//
//int main()
//{
//	int a = 5; // ������ ���� a ����, �ʱ�ȭ
//
//	plusref2(a); // �Լ� ȣ��
//	printf("a = %d\n", a); // a ���
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <string.h> // ���ڿ� �Լ� �������
//#pragma warning(disable:4996) // strcpy�� ���� ����
//
//void InputName(char *&Name) // �������� ���۷����� �μ��� �޴� �Լ� InputName ����
//{
//	Name = (char *)malloc(32); // Name�� ������ 32����Ʈ�� ������ ���� Ȯ��
//	strcpy(Name,"kim sang hyung"); // Kim sang hyung�� Name�� ����
//}
//
//int main()
//{
//	char *Name; // ������ ������ ���� Name ����
//
//	InputName(Name);
//	printf("�̸��� %s�Դϴ�.\n", Name); // Name ���
//	free(Name); // Name �Ҵ� �޸� ����
//}
//#include <stdio.h>
//
//int ar[] = { 1,2,3,4,5 }; // ������ ������ ���ҷ� ���� �迭 ar ����, �ʱ�ȭ
//
//int& GetAr(int i) // �Լ� GetAr ����
//{
//	return ar[i]; // ar�迭���� i��° ��Ҹ� ã�� �� ������ ����
//}
//
//int main()
//{
//	GetAr(3) = 6; // GetAr(3) �迭��ҿ� 6 ����
//	printf("ar[3] = %d\n", ar[3]); // ar[3] ���
//}
//#include <stdio.h>
//
//int GetSum(int from, int to, int step = 1, int base = 0); // �Լ� GetSum ����
//
//int main()
//{
//	printf("%d\n", GetSum(1, 10)); // 1���� 10������ �հ� ���
//	printf("%d\n", GetSum(1, 10, 2)); // 1���� 2�� �ǳʶپ� 10������ �հ� ���
//	printf("%d\n", GetSum(1, 10, 2, 10)); // 10�� �⺻���� �Ͽ�, 1���� 2�� �ǳʶپ� 10������ �հ� ���
//}
//
//int GetSum(int from, int to, int step/* = 1*/, int base/* = 0*/) // �Լ� GetSum ����
//{
//	int sum = base; // base�� from ~ to�� �հ踦 ���ϵ�, step ������ �ǳʶ�
//	for (int i = from; i <= to; i += step) {
//		sum += i;
//	}
//	return sum; // sum�� ����
//}
//#include <stdio.h>
//
//int Add(int a, int b); // �� ���� ������ �μ��� ������ �Լ� Add ����
//int Add(int a, int b, int c); // �� ���� ������ �μ��� ������ �Լ� Add ����
//double Add(double a, double b); // �� ���� �Ǽ��� �μ��� ������ �Լ� Add ����
//
//int main()
//{
//	printf("1 + 2 = %d\n", Add(1, 2)); // 1 + 2 ���
//	printf("3 + 4 + 5 = %d\n", Add(3, 4, 5)); // 3 + 4 + 5 ���
//	printf("1.414 + 2.54 = %f\n", Add(1.414, 2.54)); // 1.414 + 2.54 ���
//}
//
//int Add(int a, int b)
//{
//	return a + b; // a + b�� ����
//}
//
//int Add(int a, int b, int c)
//{
//	return a + b + c; // a + b + c�� ����
//}
//
//double Add(double a, double b)
//{
//	return a + b; // a + b�� ����
//}
//#include <stdio.h>
//
//void sub(int a) { printf("int : %d\n", a); } // ������ �μ��� �޴� �Լ� sub ����
//void sub(int* a) { printf("pointer : %p\n", a); } // ������ �����͸� �μ��� �޴� �Լ� sub ����
//
//int main()
//{
//	int i = 1234, * pi = &i; // ������ ���� i ����, �ʱ�ȭ
//
//	sub(i); // �Լ� ȣ��
//	sub(pi); // �Լ� ȣ��
//	sub(NULL); // �̶� NULL�� ���� 0���ε�, �����ͷε� �� �� ������ �����Ϸ��� ������ �ؼ�
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int randfunc(int n) // ������ �μ��� ������ �Լ� randfuc ����
//{
//	return rand() % n; // n���� ���� �ϳ��� ���� �����Ͽ� ������
//}
//
//int main()
//{
//	int i, j, k; // ������ ���� i,j,k ����
//
//	i = randfunc(10); // 10���� ���� �ϳ��� ���� ����
//	j = randfunc(100); // 100���� ���� �ϳ��� ���� ����
//	k = randfunc(50); // 50���� ���� �ϳ��� ���� ����
//	printf("���� = %d,%d,%d\n", i, j, k); // i,j,k ���
//}
#include <stdio.h>

int main(void)
{
	double* ar; // �Ǽ��� ������ ar ����

	ar = new double[100]; // ũ�Ⱑ 100�� �Ǽ��� �迭 �Ҵ�
	ar[50] = 3.14; // 50��° ��ҿ� 3.14 ����
	printf("%f\n", ar[50]); // 50��° ��� ���
	delete[] ar; // �Ҵ�޸� ����
}