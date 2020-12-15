//#include <stdio.h>
//#include <string.h> // strcpy 사용을 위해 포함한 헤더파일
//
//class Human // 클래스 Human 선언
//{
//private: // 비공개 접근 제한자
//	char name[12];
//	int age;
//
//public: // 공개 접근 제한자
//	// 생성자
//	Human(const char* aname, int aage) { // 생성자 정의
//		strcpy(name, aname); // 이름값 대입
//		age = aage; // 나이 대입
//	}
//	void intro() { //
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29); // 생성자 호출(생성자가 값을 받아 멤버를 초기화함)
//	kim.intro(); // 메서드 호출
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private: // 비공개 접근 제한자
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public: // 공개 접근 제한자 : 두 개의 생성자 정의
//	// 생성자1
//	Time(int h, int m, int s) { // 인수 3개를 받은 생성자 1
//		hour = h; // 입력받은 시간을 변수에 대입한다.
//		min = m;
//		sec = s;
//	}
//
//	// 생성자 2
//	Time(int abssec) { // 인수 1개를 받은 생성자 2(인수의 개수에 따라 생성자가 결정됨)
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 30, 40); // 3개의 인수를 전달함으로 생성자 1 실행
//	now.OutTime(); // 시,분,초 출력
//	Time noon(44000); // 1개의 인수를 전달함으로 생성자 2 실행
//	noon.OutTime(); // 시,분,초 출력
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//private: // 비공개 접근 제한자
//	char* pname; // 포인터변수 pname 선언
//	int age; // 정수형변수 age 선언
//
//public: // 공개 접근 제한자
//	Human(const char* aname, int aage) { // 사용자 이름, 나이를 입력받은 뒤 멤버변수를 초기화시키는 생성자 선언
//		pname = new char[strlen(aname) + 1]; // 입력받은 aname 인수의 길이 조사, 널 종료 문자를 위한 1바이트를 포함하여 버퍼 할당
//		strcpy(pname, aname); // 문자열 복사
//		age = aage;
//		printf("%s 객체의 생성자가 호출되었습니다.\n", pname);
//	}
//
//	~Human() { // 메모리 해제를 위한 파괴자 선언
//		printf("%s 객체가 파괴되었습니다.\n", pname);
//		delete[] pname; // 메모리 해제
//	}
//
//	void intro() // intro 메서드 선언
//	{
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("김수한무거북이와두루미", 12);
//	boy.intro(); // intro 메서드 호출
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//private: // 비공개 접근 제한자
//	char* pname;
//	int age;
//
//public: // 공개 접근 제한자
//	Human(const char* aname, int aage) { // 사용자 이름, 나이를 입력받은 뒤 멤버변수를 초기화시키는 생성자 선언
//		pname = new char[strlen(aname) + 1]; // 입력받은 aname 인수의 길이 조사, 널 종료 문자를 위한 1바이트를 포함하여 버퍼 할당
//		strcpy(pname, aname); // 문자열 복사
//		age = aage;
//		printf("== <%s> 객체 생성 ==\n", pname);
//	}
//
//	~Human() { // 메모리 해제를 위한 파괴자 선언
//		printf("== <%s> 객체가 파괴 ==\n", pname);
//		delete[] pname; // 메모리 해제
//	}
//
//	void intro() { // intro 메서드 선언
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("김수한무거북이와두루미", 12); // 객체 생성
//	boy.intro(); // intro 메서드 호출
//
//	Human* leo; // Human 클래스의 leo 포인터 객체 선언
//	leo = new Human("레오나르도 디카프리오", 40); // 새로운 공간 할당 및 전달
//	leo->intro(); // 포인터 타입이기에 leo.intro() 불가
//	delete leo; // leo 객체 파괴
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//private: // 비공개 접근 제한자
//	char name[12];
//	int age;
//
//public: // 공개 접근 제한자
//	Human() { // name을 "이름없음"으로, age를 0으로 초기화
//		strcpy(name, "이름없음");
//		age = 0;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human momo; // momo 객체 생성
//	momo.intro(); // intro 메서드 실행
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) { // 두개의 인수를 입력받는 생성자
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	// Human momo;			// 에러 // 인수가 없는 생성자를 필요로 하는데 이 함수가 없기 때문에 에러가 발생한다. Human momo 형식으로 객체를 생성하도록 하고 싶다면 아예 생성자를 정의하지 말아야 컴파일러가 디폴트 생성자를 만든다. 아니면 다른 생성자와 함께 인수가 없는 디폴트 생성자도 정의해야한다.
//	// Human arFriend[3];		// 에러 // 역시 디폴트 생성자가 없기 때문에 에러가 발생한다. 객체의 배열을 선언만 하려면 기본값으로 객체를 생성해야 하므로 인수를 받지 않는 디폴트 생성자가 꼭 필요하다.
//
//	Human arFriend[3] = { 
//		{ Human("문동욱", 49) },
//		{ Human("김유진", 49) },
//		{ Human("박상막", 49) },
//	};
//
//	arFriend[2].intro(); // 3번째 값 출력
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour, min, sec 선언
//
//public:
//	Time(int h, int m, int s) { // 세 개의 인수를 가지는 생성자 선언
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // now 객체 생성
//	Time then = now; // then 객체 생성, now로 초기화
//
//	then.OutTime(); // 메서드 실행 : 출력
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1];
//		strcpy(pname, aname);
//		age = aage;
//	}
//
//	~Human() { // 파괴자 선언
//		delete[] pname; // 메모리 해제
//	}
//
//	void intro() { // 메서드 선언
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human kang("강감찬", 1424); // 객체 kang 생성
//	Human boy = kang; // 객체 boy 생성 및 kang으로 초기화
//
//	boy.intro(); // 객체 멤버 변수 boy를 출력하는 메서드 호출
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human(const char* aname, int aage) { // 사용자 이름, 나이를 입력받은 뒤 멤버변수를 초기화시키는 생성자 선언
//		pname = new char[strlen(aname) + 1]; // 입력받은 aname 인수의 길이 조사, 널 종료 문자를 위한 1바이트를 포함하여 버퍼 할당
//		strcpy(pname, aname);
//		age = aage;
//	}
//
//	Human(const Human& other) { // 래퍼런스를 받는 복사생성자 선언
//		pname = new char[strlen(other.pname) + 1]; // 입력받은 other.pname 인수의 길이 조사, 널 종료 문자를 위한 1바이트를 포함하여 버퍼 할당
//		strcpy(pname, other.pname);
//		age = other.age;
//	}
//
//	~Human() { // 파괴자 선언
//		delete[] pname; // 메모리 해제
//	}
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//void printHuman(Human who) { // Human 타입의 who 객체를 인수로 받는 함수 선언
//	who.intro();
//}
//
//int main()
//{
//	Human kang("강감찬", 1424); // 객체 kang 생성 및 초기화
//	Human boy = kang; // 객체 boy 생성 및 kang으로 초기화
//
//	printHuman(boy); // 호출
//}
//#include <stdio.h>
//
//class Some // 클래스 Some 선언
//{
//public:
//	const int total; // 정수형 상수 total. 상수는 원래 선언과 동시에 초깃값을 주어야 하지만 클래스 내의 멤버는 선언할 때 초깃값을 줄 수 없다.
//	Some(int atotal) : total(atotal) { } // 생성자의 초기화 리스트에서 값을 초기화
//	void OutTotal() { printf("%d\n", total); } // total 값 출력 메서드
//};
//
//int main()
//{
//	Some S(5); // total에 5를 넣어준다
//	S.OutTotal(); // 메서드 출력
//}
//#include <stdio.h>
//
//class Some // 클래스 Some 선언
//{
//public:
//	int& total; // 정수형 레퍼런스 선언(레퍼런스는 다른 변수에 대한 별명이며 초기화 이후에는 대상을 변경할 수 없다.)
//	Some(int& atotal) : total(atotal) { }
//	void OutTotal() { printf("%d\n", total); }
//};
//
//int main()
//{
//	int value = 8; // 정수형 변수 value에 8 대입
//	Some S(value);
//	S.OutTotal();
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	Time(int abssec) { // 정수형의 절대 초 입력
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//void printTime(Time when)
//{
//	when.OutTime(); // 메서드 호출
//}
//
//int main()
//{
//	Time noon(40000); // 생성자를 명시적으로 호출
//	Time now = 60000;
//	now.OutTime();
//	now = 70000; // 실행 중에 정수를 바로 대입해도 상관 X
//	now.OutTime();
//
//	printTime(80000);
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	Time(int abssec) {
//		hour = abssec / 3600; // 정수부 : 시간
//		min = (abssec / 60) % 60; // 실수부 : 분
//		sec = abssec % 60; // 초 : 0
//	}
//
//	Time(double d) {
//		hour = int(d) % 24;
//		min = int((d - int(d)) * 100) % 60;
//		sec = 0;
//	}
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(3.14); //3시 14분이라는 Time 객체
//	now.OutTime();
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	operator int() { // 절대초를 구하는 함수 선언
//		return hour * 3600 + min * 60 + sec;
//	}
//
//	void OutTime() { // 입력받은 시간 출력
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // 12시 34분 56초로 초기화
//	int i = now; // now 객체의 int() 변환 함수 호출
//	printf("i = %d\n", i); // 절대초 호출
//}
//#include <stdio.h>
//
//class Fahrenheit; // 클래스 Fahrenheit 선언 : 전방선언으로 클래스 Celsius와의 변환 가능
//class Celsius // 클래스 Celsius 선언
//{
//public:
//	double Tem; // 실수형 변수 선언
//	Celsius() { } // 인수 0개, 초기화 되지 않은 생성자
//	Celsius(double aTem) : Tem(aTem) { } // 실수형 Tem 입력값을 인자로 한다.
//	operator Fahrenheit();
//	void OutTem() { printf("섭씨 = %f\n", Tem); } // 섭씨온도 출력
//};
//
//class Fahrenheit
//{
//public:
//	double Tem;
//	Fahrenheit() { }
//	Fahrenheit(double aTem) : Tem(aTem) { }
//	operator Celsius();
//	void OutTem() { printf("화씨 = %f\n", Tem); } // 화씨온도 출력
//};
//
//Celsius::operator Fahrenheit() // 클래스 간의 상호 변환
//{
//	Fahrenheit F; // 객체 F 생성
//	F.Tem = Tem * 1.8 + 32;
//	return F;
//}
//
//Fahrenheit::operator Celsius() // 클래스 간의 상호 변환
//{
//	Celsius C; // 객체 C 생성
//	C.Tem = (Tem - 32) / 1.8;
//	return C;
//}
//
//int main()
//{
//	Celsius C(100); // C 객체의 초깃값 100
//	Fahrenheit F = C;
//	C.OutTem();
//	F.OutTem();
//
//	printf("\n");
//	Fahrenheit F2 = 120;
//	Celsius C2 = F2;
//	F2.OutTem();
//	C2.OutTem();
//}
//#include<stdio.h>
//
//class Circle // 클래스 Circle 선언
//{
//
//private:
//	int cx, cy; // 정수형 변수 선언
//	int radius; // 정수형 변수 선언
//
//public:
//	Circle(int acx, int acy, int aradius) { // 3개의 인수를 갖는 생성자
//		cx = acx;
//		cy = acy;
//		radius = aradius;
//	}
//	Circle(int left, int top, int right, int bottom) { // 4개의 인수를 갖는 생성자 2
//		cx = (left + right) / 2; 
//		cy = (top + bottom) / 2; 
//		radius = right - cx;
//	}
//	void a() {  // radius인스턴스 출력 함수
//		printf("반지름 radius : %d\n", radius);
//	}
//};
//
//int main() // 인수의 개수에 맞는 생성자 사용
//{ 
//	Circle c1(20, 20, 10);
//	c1.a();
//	Circle c2(100, 100, 200, 200);
//	c2.a();
//}

//#include<stdio.h>
//
//class Time { // 클래스 Time 선언
//	private:
//		int hour;
//		int min;
//		int sec;
//
//	public:
//		Time(int h, int m, int s) // 3개의 인수를 갖는 생성자
//		{
//			hour = h;
//			min = m;
//			sec = s;
//		}
//
//		void OutTime()
//		{
//			printf("현재 시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
//		}
//	};
//
//	int main()
//	{
//		Time* pTime;// 포인터 객체 생성
//		pTime = new Time(12, 34, 56); // new 함수로 값 할당
//		pTime->OutTime();
//		delete pTime; // 메모리 해제
//	}