//#include <stdio.h>
//
//namespace A { // ���ӽ����̽� A ����
//	double value; // A �Ҽ��� value
//}
//
//namespace B { // ���ӽ����̽� A ��B
//	int value; // B �Ҽ��� value
//}
//
//int main()
//{
//	A::value = 12.345; // ���ӽ����̽��� ���� ��Ī�� ������ ���� :: ������ �տ� �Ҽ��� ������.
//	B::value = 123;
//}
////#include <stdio.h>
//
//int value;					// ���� ���� �����̽� �Ҽ�
//namespace A {
//	int value;				// A �Ҽ�
//}
//
//int main()
//{
//	int value;				// main �Ҽ�
//
//	value = 1;				// ���� ���� value
//	::value = 2;			// ���� ���� �����̽��� value
//	A::value = 3;			// A ���� �����̽��� value
//} // �̸��� ���� ���� �����̰�, ���� �����̽��� ������ �ش� �Ҽ��� �����̸�, ���� ���ӽ����̽��� �̸��� ���� :: �����ڸ� ����
//#include <stdio.h>
//
//namespace UTIL { // ���ӽ����̽� UTIL �Ҽ�
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//using namespace UTIL; // using ������ : ������ ���ӽ����̽��� ��� ��Ī�� ���� �������� ������ �Ҽ��� ������ �ʰ� �ٷ� ����� �� �ֵ��� ��
//
//int main()
//{
//	value = 3;
//	score = 1.2345;
//	sub();
//} // using �����ڷ� UTIL ���ӽ����̽��� ���
//#include <stdio.h>
//
//namespace UTIL { // ���ӽ����̽� UTIL �Ҽ�
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int main()
//{
//	using UTIL::value; // value�� ���� using ���� (maing������)
//
//	value = 3;
//	UTIL::score = 1.2345;
//	UTIL::sub();
//} // score�� sub�� ������ ������ �����Ƿ� �Ҽ��� ��������
//
//void mysub()
//{
//	UTIL::value = 5; // using UTIL::value�� ���� ������ main �Լ� ���ο� �ֱ⿡ �����ؾ���
//}
//#include <stdio.h>
//
//namespace UTIL { // ���ӽ����̽� UTIL �Ҽ�
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int value;
//int main()
//{
//	using UTIL::value;
//	int value = 5;			// ����
//
//	value = 1;				// UTIL�� value
//	::value = 2;			// ���� ���� value
//} // using ���� ���� ��ȣ���� �߻��Ͽ� ���� ó����
//#include <stdio.h>
//
//namespace UTIL { // ���ӽ����̽� UTIL �Ҽ�
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int value;
//int main()
//{
//	using namespace UTIL;
//	int value = 5;			// ���� ���� ����
//
//	value = 1;				// ���� ���� value
//	::value = 2;			// ���� ���� value
//	UTIL::value = 3;		// UTIL�� value
//
//	score = 1.2345;
//}
//#include <stdio.h>
//
//namespace A { // ���ӽ����̽� A
//	double value;
//}
//
//namespace B { // ���ӽ����̽� B
//	int value;
//}
//
//int main()
//{
//	using namespace A;
//	using namespace B;
//
//	value = 3;				// ��ȣ�ϴٴ� ���� �߻�
//} // ���ӽ����̽� A,B�� �� �������� �� ������ �ִ� value�� main������� ������, value�� �Ҽ��� ��ȣ�ϱ� ������ ���� �߻�
