//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	try {
//		printf("�������� ���� �Է��Ͻÿ� : ");
//		scanf("%d", &a); // a�� �Է¹���
//		if (a < 0) throw a; // a�� �����̸� ����
//		printf("������ ���� �Է��Ͻÿ� : ");
//		scanf("%d", &b);
//		if (b == 0) throw "0���δ� ���� �� �����ϴ�."; // b�� 0�̸� ���ڿ� ���ܸ� ����
//		printf("������ ����� %d�Դϴ�.\n", a / b); // ����� ���
//	}
//	catch (int a) { // a���� ���޹޾� ������ �� �ȴٴ� ������ ����ϰ� ��ü ����� ����
//		printf("%d�� �����̹Ƿ� ������ �ź�\n", a);
//	}
//	catch (const char* message) { // �޽����� ��� �� ��� ����
//		puts(message);
//	}
//}
//#include <stdio.h>
//
//void divide(int a, int d) // �� ���� �μ� a,d�� �޾� ������ ����� �����
//{
//	if (d == 0) throw "0���δ� ���� �� �����ϴ�."; // d�� 0�̸� ���ܸ� ����
//	printf("������ ��� = %d�Դϴ�.\n", a / d);
//}
//
//int main()
//{
//	try {
//		divide(10, 0); // �Լ� ȣ��
//	}
//	catch (const char* message) { // �޽����� ��� �� ��� ����
//		puts(message);
//	}
//	divide(10, 5); // �Լ� ȣ��
//}
//#include <stdio.h>
//
//class C // Ŭ���� C ���� �� ����
//{
//	int a;
//public:
//	C() { puts("������ ȣ��"); } // ����Ʈ ������ ȣ��
//	~C() { puts("�ı��� ȣ��"); } // �ı��� ȣ��
//};
//
//void divide(int a, int d)
//{
//	if (d == 0) throw "0���δ� ���� �� �����ϴ�."; // d�� 0�̸� ���ܸ� ����
//	printf("������ ��� = %d�Դϴ�.\n", a / d);
//}
//
//void calc(int t, const char* m) // ���� ��ü c�� ������ �� ���ܸ� ����Ű�� divide(10,0) ȣ��
//{
//	C c;
//	divide(10, 0);
//}
//
//int main()
//{
//	try {
//		calc(1, "���");
//	}
//	catch (const char* message) { // �޽����� ��� �� ��� ����
//		puts(message);
//	}
//	puts("���α׷��� ����˴ϴ�.");
//}
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//int main()
//{
//	int num;
//	int age;
//	char name[128];
//
//	try {
//		printf("�й��� �Է��Ͻÿ� : ");
//		scanf("%d", &num); // �й��� �Է¹���
//		if (num <= 0) throw num; // �й��� ������� ��
//		try {
//			printf("�̸��� �Է��Ͻÿ� : ");
//			scanf("%s", name); // �̸��� �Է¹���
//			if (strlen(name) < 4) throw "�̸��� �ʹ� ª���ϴ�"; // �̸��� 4����Ʈ �̻��̾�� ��
//			printf("���̸� �Է��Ͻÿ� : ");
//			scanf("%d", &age); // ���̸� �Է¹���
//			if (age <= 0) throw age; // ���̴� ������� ��
//			printf("�Է��� ���� => �й�:%d, �̸�:%s, ����:%d\n", num, name, age);
//		}
//		catch (const char* Message) { // �޽����� ��� �� ��� ����
//			puts(Message);
//		}
//		catch (int) { // ���̰� ������ ��� ���ܸ� ����
//			throw;
//		}
//	}
//	catch (int n) { // ������ ���ܸ� ó��
//		printf("%d�� �����̹Ƿ� �������� �ʽ��ϴ�.\n", n);
//	}
//}
//#include <stdio.h>
//
//int report()
//{
//	if (true/*���� �߻�*/) return 1; // ���� �߻� �� 1�� ������
//
//	// ������� ������ ������ �۾� �Ϸ�����
//	return 0; // �۾� ������ �Ϸ� �� 0�� ����
//}
//
//int main()
//{
//	int e;
//
//	e = report(); // ����Ʈ�Լ� ȣ��
//	switch (e) {
//	case 1: // 1�� ������ ���
//		puts("�޸𸮰� �����մϴ�.");
//		break;
//	case 2: // 2�� ������ ���
//		puts("���� ������ �ʰ��߽��ϴ�.");
//		break;
//	case 3: // 3�� ������ ���
//		puts("�ϵ� ��ũ�� ���� á���ϴ�.");
//		break;
//	default:
//		puts("�۾��� �Ϸ��߽��ϴ�.");
//		break;
//	}
//}
//#include <stdio.h>
//
//enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL };
//void report() throw(E_Error)
//{
//	if (true/*���� �߻�*/) throw OVERRANGE; // ���� �߻��� OVERRANGE�� ����
//
//	// ������� ������ ������ �۾� �Ϸ�����
//}
//
//int main()
//{
//	try {
//		report(); // ���ܸ� ����
//		puts("�۾��� �Ϸ��߽��ϴ�."); // �Լ� ȣ�⹮ ���
//	}
//	catch (E_Error e) { // ������ ������ ���ܿ� ���� ó��
//		switch (e) {
//		case OUTOFMEMORY:
//			puts("�޸𸮰� �����մϴ�.");
//			break;
//		case OVERRANGE:
//			puts("���� ������ �ʰ��߽��ϴ�.");
//			break;
//		case HARDFULL:
//			puts("�ϵ� ��ũ�� ���� á���ϴ�.");
//			break;
//		}
//	}
//}
//#include <stdio.h>
//
//class Exception // Ŭ���� Exception ���� �� ����
//{
//private:
//	int ErrorCode;
//
//public:
//	Exception(int ae) : ErrorCode(ae) { }
//	int GetErrorCode() { return ErrorCode; } // ErrorCode ����
//	void ReportError() {
//		switch (ErrorCode) { // ��쿡 ���� ó��
//		case 1:
//			puts("�޸𸮰� �����մϴ�.");
//			break;
//		case 2:
//			puts("���� ������ �ʰ��߽��ϴ�.");
//			break;
//		case 3:
//			puts("�ϵ� ��ũ�� ���� á���ϴ�.");
//			break;
//		}
//	}
//};
//
//void report() // ���� �߻��� ���� ��ü�� �����Ͽ� ����
//{
//	if (true/*���� �߻�*/) throw Exception(3); // ���ܰ�ü�� �����Ͽ� ����
//
//	// ������� ������ ������ �۾� �Ϸ�����
//}
//
//int main()
//{
//	try {
//		report(); // �Լ� ȣ��
//		puts("�۾��� �Ϸ��߽��ϴ�.");
//	}
//	catch (Exception& e) { // ���۷����� ����
//		printf("���� �ڵ� = %d => ", e.GetErrorCode()); // ���
//		e.ReportError(); // ��������
//	}
//}
//#include <stdio.h>
//
//class ExNegative // Ŭ���� ExNegative : ������ ���� ���ܸ� ó��
//{
//protected:
//	int number;
//
//public:
//	ExNegative(int n) : number(n) { }
//	virtual void PrintError() { // PrintError ���󼱾�
//		printf("%d�� �����̹Ƿ� �߸��� ���Դϴ�.\n", number); // ���� �޽��� ���
//	}
//};
//
//class ExTooBig : public ExNegative // Ŭ���� ExTooBig : 100�� �ʰ��ϴ� ���� ���� ���Ǹ� ó��
//{
//public:
//	ExTooBig(int n) : ExNegative(n) { }
//	virtual void PrintError() { // PrintError ���󼱾�
//		printf("%d�� �ʹ� Ů�ϴ�. 100���� �۾ƾ� �մϴ�.\n", number);
//	}
//};
//
//class ExOdd : public ExTooBig // Ŭ���� ExOdd : Ȧ���� ���� ���ܸ� ó��
//{
//public:
//	ExOdd(int n) : ExTooBig(n) { }
//	virtual void PrintError() { // PrintError ���󼱾�
//		printf("%d�� Ȧ���Դϴ�. ¦������ �մϴ�.\n", number);
//	}
//};
//
//int main()
//{
//	int n;
//
//	for (;;) {
//		try {
//			printf("���ڸ� �Է��ϼ���(���� �� 0) : "); // ���
//			scanf("%d", &n); // ���ڸ� �Է¹���
//			if (n == 0) break; // 0�̸� ����
//			if (n < 0) throw ExNegative(n); // ������ ����
//			if (n > 100) throw ExTooBig(n); // 100�̻��̸� ����
//			if (n % 2 != 0) throw ExOdd(n); // Ȧ���� ����
//
//			printf("%d ���ڴ� ��Ģ�� �´� �����Դϴ�.\n", n); // ���
//		}
//		catch (ExNegative& e) {
//			e.PrintError(); // �����ڵ� ���
//		}
//	}
//}
//#include <stdio.h>
//
//class MyClass // Ŭ���� MyClass
//{
//public:
//	class Exception // ���ܸ� ó���ϴ� ���� Ŭ���� Exception
//	{
//	private:
//		int ErrorCode;
//
//	public:
//		Exception(int ae) : ErrorCode(ae) { } // Ŭ���� ������� �ʱ�ȭ
//		int GetErrorCode() { return ErrorCode; } // ErrorCode ����
//		void ReportError() {
//			switch (ErrorCode) { // ��쿡 ���� ó��
//			case 1:
//				puts("�޸𸮰� �����մϴ�.");
//				break;
//			case 2:
//				puts("���� ������ �ʰ��߽��ϴ�.");
//				break;
//			case 3:
//				puts("�ϵ� ��ũ�� ���� á���ϴ�.");
//				break;
//			}
//		}
//	};
//	void calc() {
//		try {
//			if (true/*���� �߻�*/) throw Exception(1); // ���� �߻��� Exception ��ü�� �����Ͽ� ������ �Լ� ���ο��� �� ���ܸ� ���� ó����
//		}
//		catch (Exception& e) {
//			printf("���� �ڵ� = %d => ", e.GetErrorCode()); // ���� �ڵ� �ⷰ
//			e.ReportError(); // ���� ���� ���
//		}
//	}
//	void calc2() throw(Exception) { // �޼��� ������
//		if (true/*���� �߻�*/) throw Exception(2); // Exception Ŭ���� ��� ���� 2�� �ʱ�ȭ��Ų �� ����
//	}
//};
//
//int main()
//{
//	MyClass m; // ��ü ����
//	m.calc(); // �޼��� ȣ��
//	try {
//		m.calc2(); // �޼��� ȣ��
//	}
//	catch (MyClass::Exception& e) {
//		printf("���� �ڵ� = %d => ", e.GetErrorCode()); // ���� �ڵ� ���
//		e.ReportError(); // ���� ���� ���
//	}
//}
//#include <stdio.h>
//
//class Int100 // Ŭ���� Int100 : 100 ������ ������ ����
//{
//private:
//	int num;
//
//public:
//	Int100(int a) {
//		if (a <= 100) { // a�� 100 ������ ��
//			num = a;
//		}
//		else {
//			throw a;
//		}
//	}
//	Int100& operator+=(int b) { // +=������ �����ε�
//		if (num + b <= 100) {
//			num += b;
//		}
//		else {
//			throw num + b; // 100���� ū ���� �Ǹ� ���ܸ� ����
//		}
//		return *this; // ��ü ����
//	}
//	void OutValue() { // �����ڿ� += ������, ���� ����ϴ� OutValue �Լ� ����
//		printf("%d\n", num); // ���
//	}
//};
//
//int main()
//{
//	try {
//		Int100 i(85); // ��ü ����
//		i += 12;
//		i.OutValue(); // �� ���
//	}
//	catch (int n) {
//		printf("%d�� 100���� ū �����̹Ƿ� �ٷ� �� �����ϴ�.\n", n); // ���
//	}
//}
//#include <stdio.h>
//
//void divide(int a, int d) // a�� d�� ������ �Լ� ����
//try {
//	if (d == 0) throw "0���δ� ���� �� �����ϴ�."; // d�� 0�̸� ����
//	printf("������ ��� = %d�Դϴ�.\n", a / d); // ����� ���
//}
//catch (const char* message) {
//	puts(message); // ���
//}
//
//int main()
//{
//	divide(10, 0); // 10 ������ 0
//}
//#include <stdio.h>
//
//class Int100 // Ŭ���� Int100
//{
//private:
//	int num;
//
//public:
//	Int100(int a) // ������ ���� �� ����
//		try : num(a) {
//		if (a > 100) {
//			throw a; // a�� 100���� ũ�� ����
//		}
//	}
//	catch (int a) {
//		printf("%d�� 100���� �� Ů�ϴ�.\n", a); // ���� ���� �޾Ƽ� ���
//	}
//
//	void OutValue() { // num���� ����ϴ� �޼���
//		printf("%d\n", num);
//	}
//};
//
//int main()
//{
//	try {
//		Int100 i(101); // ��ü ����
//		i.OutValue();
//	}
//	catch (int) {
//		puts("��ȿ�� ��ü��"); // ���
//	}
//}
//#include <stdio.h>
//#include "cursor.h"
//#include <new>
//
//int main()
//{
//	int* pi[1000] = { NULL, };
//	int i;
//
//	try {
//		for (i = 0;; i++) { // ���� ����
//			pi[i] = new int[10000000]; // �޸� �Ҵ�
//			if (pi[i]) {
//				printf("%d��° �Ҵ� ����\n", i); // ���
//			}
//			else {
//				printf("%d��° �Ҵ� ����\n", i); // ���
//			}
//			delay(1000); // �����ð� : 1��
//		}
//	}
//	catch (std::bad_alloc& b) { // �Ҵ� ���н�
//		puts("���� �߻�"); // ���
//		b.what();
//	}
//	for (i = 0;; i++) { // ���� ����
//		delete[] pi[i]; // �Ҵ� �޸� ����
//	}
//}
//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myterm() // ���� ó�� ���
//{
//	puts("ó������ ���� ���� �߻�"); // ���
//	exit(-1); // ���α׷� ����
//}
//
//int main()
//{
//	set_terminate(myterm); // ��ó�� ���� �ڵ鷯 ���(myterm)
//	try {
//		throw 1; // �������� ���� ����
//	}
//	catch (char* m) { // ������ : ������ �ƴϱ� ������ myterm�� ȣ���
//	}
//}
//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myunex() // �Լ� myunex
//{
//	puts("�߻��ؼ��� �ȵǴ� ���� �߻�");
//	exit(-2); // ����
//}
//
//void calc() throw(int) // ���� ���ܸ� ������ ����
//{
//	throw "string"; // ���ڿ� ���ܸ� ���� ���
//}
//
//int main()
//{
//	set_unexpected(myunex);
//	try {
//		calc(); calc ȣ��
//	}
//	catch (int) { // ������
//		puts("������ ���� �߻�");  // �̸� ������ ���� myunex ������ ���� �ڵ鷯�� ȣ��Ǿ� ó����
//	}
//	puts("���α׷� ����"); // ���
//}
//#include <stdio.h>
//
//class SomeClass { }; // Ŭ���� SomeClass
//
//void calc() throw(int) // int���� ������ �Լ� calc ����
//{
//	SomeClass obj; // ��ü ����
//	char* p = new char[1000]; // �޸� �Ҵ�
//
//	if (true/*���� �߻�*/) throw 1; // ���� �߻��� 1�� ����
//	delete[] p; // �Ҵ��� �޸� ����
//}
//
//int main()
//{
//	try {
//		calc(); // �Լ�ȣ��
//	}
//	catch (int) { // int���� �޾Ƽ�
//		puts("������ ���� �߻�"); // ���
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int num;
//
//	try {
//		printf("1���� 100������ ������ �Է��Ͻÿ� : "); // ���
//		scanf("%d", &num); // �Է��� ����
//		if (num < 1 || num > 100) throw num; // �Է� ���� ������ 1���� 100 ���̰� �ƴϸ� ����
//		printf("�Է��� �� = %d\n", num); // ���
//	}
//	catch (int num) {
//		printf("%d�� 1���� 100 ������ ������ �ƴմϴ�.\n", num); // ���
//	}
//}
