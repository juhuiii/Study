//#include <stdio.h>
//
//class Time
//{
//private: // 비공개 접근 연산자
//	int hour, min, sec; // 정수형 변수 hour,min,sec 생성
//
//public: // 공개 접근 연산자
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }//h에 hour, m에 min, s에 sec 대입
//	void OutTime() { // 시간 출력
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time AddTime(const Time& other) const { // 시간 객체끼리의 덧셈을 수행하는 함수 AddTime : 인수로 Time 객체를 받아 현재 객체와 더해 새로운 시간을 리턴함
//		Time t;
//		t.sec = sec + other.sec; // 새로운 sec
//		t.min = min + other.min; // 새로운 min
//		t.hour = hour + other.hour; // 새로운 hour
//
//		t.min += t.sec / 60; // 자리넘침을 처리
//		t.sec %= 60;
//		t.hour += t.min / 60; // 자리넘침을 처리
//		t.min %= 60;
//		return t; // 새로운 시간을 리턴
//	}
//};
//
//int main()
//{
//	Time t1(1, 10, 30); // t1 대입
//	Time t2(2, 20, 40); // t2 대입
//	Time t3;
//
//	t3 = t1.AddTime(t2); // t1과 t2의 시간 덧셈
//	t3.OutTime(); // 결과값 출력
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 정의
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() { // 시간 출력
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time operator +(const Time& other) const { // 함수 호출 구문이 아닌 연산문으로 덧셈 가능
//		Time t;
//		t.sec = sec + other.sec; // 새로운 sec
//		t.min = min + other.min; // 새로운 min
//		t.hour = hour + other.hour; // 새로운 hour
//
//		t.min += t.sec / 60; // 자리넘침을 처리
//		t.sec %= 60;
//		t.hour += t.min / 60; // 자리넘침을 처리
//		t.min %= 60;
//		return t; // 새로운 시간을 리턴
//	}
//};
//
//int main()
//{
//	Time t1(1, 10, 30); // t1 대입
//	Time t2(2, 20, 40); // t2 대입
//	Time t3;
//
//	t3 = t1 + t2; // 연산자 함수
//	t3.OutTime(); // t3 출력
//}
//#include <stdio.h>
//
//class Time
//{
//	friend const Time operator +(const Time& me, const Time& other);  // operator + 일반 함수를 전역으로 작성, 외부에 존재하는 연산자 함수가 대상 클래스 멤버를 자유롭게 읽기위해 프렌드 지정을 통한 액세스 권한 부여
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
//const Time operator +(const Time& me, const Time& other) { // 피연산자 두 개를 me,other라는 이름의 인수로 전달받아 두 객체를 더해 리턴함
//	Time t;
//	t.sec = me.sec + other.sec;
//	t.min = me.min + other.min;
//	t.hour = me.hour + other.hour;
//
//	t.min += t.sec / 60;
//	t.sec %= 60;
//	t.hour += t.min / 60;
//	t.min %= 60;
//	return t;
//}
//
//int main()
//{
//	Time t1(1, 10, 30);
//	Time t2(2, 20, 40);
//	Time t3;
//
//	t3 = t1 + t2; // operator +(t1,t2) 함수 호출
//	t3.OutTime();
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time operator +(int s) const { // Time 객체에 정수를 더하기 위해 연산자 함수를 정의
//		Time t = *this; // 임시 객체 t를 this의 사본으로 생성
//
//		t.sec += s; // 인수로 받은 s초를 더함
//
//		t.min += t.sec / 60; // 자리넘침을 처리
//		t.sec %= 60;
//		t.hour += t.min / 60; // 자리넘침을 처리
//		t.min %= 60;
//		return t;
//	}
//};
//
//int main()
//{
//	Time now(11, 22, 33); // Time에 값 대입
//	now.OutTime(); // 대입 값 출력
//	now = now + 1; // 시간 객체에 정수 1을 더함
//	now.OutTime(); // 더한 값 출력
//}
//#include <stdio.h>
//
//class Time
//{
//	friend const Time operator +(int s, const Time& me); // operator+(int,Time) 전역 함수를 추가, 정수에 시간 객체를 더함
//private:
//	int hour, min, sec;
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
//const Time operator +(int s, const Time& me) {
//	Time t = me;
//
//	t.sec += s;
//
//	t.min += t.sec / 60;
//	t.sec %= 60;
//	t.hour += t.min / 60;
//	t.min %= 60;
//	return t;
//}
//
//int main()
//{
//	Time now(11, 22, 33);
//	now.OutTime();
//	now = 1 + now; // 정수와 Time 객체를 받는 함수가 정의되었으니 1+now 연산이 가능
//	now.OutTime(); // 더한 값 출력
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time operator +(int s) const { // 프렌드 지정 생략 : 전역 함수가 Time 클래스의 멤버를 직접 읽지 않음
//		Time t = *this;
//
//		t.sec += s;
//
//		t.min += t.sec / 60;
//		t.sec %= 60;
//		t.hour += t.min / 60;
//		t.min %= 60;
//		return t;
//	}
//};
//
//const Time operator +(int s, const Time& me) {
//	return (me + s);
//}
//
//int main()
//{
//	Time now(11, 22, 33);
//	now.OutTime();
//	now = 1 + now; // 정수+타임 객체
//	now = now + 1;//타임+정수 객체
//	now.OutTime(); // 계산 값 출력
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	bool operator ==(const Time& other) const { // 관계 연산자는 진위 여부를 판단하므로 bool 타입을 리턴함
//		return (hour == other.hour && min == other.min && sec == other.sec); // 시,분,초 요소가 모두 일치하는지 각각 비교하여 && 논리 연산자로 연결함
//	}
//	bool operator !=(const Time& other) const { // 세 요소 중 하나라도 다른지 점검
//		return !(*this == other); // == 연산의 결과를 반대로 뒤집어 리턴함
//	}
//	bool operator >(const Time& other) const { // 좌변이 더 큰지 검사하는 연산자
//		if (hour > other.hour) return true; // 가장 큰 단위인 시간을 먼저 비교해보고 좌변 객체의 시간이 더 크면 참
//		if (hour < other.hour) return false; // 더 작으면 거짓
//		if (min > other.min) return true;
//		if (min < other.min) return false;
//		if (sec > other.sec) return true;
//		return false;
//	}
//	bool operator >=(const Time& other) const {
//		return (*this == other || *this > other);
//	}
//	bool operator <(const Time& other) const { // 우변이 더 큰지 검사하는 연산자
//		return !(*this >= other);
//	}
//	bool operator <=(const Time& other) const {
//		return !(*this > other);
//	}
//};
//
//int main()
//{
//	Time t1(12, 34, 56);
//	Time t2(12, 34, 21);
//
//	if (t1 == t2) { // t1과 t2 비교
//		puts("두 시간은 같다.");
//	}
//	else {
//		puts("두 시간은 다르다.");
//	}
//
//	if (t1 > t2) { // t1과 t2 비교
//		puts("t1이 더 크다.");
//	}
//	else {
//		puts("t1이 더 작다.");
//	}
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	Time operator ++() { // 전위형 증가 연산자 정의
//		sec++;
//		min += sec / 60;
//		sec %= 60;
//		hour += min / 60;
//		min %= 60;
//		return *this;
//	}
//	const Time operator ++(int dummy) { // 후위형의 증가 연산자는 정수형 더미 인수 하나를 취하는 방법을 사용(오버로딩 요건을 충족시ㅕ 두 형식의 증가 연산자를 모두 정의 할 수 있도록 하는 보조 역할 수행)
//		Time t = *this; // 임시 객체 t에 현재 객체의 사본을 뜸
//		++* this; // 객체를 증가시킴
//		return t; // 증가 전의 t 리턴
//	}
//};
//
//int main()
//{
//	Time t1(1, 1, 1); // t1 객체 초기화
//	Time t2;
//
//	t2 = ++t1; // 전위형 증가 연산자
//	t1.OutTime();
//	t2.OutTime(); // t1, t2 모두 증가
//	t2 = t1++; // 후위형 증가 연산자
//	t1.OutTime();
//	t2.OutTime(); // t2는 증가 전의 t1값을 가짐
//}
//#include <stdio.h>
//#include <string.h> // strcpy 사용을 위한 헤더파일
//
//class Human // 이름을 저장하는 pname 멤버를 동적으로 할당하는 클래스 Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human() { // 디폴트 생성자 : 멤버를 NULL,0,false 등으로 초기화
//		pname = new char[1]; // 문자형, 크기가 1바이트인 동적할당
//		pname[0] = NULL;
//		age = 0;
//	}
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1]; // Null문자를 더한만큼의 공간 할당
//		strcpy(pname, aname);
//		age = aage;
//	}
//	Human(const Human& other) {
//		pname = new char[strlen(other.pname) + 1]; // Null문자를 더한만큼의 공간 할당
//		strcpy(pname, other.pname);
//		age = other.age;
//	}
//
//	~Human() { // 파괴자 선언
//		delete[] pname;
//	}
//
//	void intro()
//	{
//		printf("이름 = %s, 나이 = %d\n", pname, age); // 이름, 나이 출력
//	}
//};
//
//int main()
//{
//	Human kang("강감찬", 1424); // kang에 강감찬, 1424 대입
//	Human boy; // boy 생성
//
//	boy = kang; // boy에 kang 대입
//	boy.intro(); // 값 출력
//} // 대입 연산자를 정의하자 않아 얕은 복사를 수행하여 에러 발생
//#include <stdio.h>
//#include <string.h>
//
//
//class Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human() { 
//		pname = new char[1];
//
//		pname[0] = NULL;
//		age = 0; 
//	}
//	Human(const char* aname, int aage) { 
//		pname = new char[strlen(aname) + 1]; // Null문자를 더한만큼의 공간 할당
//		strcpy(pname, aname);
//		age = aage;
//	}
//	Human(const Human& other) { 
//		pname = new char[strlen(other.pname) + 1]; // Null문자를 더한만큼의 공간 할당
//		strcpy(pname, other.pname);
//		
//		age = other.age;
//	}
//	Human& operator =(const Human& other) { // 단순대입연산자 선언, 연산자 오버로등
//		if (this != &other) { // 만약 같지 않다면
//			delete[] pname;  // 파괴
//			pname = new char[strlen(other.pname) + 1]; // Null문자를 더한만큼의 공간 할당
//			strcpy(pname, other.pname);
//			age = other.age;
//		}
//		return *this; 
//	}
//
//	~Human() { // 파괴자
//		delete[] pname;
//	}
//
//	void intro() 
//	{
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human kang("강감찬", 1424); // kang에 강감찬, 1424 대입
//	Human boy; // boy 생성
//
//	boy = kang; 
//	boy.intro();
//} 

//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public:
//	Time() { } // 시간 객체와 정수를 더할 수 있는 클래스 Time
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // 정보 출력
//	}
//	const Time operator +=(int s) { // 사용자가 입력한 정수를 멤버변수값에 더함
//		sec += s;
//
//		min += sec / 60;
//		sec %= 60;
//		hour += min / 60;
//		min %= 60;
//		return *this; // 객체값 리턴
//	}
//	const Time operator +(int s) const { // 사용자가 입력한 정수를 더함
//		Time t = *this; // 현재 객체를 t에 대입
//		t += s;
//		return t; // t값 리턴
//	}
//};
//
//int main()
//{
//	Time now(11, 22, 33); // 객체 생성 및 값 대입
//	now.OutTime();
//	now = now + 2; // 2초 더함
//	now += 40; // 40초 더함
//	now.OutTime(); // 결과값 출력
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class Time
//{
//	friend ostream& operator <<(ostream& c, const Time& T); // ostream 객체, 전역 연산자 함수 정의
//	friend ostream& operator <<(ostream& c, const Time* pT); // Time형의 객체, Time형의 포인터, 전역 연산자 함수 정의
//private:
//	int hour, min, sec;
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
//ostream& operator <<(ostream& c, const Time& T)
//{
//	c << T.hour << "시" << T.min << "분" << T.sec << "초"; // Time 클래스의 멤버를 c 객체로 순서대로 보냄
//	return c; // c값 리턴
//}
//
//ostream& operator <<(ostream& c, const Time* pT) // ostream 타입의 레퍼런스를 리턴 : 연쇄적인 출력 지원
//{
//	c << *pT;
//	return c; // c값 리턴
//}
//
//int main()
//{
//	Time now(1, 2, 3);
//	Time* pTime;
//
//	pTime = new Time(4, 5, 6); // 메모리 할당, pTime의 인스턴스 값 초기화
//	cout << "현재 시간은 " << now << "입니다." << endl;
//	cout << "현재 시간은 " << pTime << "입니다." << endl;
//	delete pTime;
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public:
//	Time() {}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // 정보 출력
//	}
//	const Time operator -(const Time& other) const { // 연산자 오버로딩
//		Time t;
//		t.sec = sec - other.sec; // 계산 설정
//		t.min = min - other.min; // 계산 설정
//		t.hour = hour - other.hour; // 계산 설정
//
//		if (t.sec < 0) { // 초가 0보다 작으면
//			t.min--; // min에서 - 계산을 해줌
//			t.sec += 60; // sec에는 60 내려서 계산
//		}
//		if (t.min < 0) { // min이 0보다 작으면
//			t.hour--; // hour에서 - 계산을 해줌
//			t.min += 60; // min에는 60 내려서 계산
//		}
//		return t; // t값 리턴
//	}
//};
//
//int main()
//{
//	Time t1(3, 10, 30); // t1 대입
//	Time t2(1, 20, 20); // t2 대입
//	Time t3;
//	t3 = t1 - t2; // t3 계산
//	t3.OutTime(); // t3 결과값 출력
//}

//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // 정수형 변수 hour,min,sec 선언
//
//public:
//	Time() {}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // 객체 정보 출력
//	}
//	const Time operator *(int s)const {
//		Time t = *this; // t값에 현재 객체 값 대입
//
//		t.sec *= s;
//		t.min *= s;
//		t.hour *= s;
//
//		t.min += t.sec / 60;
//		t.sec %= 60;
//		t.hour += t.min / 60;
//		t.min %= 60;
//		return t; // t값 리턴
//	}
//};
//
//const Time operator *(int s, const Time& me) { // 전역함수
//	return (me * s);
//}
//
//int main()
//{
//	Time now(1, 2, 33);
//	now = now * 2; // 계산
//	now.OutTime(); // 결과값 출력
//	now = 3 * now; // 계산
//	now.OutTime(); // 결과값 출력
//}

//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//class Human
//{
//	friend ostream& operator <<(ostream& c, const Human& H); // friend함수 선언
//	friend ostream& operator <<(ostream& c, const Human* pH); // friend함수 선언
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age); // 객체 정보 출력
//	}
//};
//
//ostream& operator << (ostream& c, const Human& H) // 전역함수 operator 선언
//{
//	c << " 이름 : " << H.name << ", 나이 : " << H.age << "살"; //
//	return c; // c값 출력
//}
//
//ostream& operator << (ostream& c, const Human* pH)
//{
//	c << *pH;
//	return c;
//}
//
//int main()
//{
//	Human kim("김상형", 29);
//	Human *pLee = new Human("이승우", 45);
//	cout << "대장은" << kim << "입니다." << endl; //
//	cout << "졸병은" << pLee << "입니다." << endl; //
//	delete pLee;
//}