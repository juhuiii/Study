//#include <stdio.h>
//
//void swap(int& a, int& b) // �� ������ ������ ���� ��ȯ�ϴ� swap �Լ�
//{
//	int t; // �ӽú��� t ����
//	t = a; a = b; b = t; // t�� �̿��Ͽ� a�� b�� ��ȯ
//}
//
//void swap(double& a, double& b) // �� �Ǽ��� ������ ���� ��ȯ�ϴ� swap �Լ�
//{
//	double t; // �ӽú��� t ����
//	t = a; a = b; b = t; // t�� �̿��Ͽ� a�� b�� ��ȯ
//}
//
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	swap(a, b);
//	swap(c, d);
//	printf("a = %d,b = %d\n", a, b); // a�� b�� �� ���
//	printf("c = %f,d = %f\n", c, d); // c�� d�� �� ���
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//
//void swap(void* a, void* b, size_t len) // void *�� ����Ͽ� ���� Ÿ���� ������ �޾� �޸𸮳��� ������
//{
//	void* t; // ���� Ÿ�� ������ ����
//	t = malloc(len); // ���� Ÿ�� ������ ����
//	memcpy(t, a, len);  // �μ��� ���̿� ���� ũ���� �ӽ� �޸𸮸� �Ҵ��ϰ� �� �޸𸮸� �����Ͽ� ���� ��ȯ
//	memcpy(a, b, len);
//	memcpy(b, t, len);
//	free(t); // �޸�����
//}
//
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	swap(&a, &b, sizeof(int));
//	swap(&c, &d, sizeof(double));
//	printf("a = %d,b = %d\n", a, b); // a�� b�� �� ���
//	printf("c = %f,d = %f\n", c, d); // c�� d�� �� ���
//}
//#include <stdio.h>
//
//template <typename T> // swap �Լ��� ���ø����� ���� : template Ű����� �����ϸ� <> ��ȣ �ȿ� Ÿ�� �μ����� �ǹ��ϴ� typename Ű����� Ÿ�� �μ��� �̸��� ����
//void swap(T& a, T& b)
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//int main()
//{
//	int a = 3, b = 4; // ��ü�� T�� intŸ���� ��
//	double c = 1.2, d = 3.4; // ��ü�� T�� doubleŸ���� ��
//	char e = 'e', f = 'f'; // ��ü�� T�� charŸ���� ��
//
//	swap(a, b); // ������ ���� ȣ��
//	swap(c, d); // �Ǽ��� ���� ȣ��
//	swap(e, f); // ���ڿ� ���� ȣ��
//	printf("a = %d,b = %d\n", a, b); // a�� b�� �� ���
//	printf("c = %f,d = %f\n", c, d); // c�� d�� �� ���
//	printf("e = %c,f = %c\n", e, f); // e�� f�� �� ���
//}
//#include <stdio.h>
//
//template <typename T>
//T max(T a, T b) // �� ���� �μ��� �޾� ū ���� ������
//{
//	return (a > b) ? a : b; // ����� ��ȯ
//}
//
//
//int main()
//{
//	int a = max(1, 2); // max(int, int)�Լ� ��üȭ
//	double b = max(1.1, 2.2); // max(double, double)�Լ� ��üȭ
//	int c = max<int>(2, 3.14); // �� �μ��� Ÿ�� �ٸ� : ����
//	double d = max<double>(2, 3.14);
//	printf("c = %d\n", c); // ����� ���
//}
//#include <stdio.h>
//
//template <typename T>
//T cast(int s) // �μ��� ���޵� �������� s�� TŸ������ ĳ�����Ͽ� ������
//{
//	return (T)s;
//}
//
//int main()
//{
//	unsigned u = cast<unsigned>(1234); // 1234�� unsigned�� ����
//	double d = cast<double>(5678); // 5678�� double�� ����
//
//	printf("u = %d, d = %f\n", u, d); // ����� ���
//}
//#include <stdio.h>
//
//template <typename T>
//void LongFunc(T a)
//{
//	// ���� �� �Լ��� ��ü
//}
//
//int main()
//{
//	int i = 1;
//	unsigned u = 2;
//	short s = 3;
//
//	LongFunc(i); // LongFunc �Լ��� int�� ���� ȣ��
//	LongFunc(u); // LongFunc �Լ��� unsigned�� ���� ȣ��
//	LongFunc(s); // LongFunc �Լ��� short�� ���� ȣ��
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//
//template <class T>
//void swaparray(T* a, T* b, int num)
//{
//	void* t; // void *�� ����Ͽ� ���� Ÿ���� ������ ���� ����
//
//	t = malloc(num * sizeof(T)); // �޸� �Ҵ�
//	memcpy(t, a, num * sizeof(T));
//	memcpy(a, b, num * sizeof(T));
//	memcpy(b, t, num * sizeof(T));
//	free(t); // �޸� ����
//}
//
//int main() // ������ �迭�� ������ �迭�� ��ȯ : �� ���� swaparray �Լ��� ��üȭ
//{
//	int a[] = { 1,2,3 }, b[] = { 4,5,6 };
//	char c[] = "���ڿ�", d[] = "string";
//	swaparray(a, b, sizeof(a) / sizeof(a[0])); // a�� b ��ȯ
//	printf("before c = %s,d = %s\n", c, d); // ����� ���
//	swaparray(c, d, sizeof(c) / sizeof(c[0])); // c�� d ��ȯ
//	printf("after c = %s,d = %s\n", c, d); // ����� ���
//}
//#include <stdio.h>
//#include <string.h>
//
//template <typename T>
//void swap(T& a, T& b) // a�� b�� ���� ��ȯ��
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//class Human // Ŭ���� Human ���� �� ����
//{
//private:
//	char* name;
//	int age;
//
//public:
//	Human() {
//		name = new char[1];
//		name[0] = NULL;
//		age = 0;
//	}
//	Human(const char* aname, int aage) { // �̸��� ���̸� ���Թ޾� ���� �ʱ�ȭ
//		name = new char[strlen(aname) + 1];
//		strcpy(name, aname);
//		age = aage;
//	}
//
//	Human(const Human& other) { // Ŭ������ �����ϴ� ������ ����
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//
//	Human& operator =(const Human& other) { // ������ �����ε�
//		if (this != &other) {
//			delete[] name; // ��ü�� ���� ������ �޸� ����
//			name = new char[strlen(other.name) + 1];
//			strcpy(name, other.name);
//			age = other.age;
//		}
//		return *this;
//	}
//
//	~Human() { // �ı��� ���� �� ����
//		delete[] name; // �޸� ����
//	}
//
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age); // ���
//	}
//};
//
//int main()
//{
//	Human lee("�̽¸�", 10); // ��ü lee ���� �� �ʱ�ȭ
//	Human park("������", 20); // ��ü park ���� �� �ʱ�ȭ
//	lee.intro();
//	park.intro();
//	swap(lee, park); // lee�� park�� ��ȯ��
//	lee.intro();
//	park.intro();
//}
//#include "cursor.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // ��� ��ǥ�� ����
//		cout << value << endl; // value�� ���
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2); // value�� int �� Ŭ����
//	PosValue<char> cv(25, 5, 'C'); // value�� char �� Ŭ����
//	PosValue<double> dv(30, 15, 3.14); // value�� double �� Ŭ����
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//#include <stdio.h>
//
//class Util // Ŭ���� Util ���� �� ����
//{
//public:
//	template <typename T>
//	void swap(T& a, T& b) // a�� b�� �� ��ȯ
//	{
//		T t;
//		t = a; a = b; b = t;
//	}
//};
//
//int main()
//{
//	Util u; // Util ��ü u ���� �� ����
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	char e = 'e', f = 'f';
//
//	u.swap(a, b); // u�� ��� �Լ� swap�� int �� ȣ��
//	u.swap(c, d); // u�� ��� �Լ� swap�� double �� ȣ��
//	u.swap(e, f); // u�� ��� �Լ� swap�� char �� ȣ��
//	printf("a = %d,b = %d\n", a, b); // ����� ���
//	printf("c = %f,d = %f\n", c, d); // ����� ���
//	printf("e = %c,f = %c\n", e, f); // ����� ���
//}
//#include <stdio.h>
//
//template <typename T, int N>
//class Array // Ŭ���� Array ���� �� ���� : ���� Ÿ���� ���� ũ�� �迭�� ǥ���ϸ� ���� �аų� �����ϴ� ��� ����
//{
//private:
//	T ar[N];
//public:
//	void SetAt(int n, T v) { if (n < N && n >= 0) ar[n] = v; }
//	T GetAt(int n) { return (n < N&& n >= 0 ? ar[n] : 0); } // ������ ����� ÷�ڸ� ����ϸ� �����ϰų� 0�� ������
//};
//
//int main()
//{
//	Array<int, 5> ari; // Array<int, 5> ��ü ari ����
//	ari.SetAt(1, 1234);
//	ari.SetAt(1000, 5678);
//	printf("%d\n", ari.GetAt(1)); // ar[1] �� ���
//	printf("%d\n", ari.GetAt(5)); // 0 ���
//}
//#include <stdio.h>
//
//template <class T>
//void swap(T& a, T& b) // a�� ���� b�� �� ��ȯ
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//template <> void swap<double>(double& a, double& b) // �Ǽ��� ���ؼ��� �����θ� ��ȯ�ϵ��� ���� : Ư��ȭ ���ø� ���
//{
//	int i, j;
//
//	i = (int)a; // a�� ������
//	j = (int)b; // b�� ������
//	a = a - i + j; // a�� b�� ������ ����
//	b = b - j + i; // a�� b�� ������ ����
//}
//
//int main()
//{
//	double a = 1.2, b = 3.4;
//	printf("a = %g, b = %g\n", a, b); // ���
//	swap(a, b); // a�� ���� b�� �� ��ȯ
//	printf("a = %g, b = %g\n", a, b); // ���
//}
//#include "cursor.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue // Ŭ���� PosValue ���� �� ����
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // ��ǥ�� �̵�
//		cout << value << endl; // value�� ���
//	}
//};
//
//template <> class PosValue<double> // �κ� Ư��ȭ : double �� ���ؼ��� ����
//{
//private:
//	int x, y;
//	double value;
//public:
//	PosValue(int ax, int ay, double av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // ��ǥ�� �̵�
//		cout << "[" << value << "]" << endl; // ��ȣ�� ���� value�� ���
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2); // value�� int �� Ŭ����
//	PosValue<char> cv(25, 5, 'C'); // value�� char �� Ŭ����
//	PosValue<double> dv(30, 15, 3.14); // value�� double �� Ŭ����
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//#include "cursor.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue // Ŭ���� Posvalue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue() : x(0), y(0), value(0) { } // �� ��ü�� �����ϱ� ���� ����Ʈ ������ �߰�
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // ��ǥ �̵�
//		cout << value << endl; // value�� ���
//	}
//};
//
//template <typename T> // Ŭ���� ���ø�
//class Wrapper // Ŭ���� Wrapper : ���� Ÿ���� �� �ϳ��� �����ϴ� ���ø�
//{
//private:
//	T member;
//public:
//	void set(T v) { member = v; }
//	T get() { return member; } // member�� ������
//};
//
//int main()
//{
//	Wrapper<PosValue<char> > wrap; // ���ø� ��ø : ��ȣ�� �ٿ��� >> �� ����ϸ� ����ó����
//	wrap.set(PosValue<char>(10, 10, 'a'));
//	PosValue<char> pc = wrap.get();
//	pc.outvalue(); // ȣ��
//}
