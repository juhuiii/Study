//#include <stdio.h>
//
//void swap(int& a, int& b) // 두 정수형 변수의 값을 교환하는 swap 함수
//{
//	int t; // 임시변수 t 선언
//	t = a; a = b; b = t; // t를 이용하여 a와 b를 교환
//}
//
//void swap(double& a, double& b) // 두 실수형 변수의 값을 교환하는 swap 함수
//{
//	double t; // 임시변수 t 선언
//	t = a; a = b; b = t; // t를 이용하여 a와 b를 교환
//}
//
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	swap(a, b);
//	swap(c, d);
//	printf("a = %d,b = %d\n", a, b); // a와 b의 값 출력
//	printf("c = %f,d = %f\n", c, d); // c와 d의 값 출력
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//
//void swap(void* a, void* b, size_t len) // void *를 사용하여 임의 타입의 번지를 받아 메모리끼리 복사함
//{
//	void* t; // 임의 타입 변수의 번지
//	t = malloc(len); // 임의 타입 변수의 길이
//	memcpy(t, a, len);  // 인수의 길이와 같은 크기의 임시 메모리를 할당하고 그 메모리를 경유하여 값을 교환
//	memcpy(a, b, len);
//	memcpy(b, t, len);
//	free(t); // 메모리해제
//}
//
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	swap(&a, &b, sizeof(int));
//	swap(&c, &d, sizeof(double));
//	printf("a = %d,b = %d\n", a, b); // a와 b의 값 출력
//	printf("c = %f,d = %f\n", c, d); // c와 d의 값 출력
//}
//#include <stdio.h>
//
//template <typename T> // swap 함수를 템플릿으로 정의 : template 키워드로 시작하며 <> 괄호 안에 타입 인수임을 의미하는 typename 키워드와 타입 인수의 이름을 적음
//void swap(T& a, T& b)
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//int main()
//{
//	int a = 3, b = 4; // 본체의 T는 int타입이 됨
//	double c = 1.2, d = 3.4; // 본체의 T는 double타입이 됨
//	char e = 'e', f = 'f'; // 본체의 T는 char타입이 됨
//
//	swap(a, b); // 정수에 대해 호출
//	swap(c, d); // 실수에 대해 호출
//	swap(e, f); // 문자에 대해 호출
//	printf("a = %d,b = %d\n", a, b); // a와 b의 값 출력
//	printf("c = %f,d = %f\n", c, d); // c와 d의 값 출력
//	printf("e = %c,f = %c\n", e, f); // e와 f의 값 출력
//}
//#include <stdio.h>
//
//template <typename T>
//T max(T a, T b) // 두 개의 인수를 받아 큰 값을 조사함
//{
//	return (a > b) ? a : b; // 결과값 반환
//}
//
//
//int main()
//{
//	int a = max(1, 2); // max(int, int)함수 구체화
//	double b = max(1.1, 2.2); // max(double, double)함수 구체화
//	int c = max<int>(2, 3.14); // 두 인수의 타입 다름 : 오류
//	double d = max<double>(2, 3.14);
//	printf("c = %d\n", c); // 결과값 출력
//}
//#include <stdio.h>
//
//template <typename T>
//T cast(int s) // 인수로 전달된 정수형의 s를 T타입으로 캐스팅하여 리턴함
//{
//	return (T)s;
//}
//
//int main()
//{
//	unsigned u = cast<unsigned>(1234); // 1234를 unsigned로 리턴
//	double d = cast<double>(5678); // 5678을 double로 리턴
//
//	printf("u = %d, d = %f\n", u, d); // 결과값 출력
//}
//#include <stdio.h>
//
//template <typename T>
//void LongFunc(T a)
//{
//	// 아주 긴 함수의 본체
//}
//
//int main()
//{
//	int i = 1;
//	unsigned u = 2;
//	short s = 3;
//
//	LongFunc(i); // LongFunc 함수를 int에 대해 호출
//	LongFunc(u); // LongFunc 함수를 unsigned에 대해 호출
//	LongFunc(s); // LongFunc 함수를 short에 대해 호출
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//
//template <class T>
//void swaparray(T* a, T* b, int num)
//{
//	void* t; // void *를 사용하여 임의 타입의 번지를 전달 받음
//
//	t = malloc(num * sizeof(T)); // 메모리 할당
//	memcpy(t, a, num * sizeof(T));
//	memcpy(a, b, num * sizeof(T));
//	memcpy(b, t, num * sizeof(T));
//	free(t); // 메모리 해제
//}
//
//int main() // 정수형 배열과 문자형 배열을 교환 : 두 개의 swaparray 함수가 구체화
//{
//	int a[] = { 1,2,3 }, b[] = { 4,5,6 };
//	char c[] = "문자열", d[] = "string";
//	swaparray(a, b, sizeof(a) / sizeof(a[0])); // a와 b 교환
//	printf("before c = %s,d = %s\n", c, d); // 결과값 출력
//	swaparray(c, d, sizeof(c) / sizeof(c[0])); // c와 d 교환
//	printf("after c = %s,d = %s\n", c, d); // 결과값 출력
//}
//#include <stdio.h>
//#include <string.h>
//
//template <typename T>
//void swap(T& a, T& b) // a와 b의 값을 교환함
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//class Human // 클래스 Human 선언 및 정의
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
//	Human(const char* aname, int aage) { // 이름과 나이를 대입받아 변수 초기화
//		name = new char[strlen(aname) + 1];
//		strcpy(name, aname);
//		age = aage;
//	}
//
//	Human(const Human& other) { // 클래스를 복사하는 생성자 정의
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//
//	Human& operator =(const Human& other) { // 연산자 오버로딩
//		if (this != &other) {
//			delete[] name; // 객체가 같지 않으면 메모리 해제
//			name = new char[strlen(other.name) + 1];
//			strcpy(name, other.name);
//			age = other.age;
//		}
//		return *this;
//	}
//
//	~Human() { // 파괴자 선언 및 정의
//		delete[] name; // 메모리 해제
//	}
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age); // 출력
//	}
//};
//
//int main()
//{
//	Human lee("이승만", 10); // 객체 lee 선언 및 초기화
//	Human park("박정희", 20); // 객체 park 선언 및 초기화
//	lee.intro();
//	park.intro();
//	swap(lee, park); // lee와 park을 교환함
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
//		gotoxy(x, y); // 출력 좌표를 지정
//		cout << value << endl; // value값 출력
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2); // value가 int 인 클래스
//	PosValue<char> cv(25, 5, 'C'); // value가 char 인 클래스
//	PosValue<double> dv(30, 15, 3.14); // value가 double 인 클래스
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//#include <stdio.h>
//
//class Util // 클래스 Util 선언 및 정의
//{
//public:
//	template <typename T>
//	void swap(T& a, T& b) // a와 b의 값 교환
//	{
//		T t;
//		t = a; a = b; b = t;
//	}
//};
//
//int main()
//{
//	Util u; // Util 객체 u 선언 및 정의
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	char e = 'e', f = 'f';
//
//	u.swap(a, b); // u의 멤버 함수 swap을 int 로 호출
//	u.swap(c, d); // u의 멤버 함수 swap을 double 로 호출
//	u.swap(e, f); // u의 멤버 함수 swap을 char 로 호출
//	printf("a = %d,b = %d\n", a, b); // 결과값 출력
//	printf("c = %f,d = %f\n", c, d); // 결과값 출력
//	printf("e = %c,f = %c\n", e, f); // 결과값 출력
//}
//#include <stdio.h>
//
//template <typename T, int N>
//class Array // 클래스 Array 선언 및 선언 : 임의 타입의 고정 크기 배열을 표현하며 값을 읽거나 변경하는 기능 제공
//{
//private:
//	T ar[N];
//public:
//	void SetAt(int n, T v) { if (n < N && n >= 0) ar[n] = v; }
//	T GetAt(int n) { return (n < N&& n >= 0 ? ar[n] : 0); } // 범위를 벗어나는 첨자를 사용하면 무시하거나 0을 리턴함
//};
//
//int main()
//{
//	Array<int, 5> ari; // Array<int, 5> 객체 ari 선언
//	ari.SetAt(1, 1234);
//	ari.SetAt(1000, 5678);
//	printf("%d\n", ari.GetAt(1)); // ar[1] 값 출력
//	printf("%d\n", ari.GetAt(5)); // 0 출력
//}
//#include <stdio.h>
//
//template <class T>
//void swap(T& a, T& b) // a의 값과 b의 값 교환
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//template <> void swap<double>(double& a, double& b) // 실수에 대해서는 정수부만 교환하도록 정의 : 특수화 템플릿 사용
//{
//	int i, j;
//
//	i = (int)a; // a의 정수값
//	j = (int)b; // b의 정수값
//	a = a - i + j; // a와 b의 정수값 변경
//	b = b - j + i; // a와 b의 정수값 변경
//}
//
//int main()
//{
//	double a = 1.2, b = 3.4;
//	printf("a = %g, b = %g\n", a, b); // 출력
//	swap(a, b); // a의 값과 b의 값 교환
//	printf("a = %g, b = %g\n", a, b); // 출력
//}
//#include "cursor.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue // 클래스 PosValue 선언 및 정의
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // 좌표로 이동
//		cout << value << endl; // value값 출력
//	}
//};
//
//template <> class PosValue<double> // 부분 특수화 : double 에 대해서만 적용
//{
//private:
//	int x, y;
//	double value;
//public:
//	PosValue(int ax, int ay, double av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // 좌표로 이동
//		cout << "[" << value << "]" << endl; // 괄호로 감싼 value값 출력
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2); // value가 int 인 클래스
//	PosValue<char> cv(25, 5, 'C'); // value가 char 인 클래스
//	PosValue<double> dv(30, 15, 3.14); // value가 double 인 클래스
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//#include "cursor.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue // 클래스 Posvalue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue() : x(0), y(0), value(0) { } // 빈 객체를 생성하기 위한 디폴트 생성자 추가
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
//	void outvalue() {
//		gotoxy(x, y); // 좌표 이동
//		cout << value << endl; // value값 출력
//	}
//};
//
//template <typename T> // 클래스 템플릿
//class Wrapper // 클래스 Wrapper : 임의 타입의 값 하나를 래핑하는 템플릿
//{
//private:
//	T member;
//public:
//	void set(T v) { member = v; }
//	T get() { return member; } // member를 리턴함
//};
//
//int main()
//{
//	Wrapper<PosValue<char> > wrap; // 템플릿 중첩 : 괄호를 붙여서 >> 로 사용하면 에러처리됨
//	wrap.set(PosValue<char>(10, 10, 'a'));
//	PosValue<char> pc = wrap.get();
//	pc.outvalue(); // 호출
//}
