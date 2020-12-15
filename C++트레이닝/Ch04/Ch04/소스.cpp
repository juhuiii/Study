//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private: // 비공개 접근 제한자
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public: // 공개 접근 연산자
//	Time(int h, int m, int s) { // 인수 3개를 받은 생성자
//		SetHour(h); // Hour 멤버에 대한 액세서(멤버의 값 변경) : 무조건 대입하는 것이 아니라 조건에 맞는 값만 받아들여 객체 상태를 유효하게 관리함
//		SetMinute(m); // Minute 멤버에 대한 액세서(멤버의 값 변경)
//		sec = s; // 멤버변수 sec에 시간 대입
//	}
//
//	int GetHour() { return hour; } // Hour 멤버에 대한 액세서(멤버값을 읽어줌)
//	void SetHour(int h) { // 0이상 24미만의 시간만 유효한 값으로 인정
//		if (h >= 0 && h < 24) {
//			hour = h; // 멤버변수 hour에 시간 대입
//		}
//	}
//
//	int GetMinute() { return min; } // min 멤버에 대한 액세서
//	void SetMinute(int m) { // 0이상 60미만의 시간만 유효한 값으로 인정
//		if (m >= 0 && m < 60) {
//			min = m; // 멤버변수 min에 시간 대입
//		}
//	}
//	int GetSecond() { return sec; } // sec 멤버에 대한 액세서
//
//	void OutTime() { // 시간 출력 메서드
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // 클래스 변수 now 선언 및 값 입력
//	now.SetHour(40); // hour에 40 대입
//	now.OutTime(); // 시간 출력
//	now.SetHour(9); // hour에 9 대입
//	now.OutTime(); // 시간 출력
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include "cursor.h""
//
//class Car
//{
//private: // dhlqndptj wlrwjq whwkr ㅌ
//	int gear; // 정수형 변수 gear
//	int angle; // 정수형 변수 angle
//	int rpm; // 정수형 변수 rpm
//
//public:
//	Car() { gear = 0; angle = 0; rpm = 0; }
//	void ChangeGear(int aGear) { // 기어를 바꾸는 함수
//		if (aGear >= 0 && aGear <= 6) { // 0-6단까지만 인정
//			gear = aGear;
//		}
//	}
//
//	void RotateWheel(int Delta) { // 앞바퀴의 각도를 좌우로 45도까지만 변경 가능
//		int tAngle = angle + Delta;
//		if (tAngle >= -45 && tAngle <= 45) {
//			angle = tAngle;
//		}
//	}
//
//	void Accel() { // rpm 조작
//		rpm = min(rpm + 100, 3000);
//	}
//
//	void Break() { // rpm 조작
//		rpm = max(rpm - 500, 0);
//	}
//
//	void Run() { // 정보를 참조하여 자동차를 운행
//		int Speed;
//		char Mes[128];
//		gotoxy(10, 13);
//		if (gear == 0) { // 기어가 중립이면 달릴수 없어 에러 메시지 출력, 리턴
//			puts("먼저 1~6키를 눌러 기어를 넣으시오           ");
//			return;
//		}
//		if (gear == 6) {
//			Speed = rpm / 100;
//		}
//		else {
//			Speed = gear * rpm / 100;
//		}
//
//		sprintf(Mes, "%d의 속도로 %s쪽 %d도 방향으로 %s진중      ",
//			abs(Speed), (angle >= 0 ? "오른" : "왼"), abs(angle),
//			(gear == 6 ? "후" : "전"));
//		puts(Mes);
//	}
//};

//int main()
//{
//	Car C; // 객체 Car 생성 : 키 입력을 받아 공개된 함수를 통해 자동차를 조작
//	int ch;
//
//	for (;;) {
//		gotoxy(10, 10);
//		printf("1~5:기어 변속, 6:후진 기어, 0:기어 중립");
//		gotoxy(10, 11);
//		printf("위:액셀, 아래:브레이크, 좌우:핸들, Q:종료");
//		if (kbhit()) {
//			ch = getch();
//			if (ch == 0xE0 || ch == 0) {
//				ch = getch();
//				switch (ch) {
//				case 75:
//					C.RotateWheel(-5);
//					break;
//				case 77:
//					C.RotateWheel(5);
//					break;
//				case 72:
//					C.Accel();
//					break;
//				case 80:
//					C.Break();
//					break;
//				}
//			}
//			else {
//				if (ch >= '0' && ch <= '6') {
//					C.ChangeGear(ch - '0');
//				}
//				else if (ch == 'Q' || ch == 'q') {
//					exit(0);
//				}
//			}
//		}
//		C.Run();
//		delay(10);
//	}
//}
//#include <stdio.h>
//
//class Date;
//class Time // 클래스 Time 선언(시간을 표현)
//{
//	friend void OutToday(Date&, Time&); // friend로 지정(클래스의 모든 멤버를 자유롭게 액세스할 수 있음)
//private: // 비공개 접근 연산자
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//public: // 공개 접근 연산자
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; } // 인수 세 개를 받은 생성자
//};
//
//class Date // 클래스 Date 선언(날짜를 표현)
//{
//	friend void OutToday(Date&, Time&); // friend로 지정(클래스의 모든 멤버를 자유롭게 액세스할 수 있음)
//private: // 비공개 접근 연산자
//	int year, month, day; // 정수형 변수 year,month,day 선언
//public: // 공개 접근 연산자
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // 인수 세 개를 받은 생성자
//};
//
//void OutToday(Date& d, Time& t) // 날짜와 시간 출력 메서드(OutToday 함수를 Time과 Date의 프렌드로 지정, 외부 함수이지만 멤버 함수처럼 내부의 모든 멤버를 읽을 수 있음)
//{
//	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
//		d.year, d.month, d.day, t.hour, t.min, t.sec); // 날짜와 시간 출력
//}
//
//int main()
//{
//	Date d(2018, 06, 29); // 클래스 멤버 d 선언 및 초기화
//	Time t(12, 34, 56); // 클래스 멤버 t 선언 및 초기화
//	OutToday(d, t); // 날짜와 시간 출력
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//	friend class Date; // Date를 Time의 프렌드로 지정
//private: // 비공개 접근 연산자
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//public: // 공개 접근 연산자
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; } // 인수 세 개를 받은 생성자
//};
//
//class Date // 클래스 Date 선언
//{
//private: // 비공개 접근 연산자
//	int year, month, day; // 정수형 변수 year,month,day 선언
//public: // 공개 접근 연산자
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // 인수 세 개를 받은 생성자
//	void OutToday(Time& t) { // 날짜와 시간 출력 메서드
//		printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
//			year, month, day, t.hour, t.min, t.sec); // 날짜와 시간 출력
//	}
//};
//
//int main()
//{
//	Date d(2018, 06, 29); // 클래스 멤버 d 선언 및 초기화
//	Time t(12, 34, 56); // 클래스 멤버 t 선언 및 초기화
//	d.OutToday(t); // 날짜와 시간 출력
//}
//#include <stdio.h>
//
//class Time; // 클래스 Time 선언(Date::OutToday가 Time 객체를 인수로 받으려면 Time 클래스가 먼저 선언되어야 함)
//class Date // 클래스 Date 선언
//{
//private: // 비공개 접근 연산자
//	int year, month, day; // 정수형 변수 year,month,day 선언
//public: // 공개 접근 연산자
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // 인수 세 개를 받은 생성자
//	void OutToday(Time& t); // 날짜와 시간 출력 메서드
//};
//
//class Time
//{
//	friend void Date::OutToday(Time& t); // Date 클래스의 OutToday 멤버함수는 Time의 모든 멤버를 읽을 수 있는 권한을 가진다.
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//};
//
//void Date::OutToday(Time& t)
//{
//	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
//		year, month, day, t.hour, t.min, t.sec); // 날짜와 시간 출력
//}
//
//int main()
//{
//	Date d(2018, 06, 29);
//	Time t(12, 34, 56);
//	d.OutToday(t);
//}
//#include <stdio.h>
//
//class Simple // 클래스 Simple 선언
//{
//private:
//	int value; // 정수형 변수 value 선언
//
//public:
//	Simple(int avalue) : value(avalue) { }
//	void OutValue() { // value 값 출력(별도의 인수를 받지 않음)
//		printf("value = %d\n", value);
//	}
//};
//
//int main()
//{
//	Simple A(1), B(2); // 두 객체 생성
//	A.OutValue(); // 1 출력
//	B.OutValue(); // 2 출력
//}
//#include <stdio.h>
//
//int count = 0; // 정수형 변수 count 선언 및 초기화
//class Simple // 클래스 Simple 선언
//{
//private:
//	int value; // 정수형 변수 value 선언
//
//public:
//	Simple() { count++; } /// 생성자에서 1 증가 : 정적으로 선언된 객체든 동적으로 생성되는 객체든 생성자와 파괴자는 정확하게 호출된다.
//	~Simple() { count--; } // 파괴자에서 1 감소 : 객체가 생성될 때 증가하고 파괴될 때 감소하므로 count를 통해 생성된 객체의 수를 알 수 있음
//	void OutCount() { // 매서드 실행
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//
//int main()
//{
//	Simple s, * ps; // Simple의 s와 포인터 ps 선언
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps; // 파괴자
//	s.OutCount();
//	printf("크기 = %d\n", sizeof(s)); // 출력
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	int count = 0; // count를 Simple 클래스 안으로 포함시키고 0으로 초기화
//
//public:
//	Simple() { count++; } // 생성자 count
//	~Simple() { count--; } // 파괴자 count
//	void OutCount() {
//		printf("현재 객체 개수 = %d\n", count); // 객체별로 count 멤버가 있고 생성자에서 자신의 카운트만 개별적으로 증가시키므로 항상 1임.
//	}
//};
//
//int main()
//{
//	Simple s, * ps;
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps;
//	s.OutCount();
//	printf("크기 = %d\n", sizeof(s));
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; // count 앞에 static 키워드를 붙여 정적 멤버임을 명시(count가 Simple 클래스 소속이라는 것만 알릴 뿐 메모리는 할당하지 않는다.
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	void OutCount() {
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//int Simple::count = 0; // count는 Simple 클래스 소속이며 딱 한 번만 초기화 된다.
//
//int main()
//{
//	Simple s, * ps;
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps;
//	s.OutCount();
//	printf("크기 = %d\n", sizeof(s)); // sizeof(s)는 value의 크기값인 4이다.
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; // 정적 멤버 함수는 선언할 때 함수 원형 앞에 static 키워드를 붙이며 외부에 작성할 때는 static 키워드를 생략한다.
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	static void InitCount() { // count의 초기식을 생략하고 정적 멤버 함수 InitCountdptj 0으로 초기화
//		count = 0;
//	}
//	static void OutCount() { // 객체의 개수를 출력하는 함수(정적으로 선언)
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//int Simple::count;
//
//int main()
//{
//	Simple::InitCount();		// 카운트 0
//	Simple::OutCount(); // 객체가 없으므로 0이 출력
//	Simple s, * ps;				// 카운트 1
//	Simple::OutCount(); // s 객체를 생성
//	ps = new Simple;			// 카운트 2
//	Simple::OutCount(); // ps객체를 동적 생성하면 2가 됨
//	delete ps;					// 카운트 1
//	Simple::OutCount(); // ps 객체를 해제하면 1로 감소, main이 완전히 종료 : s 객체가 파괴
//	printf("크기 = %d\n", sizeof(s));
//}								// 카운트 0
//#include <stdio.h>
//
//class DBQuery
//{
//private:
//	static int hCon; // 정적 멤버 hCon 선언, 메모리 할당 하지 않음
//	int nResult; // 정수형 변수 nResult 선언
//
//public:
//	DBQuery() { };
//	static void DBConnect(const char* Server, const char* ID, const char* Pass);
//	static void DBDisConnect();
//	bool RunQuery(const char* SQL);
//	// ....
//};
//int DBQuery::hCon;
//
//void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
//{
//	// 여기서 DB 서버에 접속한다. : DBConnect 함수는 서버 이름과 ID, 비밀번호를 전달 받아 DB서버와 연결한다. 연결 관련 정보는 정적 멤버 변수 hCon에 저장되며 이후 모든 객체가 이 핸들을 사용하여 DB 서버와 통신한다. main에서 세 개의 DBQuery 객체를 생성한다.
//	hCon = 1234;
//	puts("연결되었습니다.");
//}
//
//void DBQuery::DBDisConnect()
//{
//	// 접속을 해제한다.
//	hCon = NULL;
//	puts("연결이 끊어졌습니다.");
//}
//
//bool DBQuery::RunQuery(const char* SQL)
//{
//	// Query(hCon,SQL); : RunQuery는 일반 함수지만 정적 멤버인 hCon을 참조하여 질의를 처리한다. 비정적 멤버에서 모든 객체가 공유하는 정적 멤버를 참조하는 것은 언제나 가능하다.
//	puts(SQL);
//	return true;
//}
//
//int main()
//{
//	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk"); // 세 개의 DBQuery 객체 생성
//	DBQuery Q1, Q2, Q3;
//
//	// 필요한 DB 질의를 한다.
//	Q1.RunQuery("select * from tblBuja where 나랑 친한 사람");
//
//	DBQuery::DBDisConnect(); // 모든 질의를 마친 후 프로그램을 종료하기 전에 DBDisConnect 함수로 연결을 끊는다.
//}
//#include <stdio.h>
//#include <windows.h> // 운영체제의 정보를 읽어야 하므로 헤더파일을 포함
//
//class Shape // 도형을 표현하는 Shape 클래스 선언
//{
//private:
//	int shapeType; // 정수형 변수 shapeType 선언
//	RECT shapeArea;
//	COLORREF color;
//
//public:
//	static int scrx, scry; // 정적멤버변수
//	static void GetScreenSize(); // 정적멤버함수
//};
//
//int Shape::scrx;
//int Shape::scry;
//
//void Shape::GetScreenSize() // 화면 크기를 조사하는 정적 멤버 함수
//{
//	scrx = GetSystemMetrics(SM_CXSCREEN); // 정적멤버변수
//	scry = GetSystemMetrics(SM_CYSCREEN); // 정적멤버변수
//}
//
//int main()
//{
//	Shape::GetScreenSize();
//	Shape C, E, R; // 세 개의 객체에 정보 저장
//	printf("화면 크기 = (%d,%d)\n", Shape::scrx, Shape::scry);
//}
//#include <stdio.h>
//
//class Exchange // 환율을 계산하는 클래스 Exchange
//{
//private:
//	static double rate; // 환율을 기억하는 rate 멤버 변수는 Exchange 클래스에 정적으로 선언. Exchange 객체는 필요할 때 언제든지 이 값을 읽거나 변경할 수 있다.
//
//public:
//	static double GetRate() { return rate; }
//	static void SetRate(double aRate) { rate = aRate; }
//	double DollarToWon(double d) { return d * rate; }
//	double WonToDollar(double w) { return w / rate; }
//};
//double Exchange::rate; // 별도로 정의
//
//int main()
//{
//	Exchange::SetRate(1200); // 최초 화율을 1200원으로 초기화
//	Exchange A, B; // A, B객체는 1200원을 참조하여 환율을 계산
//	printf("1달러는 %.0f원이다.\n", A.DollarToWon(1.0));
//	Exchange::SetRate(1150); // 중간에 환율이 바뀌면 SetRate 함수로 변경. 모든 객체가 다음 계산시부터 이 환율을 참조 : 기준값이 하나여서 관리하기 쉽고 불일치가 발생하지 않음.
//	printf("1달러는 %.0f원이다.\n", B.DollarToWon(1.0));
//}
//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	const double pie; // 실수형 상수 멤버 선언 : 상수 멤버는 값이 결정되면 변경할 수 없는 멤버이다. 클래스 전체에서 참조하는 중요한 값을 상수로 정의하는데 멤버 선언문 앞에 const 지정자를 붙인다.
//
//public:
//	MathCalc(double apie) : pie(apie) { }
//	void DoCalc(double r) {
//		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie); // 소수점 둘째자리까지 출력
//	}
//};
//
//int main()
//{
//	MathCalc m(3.1416); // 상수 멤버 사용, 생성자의 초기화 리스트에서 객체별로 초기화
//	m.DoCalc(5); // r=5로 지정
//}
//#include <stdio.h>
//
//class Enemy
//{
//private:
//	const int Speed; // 정수형 상수 멤버 선언
//
//public:
//	Enemy(int aSpeed) : Speed(aSpeed) { } // Enemy 클래스는 적군을 표현, 객체별로 속도는 다르지만 한 번 속도가 정해지면 불변이다.
//	void Move() {
//		printf("%d의 속도로 움직인다.\n", Speed);
//	}
//};
//
//int main()
//{
//	Enemy e1(10), e2(20); // 상수 멤버를 사용하며 생성자의 초기화 리스트에서 객체별로 초기화한다.
//	e1.Move(); // 10 대입
//	e2.Move(); // 20 대입
//}
#include <stdio.h>

class MathCalc
{
private:
	static const double pie; // pie 멤버 선언문에 static과 const를 같이 붙이면 공유 상수가 된다. 클래스에 포함되며 딱 한 카피만 존재하여 메모리가 절약되며 값을 바꿀 수도 없다.

public:
	MathCalc() { }
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
	}
};
const double MathCalc::pie = 3.1416; // 정적 멤버는 생성자에서 초기화할 수 없고 클래스 외부에 정의하면서 초기화하는 것이 원칙적이다.

int main()
{
	MathCalc m;
	m.DoCalc(5);
}
#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s) { // 비상수 멤버 함수(시간을 변경 변경)
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const { // 상수 멤버 함수(시간을 읽기만 함). 뒤에 const 지정자를 붙여 객체의 상태를 변경하지 않음을 분명히 함.
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 34, 56); // 비상수로 선언된 now 객체(비상수 객체가 상수 함수를 호출하는 것은 언제나 가능)
	now.SetTime(11, 22, 33); // SetTime으로 시간을 변경
	now.OutTime(); // OutTime으로 현재 시간을 출력

	const Time meeting(16, 00, 00);
	meeting.SetTime(17, 00, 00); : meeting 객체는 선언할 때 const 지정자로 상수 객체임을 명시하여 값을 변경할 수 없음
	meeting.OutTime(); // meeting 객체는 OutTime으로 시간을 확인할 수 만 있고 SetTime으로 시간을 변경할 수는 없음
}
//#include <stdio.h>
//
//class Some
//{
//private:
//	mutable int temp; // 임시 정보를 저장하는 temp 멤버 변수. 상수 함수나 상수 객체는 멤버를 읽을 수만 있고 변경할 수는 없다. mutable 지정자는 이 규칙에 대한 예외를 지정하여 이 속성을 가지는 메버는 객체의 상수성과 상관없이 언제나 수정이 가능하다.
//
//public:
//	Some() { }
//	void method() const { temp = 0; } // 상수 함수 method(temp의 값을 마음대로 변경 가능)
//};
//
//int main()
//{
//	Some s;
//	s.method();
//
//	const Some t; // t 상수 선언
//	t.method(); // method 호출, temp의 값 변경
//}
//#include<stdio.h>
//#include<string.h>
//
//class Human
//{
//private: // 비공개 제한 연산자
//	char name[12]; // 문자형 배열 공간 할당(12)
//	int age; // 정수형 변수 age 선언
//
//public: // 공개 제한 연산자
//	Human(const char* aname, int aage) { // 변수 대입
//		SetName(aname); // 상수 멤버 변수
//		SetAge(aage); // 정수형 변수
//	}
//
//	void intro() {
//		printf("이름=%s, 나이=%d\n", name, age); // 출력
//	}
//
//	char* GetName() { return name; } // Get 함수는 멤버값을 읽어만 줌
//	void SetName(const char* aname) {  // 상수 멤버 변수 aname, Set 함수는 주어진 조건에 마을 때만 멤버의 값을 변경하고 그렇지 않으면 빈 문자열이나 0을 대입하여 잚소된 정보임을 기록
//		if (strlen(aname) < 12) { // 이름이 12미만일 경우
//			strcpy(name, aname); // name에 aname대입
//		}
//		else { // 아닐 경우
//			strcpy(name, ""); // name에 "" 대입
//		}
//	}
//	int GetAge() { return age; };
//	void SetAge(int aage) {
//		if (aage >= 0 && aage <= 120) {
//			age = aage;
//		}
//		else {
//			age = 0;
//		}
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29); // 클래스 Human 멤버 kim 선언 및 정의
//	kim.SetName("Kim Sanf Hyung");
//	kim.SetAge(138);
//	kim.intro();
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include"cursor.h"
//
//class Sun
//{
//private:
//	const int x, y; // 정수형 상수 멤버 변수
//	const char ch; // 문자형 상수 멤버 변수
//
//public:
//	Sun(int ax, int ay, char ach) : x(ax), y(ay), ch(ach) { ; } //태양은 정해진 좌표에서 움직이지 않아 모든 멤버변수는 상수로 선언
//	void Show() {
//		gotoxy(x, y); putch(ch);
//	}
//	void Hide() {
//		gotoxy(x, y); putch('');
//	}
//	int GetX() const { return x; } // 함수의 좌표 조사
//	int GetY() const { return y; } // 함수의 좌표 조사
//};
//
//class Earth
//{
//private:
//	const int r; // 정수형 상수 멤버 변수 r
//	int s, y;
//	const char ch; // 문자형 상수 멤버 변수 ch
//	const Sun* pSun; // 포인터형 상수 멤버 변수
//
//public:
//	Earth(int ar, char ach, Sun* apSun) : r(ar), ch(ach), pSun(apSun) { ; }
//	void Revolve(double angle) { // 공전 동작 처리 : 공전 각도를 인수로 받아 궤도상의 좌표를 구해 지구의 위치를 옮김
//		Hide();
//		x = int(cos(angle * 3.1416 / 180) * r * 2);
//		y = int(sin(angle * 3.1416 / 180) * r);
//		Show();
//	}
//	void Show() {
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y); putch(ch);
//	}
//	void Hide() {
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y); putch('');
//	}
//};
//
//int main()
//{
//	Sun S(40, 12, 'S'); // 태양 객체 생성
//	Earth E(10, 'E', &S); // 지구 객체 생성
//
//	clrscr();
//	showcursor(0);
//	S.Show();
//	for (double angle = 0; !kbhit(); angle += 10) { // 지구의 공전
//		E.Revolve(angle);
//		delay(100);
//	}
//	showcursor(1);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include "cursor.h"
//#include <windows.h>
//
//
//class Sun //클래스 선언 및 정의
//{
//private:
//	const int x, y; //정수형 상수 멤버 x,y 선언
//	const char ch; //문자형 상수 멤버 ch 선언
//
//public:
//	Sun(int ax, int ay, char ach) : x(ax), y(ay), ch(ach) { ; }//초기화리스트를 통해서 초기화햐줌
//	void Show() { //멤버변수 드러낸다.
//		gotoxy(x, y);
//		_putch(ch);
//	}
//	void Hide() { //멤버 변수 숨겨준다
//		gotoxy(x, y);
//		_putch(' ');
//	}	// 태양의 좌표에만 문자가 떠주게 함
//	int GetX() const { return x; } //태양 x좌표
//	int GetY() const { return y; } //태양 y좌표
//};
//
//class Earth //클래스 선언
//{
//private:
//	const int r; //정수형 상수멤버 선언
//	int x, y;
//	const char ch; //문자형 상수멤버 선언
//	const Sun* pSun; //클래스형 포인터 상수 멤버
//
//public:
//	Earth(int ar, char ach, Sun* apSun) : r(ar), ch(ach), pSun(apSun) { ; } //초기화리스트를 통해서 초기화햐줌
//	void Revolve(double angle) { //공전 처리함수
//		Hide();
//		x = int(cos(angle * 3.1416 / 180) * r * 2);
//		y = int(sin(angle * 3.1416 / 180) * r);
//		Show();
//	}
//	void Show() {//x와 y좌표를 구해줘야함
//		gotoxy(pSun->GetX() + x, pSun->GetX() + y);
//		_putch(ch);	//이번엔 지구의 좌표이다
//	}
//	void Hide() { //숨김
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y);
//		_putch(' ');	// 지구의 좌표에만 문자가 떠주게끔 설정해놓음
//	}
//};
//
//int main()
//{
//	Sun S(40, 12, 'S'); //클래스 변수 S 선언 이와 동시에 생성자 호출 
//	Earth E(10, 'E', &S); //클래스 변수 E 선언 이와 동시에 생성자 호출
//
//	clrscr(); //화면 지워준다(clear screen)
//	showcursor(0); //마우스 커서 감춤->안에는 무조건 true or false만 들어간다
//	S.Show(); //태양을 표시해준다
//	for (double angle = 0; !_kbhit(); angle += 10) { //kbhit함수를 이용해 키보드 누를때까지 반복하준다
//		E.Revolve(angle); //지구의 공전을 나타내줌
//		delay(100); //딜레이는 0.1초
//	}
//	showcursor(1); //마우스 커서를 꼭 표시해줌
//}

//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<cursor.h>
//
//class Sun
//{
//private:
//	const int x, y; // 정수형 상수 멤버 변수
//	const char ch; // 문자형 상수 멤버 변수
//
//public:
//	Sun(int ax, int au, char ach) :x(ax), y(au), ch(ach) { ; }
//	void Show()
//	{
//		gotoxy(x, y); putch(ch); // 좌표를 출력함
//	} 
//
//	void Hide()
//	{
//		gotoxy(x, y); putch(' '); // 좌표를 숨김
//	}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//
//class Earth
//{
//private:
//	const int r;
//	int x, y;
//	const char ch;
//	const Sun* pSun;
//
//public:
//	Earth(int ar, char ach, Sun* apSun) :r(ar), ch(ach), pSun(apSun) { ; }
//	void Revolve(double angle)
//	{
//		Hide();
//		x = int(cos(angle * 3.1416 / 180) * r * 2);
//		y = int(sin(angle * 3.1416 / 180) * r);
//		Show();
//
//	}
//	void Show() {
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y);
//		putch(ch);
//	}
//	void Hide()
//	{
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y);
//		putch(' ');
//	}
//	int GetX() const { return pSun->GetX() + x; }
//	int GetY() const { return pSun->GetY() + y; }
//};
//
//class Moon {
//private:
//	const int r;// 정수형 상수 멤버 변수
//	int x, y;
//	const char ch;// 문자형 상수 멤버 변수
//	const Earth* pEarth;
//
//public:
//	Moon(int ar, char ach, Earth* apEarth) :r(ar), ch(ach), pEarth(apEarth) { ; }
//	void Revolve(double angle) {
//		Hide();
//		x = int(cos(angle * 3.1416 / 180) * r * 2);
//		y = int(sin(angle * 3.1416 / 180) * r);
//		Show();
//	} 
//	void Show()
//	{
//		gotoxy(pEarth->GetX() + x, pEarth->GetY() + y); putch(ch); //  달의 위치 출력
//	}
//	void Hide()
//	{
//		gotoxy(pEarth->GetX() + x, pEarth->GetY() + y); putch('*'); // 달이 지나간 위치 숨김
//	}
//};
//
//int main()
//{
//	Sun S(40, 12, 'S'); // Sun 좌표 대입
//	Earth E(10, 'E', &S);// Earth 좌표 대입
//
//	Moon M(5, 'M', &E);// 달의 위치 계산
//
//	clrscr();
//	showcursor(0);
//	S.Show();
//	for (double angle = 0; !kbhit(); angle += 10) {
//		E.Revolve(angle);
//		for (double angle2 = 0; angle2 <= 360 && !kbhit(); angle2 += 15) {
//			M.Revolve(angle2);
//			delay(20);
//		}
//		M.Hide();
//	}
//	showcursor(1);
//}