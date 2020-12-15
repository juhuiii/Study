//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	try {
//		printf("나누어질 수를 입력하시오 : ");
//		scanf("%d", &a); // a를 입력받음
//		if (a < 0) throw a; // a가 음수이면 던짐
//		printf("나누는 수를 입력하시오 : ");
//		scanf("%d", &b);
//		if (b == 0) throw "0으로는 나눌 수 없습니다."; // b가 0이면 문자열 예외를 던짐
//		printf("나누기 결과는 %d입니다.\n", a / b); // 결과값 출력
//	}
//	catch (int a) { // a값을 전달받아 음수는 안 된다는 에러를 출력하고 전체 블록을 종료
//		printf("%d는 음수이므로 나누기 거부\n", a);
//	}
//	catch (const char* message) { // 메시지를 출력 후 블록 종료
//		puts(message);
//	}
//}
//#include <stdio.h>
//
//void divide(int a, int d) // 두 개의 인수 a,d를 받아 나눗셈 결과를 출력함
//{
//	if (d == 0) throw "0으로는 나눌 수 없습니다."; // d가 0이면 예외를 던짐
//	printf("나누기 결과 = %d입니다.\n", a / d);
//}
//
//int main()
//{
//	try {
//		divide(10, 0); // 함수 호출
//	}
//	catch (const char* message) { // 메시지를 출력 후 블록 종료
//		puts(message);
//	}
//	divide(10, 5); // 함수 호출
//}
//#include <stdio.h>
//
//class C // 클래스 C 생성 및 선언
//{
//	int a;
//public:
//	C() { puts("생성자 호출"); } // 디폴트 생성자 호출
//	~C() { puts("파괴자 호출"); } // 파괴자 호출
//};
//
//void divide(int a, int d)
//{
//	if (d == 0) throw "0으로는 나눌 수 없습니다."; // d가 0이면 예외를 던짐
//	printf("나누기 결과 = %d입니다.\n", a / d);
//}
//
//void calc(int t, const char* m) // 지역 객체 c를 생성한 후 예외를 일으키는 divide(10,0) 호출
//{
//	C c;
//	divide(10, 0);
//}
//
//int main()
//{
//	try {
//		calc(1, "계산");
//	}
//	catch (const char* message) { // 메시지를 출력 후 블록 종료
//		puts(message);
//	}
//	puts("프로그램이 종료됩니다.");
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
//		printf("학번을 입력하시오 : ");
//		scanf("%d", &num); // 학번을 입력받음
//		if (num <= 0) throw num; // 학번은 양수여야 함
//		try {
//			printf("이름을 입력하시오 : ");
//			scanf("%s", name); // 이름을 입력받음
//			if (strlen(name) < 4) throw "이름이 너무 짧습니다"; // 이름은 4바이트 이상이어야 함
//			printf("나이를 입력하시오 : ");
//			scanf("%d", &age); // 나이를 입력받음
//			if (age <= 0) throw age; // 나이는 양수여야 함
//			printf("입력한 정보 => 학번:%d, 이름:%s, 나이:%d\n", num, name, age);
//		}
//		catch (const char* Message) { // 메시지를 출력 후 블록 종료
//			puts(Message);
//		}
//		catch (int) { // 나이가 음수일 경우 예외를 던짐
//			throw;
//		}
//	}
//	catch (int n) { // 던져진 예외를 처리
//		printf("%d는 음수이므로 적합하지 않습니다.\n", n);
//	}
//}
//#include <stdio.h>
//
//int report()
//{
//	if (true/*예외 발생*/) return 1; // 예외 발생 시 1을 리턴함
//
//	// 여기까지 왔으면 무사히 작업 완료했음
//	return 0; // 작업 무사히 완료 시 0을 리턴
//}
//
//int main()
//{
//	int e;
//
//	e = report(); // 리포트함수 호출
//	switch (e) {
//	case 1: // 1이 들어왔을 경우
//		puts("메모리가 부족합니다.");
//		break;
//	case 2: // 2가 들어왔을 경우
//		puts("연산 범위를 초과했습니다.");
//		break;
//	case 3: // 3이 들어왔을 경우
//		puts("하드 디스크가 가득 찼습니다.");
//		break;
//	default:
//		puts("작업을 완료했습니다.");
//		break;
//	}
//}
//#include <stdio.h>
//
//enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL };
//void report() throw(E_Error)
//{
//	if (true/*예외 발생*/) throw OVERRANGE; // 예외 발생시 OVERRANGE를 던짐
//
//	// 여기까지 왔으면 무사히 작업 완료했음
//}
//
//int main()
//{
//	try {
//		report(); // 예외를 던짐
//		puts("작업을 완료했습니다."); // 함수 호출문 출력
//	}
//	catch (E_Error e) { // 던저진 에러를 예외에 따라 처리
//		switch (e) {
//		case OUTOFMEMORY:
//			puts("메모리가 부족합니다.");
//			break;
//		case OVERRANGE:
//			puts("연산 범위를 초과했습니다.");
//			break;
//		case HARDFULL:
//			puts("하드 디스크가 가득 찼습니다.");
//			break;
//		}
//	}
//}
//#include <stdio.h>
//
//class Exception // 클래스 Exception 선언 및 정의
//{
//private:
//	int ErrorCode;
//
//public:
//	Exception(int ae) : ErrorCode(ae) { }
//	int GetErrorCode() { return ErrorCode; } // ErrorCode 리턴
//	void ReportError() {
//		switch (ErrorCode) { // 경우에 따라 처리
//		case 1:
//			puts("메모리가 부족합니다.");
//			break;
//		case 2:
//			puts("연산 범위를 초과했습니다.");
//			break;
//		case 3:
//			puts("하드 디스크가 가득 찼습니다.");
//			break;
//		}
//	}
//};
//
//void report() // 에러 발생시 예외 객체를 생서하여 던짐
//{
//	if (true/*예외 발생*/) throw Exception(3); // 예외객체를 생성하여 던짐
//
//	// 여기까지 왔으면 무사히 작업 완료했음
//}
//
//int main()
//{
//	try {
//		report(); // 함수 호출
//		puts("작업을 완료했습니다.");
//	}
//	catch (Exception& e) { // 레퍼런스로 받음
//		printf("에러 코드 = %d => ", e.GetErrorCode()); // 출력
//		e.ReportError(); // 에러내용
//	}
//}
//#include <stdio.h>
//
//class ExNegative // 클래스 ExNegative : 음수에 대한 예외를 처리
//{
//protected:
//	int number;
//
//public:
//	ExNegative(int n) : number(n) { }
//	virtual void PrintError() { // PrintError 가상선언
//		printf("%d는 음수이므로 잘못된 값입니다.\n", number); // 에러 메시지 출력
//	}
//};
//
//class ExTooBig : public ExNegative // 클래스 ExTooBig : 100을 초과하는 수에 대한 예되를 처리
//{
//public:
//	ExTooBig(int n) : ExNegative(n) { }
//	virtual void PrintError() { // PrintError 가상선언
//		printf("%d는 너무 큽니다. 100보다 작아야 합니다.\n", number);
//	}
//};
//
//class ExOdd : public ExTooBig // 클래스 ExOdd : 홀수에 대한 예외를 처리
//{
//public:
//	ExOdd(int n) : ExTooBig(n) { }
//	virtual void PrintError() { // PrintError 가상선언
//		printf("%d는 홀수입니다. 짝수여야 합니다.\n", number);
//	}
//};
//
//int main()
//{
//	int n;
//
//	for (;;) {
//		try {
//			printf("숫자를 입력하세요(끝낼 때 0) : "); // 출력
//			scanf("%d", &n); // 숫자를 입력받음
//			if (n == 0) break; // 0이면 종료
//			if (n < 0) throw ExNegative(n); // 음수면 던짐
//			if (n > 100) throw ExTooBig(n); // 100이상이면 던짐
//			if (n % 2 != 0) throw ExOdd(n); // 홀수면 던짐
//
//			printf("%d 숫자는 규칙에 맞는 숫자입니다.\n", n); // 출력
//		}
//		catch (ExNegative& e) {
//			e.PrintError(); // 에러코드 출력
//		}
//	}
//}
//#include <stdio.h>
//
//class MyClass // 클래스 MyClass
//{
//public:
//	class Exception // 예외를 처리하는 지역 클래스 Exception
//	{
//	private:
//		int ErrorCode;
//
//	public:
//		Exception(int ae) : ErrorCode(ae) { } // 클래스 멤버변수 초기화
//		int GetErrorCode() { return ErrorCode; } // ErrorCode 리턴
//		void ReportError() {
//			switch (ErrorCode) { // 경우에 따라 처리
//			case 1:
//				puts("메모리가 부족합니다.");
//				break;
//			case 2:
//				puts("연산 범위를 초과했습니다.");
//				break;
//			case 3:
//				puts("하드 디스크가 가득 찼습니다.");
//				break;
//			}
//		}
//	};
//	void calc() {
//		try {
//			if (true/*에러 발생*/) throw Exception(1); // 예외 발생시 Exception 객체를 생성하여 던지며 함수 내부에서 이 예외를 직접 처리함
//		}
//		catch (Exception& e) {
//			printf("에러 코드 = %d => ", e.GetErrorCode()); // 에러 코드 출럭
//			e.ReportError(); // 에러 내용 출력
//		}
//	}
//	void calc2() throw(Exception) { // 메서드 선언함
//		if (true/*에러 발생*/) throw Exception(2); // Exception 클래스 멤버 변수 2로 초기화시킨 뒤 던짐
//	}
//};
//
//int main()
//{
//	MyClass m; // 객체 생성
//	m.calc(); // 메서드 호출
//	try {
//		m.calc2(); // 메서드 호출
//	}
//	catch (MyClass::Exception& e) {
//		printf("에러 코드 = %d => ", e.GetErrorCode()); // 에러 코드 출력
//		e.ReportError(); // 에러 내용 출력
//	}
//}
//#include <stdio.h>
//
//class Int100 // 클래스 Int100 : 100 이하의 정수를 저장
//{
//private:
//	int num;
//
//public:
//	Int100(int a) {
//		if (a <= 100) { // a가 100 이하일 때
//			num = a;
//		}
//		else {
//			throw a;
//		}
//	}
//	Int100& operator+=(int b) { // +=연산자 오버로딩
//		if (num + b <= 100) {
//			num += b;
//		}
//		else {
//			throw num + b; // 100보다 큰 값이 되면 예외를 던짐
//		}
//		return *this; // 객체 리턴
//	}
//	void OutValue() { // 생성자와 += 연산자, 값을 출력하는 OutValue 함수 정의
//		printf("%d\n", num); // 출력
//	}
//};
//
//int main()
//{
//	try {
//		Int100 i(85); // 객체 생성
//		i += 12;
//		i.OutValue(); // 값 출력
//	}
//	catch (int n) {
//		printf("%d는 100보다 큰 정수이므로 다룰 수 없습니다.\n", n); // 출력
//	}
//}
//#include <stdio.h>
//
//void divide(int a, int d) // a를 d로 나누는 함수 선언
//try {
//	if (d == 0) throw "0으로는 나눌 수 없습니다."; // d가 0이면 던짐
//	printf("나누기 결과 = %d입니다.\n", a / d); // 결과값 출력
//}
//catch (const char* message) {
//	puts(message); // 출력
//}
//
//int main()
//{
//	divide(10, 0); // 10 나누기 0
//}
//#include <stdio.h>
//
//class Int100 // 클래스 Int100
//{
//private:
//	int num;
//
//public:
//	Int100(int a) // 생성자 선언 및 정의
//		try : num(a) {
//		if (a > 100) {
//			throw a; // a가 100보다 크면 던짐
//		}
//	}
//	catch (int a) {
//		printf("%d은 100보다 더 큽니다.\n", a); // 던진 값을 받아서 출력
//	}
//
//	void OutValue() { // num값을 출력하는 메서드
//		printf("%d\n", num);
//	}
//};
//
//int main()
//{
//	try {
//		Int100 i(101); // 객체 생성
//		i.OutValue();
//	}
//	catch (int) {
//		puts("무효한 객체임"); // 출력
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
//		for (i = 0;; i++) { // 무한 루프
//			pi[i] = new int[10000000]; // 메모리 할당
//			if (pi[i]) {
//				printf("%d번째 할당 성공\n", i); // 출력
//			}
//			else {
//				printf("%d번째 할당 실패\n", i); // 출력
//			}
//			delay(1000); // 지연시간 : 1초
//		}
//	}
//	catch (std::bad_alloc& b) { // 할당 실패시
//		puts("에러 발생"); // 출력
//		b.what();
//	}
//	for (i = 0;; i++) { // 무한 루프
//		delete[] pi[i]; // 할당 메모리 해제
//	}
//}
//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myterm() // 최종 처리 담당
//{
//	puts("처리되지 않은 예외 발생"); // 출력
//	exit(-1); // 프로그램 종료
//}
//
//int main()
//{
//	set_terminate(myterm); // 미처리 예외 핸들러 등록(myterm)
//	try {
//		throw 1; // 정수형의 예외 던짐
//	}
//	catch (char* m) { // 문자형 : 정수가 아니기 때문에 myterm이 호출됨
//	}
//}
//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myunex() // 함수 myunex
//{
//	puts("발생해서는 안되는 에러 발생");
//	exit(-2); // 종료
//}
//
//void calc() throw(int) // 정수 예외를 던짐을 선언
//{
//	throw "string"; // 문자열 예외를 던진 경우
//}
//
//int main()
//{
//	set_unexpected(myunex);
//	try {
//		calc(); calc 호출
//	}
//	catch (int) { // 정수형
//		puts("정수형 예외 발생");  // 미리 지정해 놓은 myunex 미지정 예외 핸들러가 호출되어 처리함
//	}
//	puts("프로그램 종료"); // 출력
//}
//#include <stdio.h>
//
//class SomeClass { }; // 클래스 SomeClass
//
//void calc() throw(int) // int형을 던지는 함수 calc 선언
//{
//	SomeClass obj; // 객체 생성
//	char* p = new char[1000]; // 메모리 할당
//
//	if (true/*예외 발생*/) throw 1; // 예외 발생시 1을 던짐
//	delete[] p; // 할당한 메모리 해제
//}
//
//int main()
//{
//	try {
//		calc(); // 함수호출
//	}
//	catch (int) { // int형을 받아서
//		puts("정수형 예외 발생"); // 출력
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int num;
//
//	try {
//		printf("1에서 100사이의 정수를 입력하시오 : "); // 출력
//		scanf("%d", &num); // 입력을 받음
//		if (num < 1 || num > 100) throw num; // 입력 받은 정수가 1에서 100 사이가 아니면 던짐
//		printf("입력한 수 = %d\n", num); // 출력
//	}
//	catch (int num) {
//		printf("%d는 1에서 100 사이의 정수가 아닙니다.\n", num); // 출력
//	}
//}
