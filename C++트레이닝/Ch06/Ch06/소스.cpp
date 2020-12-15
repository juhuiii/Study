//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human
//{
//private: // 부모의 멤버가 private로 숨겨져 있으면 아무리 자식이라도 읽을 수 없다.
//	char name[12]; // 문자형 멤버 변수 name
//	int age; // 정수형 멤버 변수 age
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age); // 이름과 나이 출력
//	}
//};
//
//class Student : public Human // Human으로부터 파생된 클래스 Student
//{
//private:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum; // Human의 모든 멤버를 상속받은 후 학번을 저장하는 멤버 변수 stunum
//	} // 부모로부터 상속받은 멤버는 자식이 초기화할 수 없다. 그래서 상속받은 멤버를 초기화할 때는 초기화 리스트에서 부모의 생성자를 호출하여 부모에게 부탁한다.
//	void study() { // 공부하는 동작 표현
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29);
//	kim.intro();
//	Student han("김한결", 15, 123456); // Human에게 name, age, intro를 상속받아 가진다. 따라서 이름과 나이를 출력할 수 있다.
//	han.intro();
//	han.study();
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//protected: // 외부에 대해서는 숨기더라도 자식에 대해서는 액세스를 허용할 필요가 있다. 이럴 때 사용하는 중간 단계의 액세스 지정자가 protected이다.
//	char name[12]; // 멤버 변수 name 선언
//	int age; // 멤버 변수 age 선언
//
//public: // 접근 가능
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { // 이름과 나이 출력
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human으로부터 파생된 클래스 Student
//{
//protected:
//	int stunum; // 학번을 저장하는 멤버 변수 선언
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) { // 부모로부터 상속받은 name, age를 Human으로 넘김
//		stunum = astunum;
//	}
//	void study() { // 출력
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//	void report() { // 보고서 제출 출력, 만약 private이었다면 name 사용 불가
//		printf("이름 : %s, 학번 : %d 보고서 제출합니다.\n", name, stunum);
//	}
//};
//
//int main()
//{
//	Student han("김한결", 15, 123456); // 객체 선언
//	han.intro(); // 함수 intro 출력
//	han.study(); // 함수 study 출력
//	han.report(); // 함수 report 출력
//}

//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human 선언
//{
//protected: // protected : 자식과 정보 공유 가능
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human으로부터 파생된 클래스 Student
//{
//protected: // protected : 자식과 정보 공유 가능
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	} // Student는 Human으로부터 상속받되 모든 멤버의 액세스 속성을 그대로 유지한다. 그래서 protected 속성의 anme 멤버가 상속 후에도 여전히 protected이며 Student 객체의 report 함수가 name을 자유롭게 읽을 수 있다.
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//	void intro() {
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29);
//	kim.intro();
//	Student han("김한결", 15, 123456);
//	han.intro(); // intro를 재정의한다 : 객체에 따라 실제 호출되는 함수가 다르다. 만약 부모의 숨겨진 함수를 호출하고 싶다면 클래스명과 범위 연산자를 사용한다.
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//protected:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { // 이름과 나이 출력
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human으로부터 파생된 클래스 Student
//{
//protected:
//	int stunum; // 고유 멤버인 stunum 추가 (자식클래스 접근 가능)
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	} // 이름과 나이는 Human으로 전달
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//class Graduate : public Student // Student로부터 파생된 클래스 Graduate
//{
//protected:
//	char thesis[32]; // 고유 멤버인 thesis 추가
//
//public: // Student로부터 학번을 상속받음
//	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum) {
//		strcpy(thesis, athesis);
//	} // 이름, 학번, 나이는 Student로 전달
//	void research() {
//		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
//	}
//};
//
//int main()
//{
//	Graduate moon("문종민", 45, 920629, "게임방 상권 분석");
//	moon.research(); // 함수 research 선언
//}
//#include<stdio.h>
//#include<string.h>
//
//class Human // 클래스 Human 생성
//{
//protected: // 자식과 정보 공유 가능
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { // 이름과 나이 출력
//		printf("이름 = %s, 나이= %d \n", name, age);
//	}
//};
//
//class Boxer : public Human // Human로부터 파생된 클래스 Boxer
//{
//protected: // 자식과 정보 공유 가능
//	int height; // 정수형 변수 height
//	int weight; // 정수형 변수 weight
//
//public:
//	Boxer(const char* aname, int aage, int aheight, int aweight) : Human(aname, aage) {
//		height = aheight;
//		weight = aweight;
//	} // 입력받은 키와 몸무게를 부모인 Human으로 전달해준다.
//	void intro() { // 부모 intro사용을 원할시에는 ::을 사용한다.
//		printf("키 : %d, 몸무게 %d의 복서 %s입니다.\n", height, weight, name);
//	}
//	void fight() { // 문장 출력 함수
//		puts("레프트, 라이트, 쨉쨉\n");
//	}
//};
//
//int main() {
//	Boxer kim("김상형", 29, 180, 65);
//	kim.intro();
//	kim.fight(); // fight 함수 출력
//}

//#include <stdio.h>
//#include <conio.h>
//
//class Date // 날짜와 관련된 속성과 함수를 정의하는 클래스 Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d/%d/%d", year, month, day); } // 현재 날짜 출력
//};
//
//class Time // 시간과 관련된 기능을 캡슐화하는 클래스 Time
//{
//protected:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() { printf("%d:%d:%d", hour, min, sec); } // 현재 시간 출력
//};
//
//class DateTime : public Date, public Time // 다중 상속 : 클래스 정의문에 콤마로 구분하여 부모 클래스를 나열하되 각 부모의 액세스 지정자는 개별적으로 지정한다.
//{
//private:
//	bool bEngMessage;
//	int milisec;
//public:
//	DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b = false)
//		: Date(y, m, d), Time(h, min, s) {
//		milisec = ms; // 정밀한 시간을 저장하기 위해 milisec 멤버를 추가한다.
//		bEngMessage = b;
//	} // DateTime은 날짜, 시간과 관련된 속성을 모두 상속받으며 필요한 멤버의 추가도 가능하다.
//	void OutNow() {
//		printf(bEngMessage ? "Now is " : "지금은 ");
//		OutDate();
//		putch(' ');
//		OutTime();
//		printf(".%d", milisec);
//		puts(bEngMessage ? "." : " 입니다.");
//	}
//};
//
//int main()
//{
//	DateTime now(2017, 6, 29, 12, 30, 58, 99);
//	now.OutNow(); // OutNow 함수 호출
//}
//#include <stdio.h>
//
//class A // 클래스 A
//{
//protected: // 자식과 정보 공유 가능
//	int a;
//public:
//	A(int aa) { a = aa; }
//};
//
//class B : public A // 클래스 A의 자식인 클래스 B
//{
//protected: // 자식과 정보 공유 가능
//	int b;
//public:
//	B(int aa, int ab) : A(aa) { b = ab; }
//};
//
//class C : public A // 클래스 A의 자식인 클래스 C
//{
//protected: // 자식과 정보 공유 가능
//	int c;
//public:
//	C(int aa, int ac) : A(aa) { c = ac; }
//};
//
//class D : public B, public C // 클래스 A의 멤버변수 a : D는 A의 멤버 a를 두 번 상속받는다.
//{
//protected:
//	int d;
//public:
//	D(int aa, int ab, int ac, int ad) : B(aa, ab), C(aa, ac) { d = ad; }
//	void fD() {
//		b = 1;
//		c = 2;
//		a = 3;		// 여기서 문제 발생 : 두 번 상속받기에 어떤 a인지 알 수 없는 모호함과 오류가 발생한다.
//	}
//};
//
//int main()
//{
//	D d(1, 2, 3, 4);
//}
//#include <stdio.h>
//
//class A // 클래스 A
//{
//protected:
//	int a;
//public:
//	A(int aa) { a = aa; }
//};
//
//class B : virtual public A // 클래스 A의 자식인 클래스 B : 간접적으로 두 번 상속되더라도 멤버는 한 번만 상속하는 가상 기반 클래스 virtual 선언
//{
//protected:
//	int b;
//public:
//	B(int aa, int ab) : A(aa) { b = ab; }
//};
//
//class C : virtual public A // 클래스 A의 자식인 클래스 C : 간접적으로 두 번 상속되더라도 멤버는 한 번만 상속하는 가상 기반 클래스 virtual 선언
//{
//protected:
//	int c;
//public:
//	C(int aa, int ac) : A(aa) { c = ac; }
//};
//
//class D : public B, public C // B와 C를 상속받아 선언된 클래스 D
//{
//protected:
//	int d;
//public:
//	D(int aa, int ab, int ac, int ad) : A(aa), B(aa, ab), C(aa, ac) { d = ad; }
//	void fD() {
//		b = 1;
//		c = 2;
//		a = 3;
//	} // 모호함 제거, 오류 발생 X
//}; // 다중 상속을 통해 상속받은 멤버의 초기화는 최종 클래스가 직접 처리한다.
//
//int main()
//{
//	D d(1, 2, 3, 4);
//}
//#include <stdio.h>
//#include <string.h>
//
//class Date // 날짜를 표현하는 클래스 Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d/%d/%d", year, month, day); }
//};
//
//class Product // 제품에 대한 정보를 표현하는 클래스 Product
//{
//private:
//	char name[64];
//	char company[32];
//	Date validto; // 유효기간 : Date 타입의 validto 멤버로 선언
//	int price;
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("이름:%s\n", name);
//		printf("제조사:%s\n", company);
//		printf("유효기간:");
//		validto.OutDate(); // 멤버를 일일이 선언할 필요 없이 정보를 잘 캡슐화해 놓은 Date 클래스의 객체 하나를 선언하는 것이 더 간편함
//		puts("");
//		printf("가격:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
//	shrimp.OutProduct(); // 함수 호출
//}
//#include <stdio.h>
//#include <string.h>
//
//class Date
//{
//protected:
//	int year, month, day;
//public:
//	Date() { }
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d/%d/%d", year, month, day); }
//};
//
//class Product : private Date // 가상 상속이 아닌 private 상속을 통해 Product 내부에서만 사용할 수 있게 한다.
//{
//private:
//	char name[64];
//	char company[32];
//	int price;
//public: // 클래스 Date에 대한 validto 멤버 선언 X
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : Date(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() { // 정보 출력
//		printf("이름:%s\n", name);
//		printf("제조사:%s\n", company);
//		printf("유효기간:");
//		OutDate();
//		puts("");
//		printf("가격:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
//	shrimp.OutProduct(); // 결과 출력
//}
//#include <stdio.h>
//#include <string.h>
//
//class Product
//{
//private:
//	char name[64];
//	char company[32];
//	int price;
//
//	class Date // 외부에서는 전혀 필요치 않고 Product 클래스 안에서만 사용
//	{  // Date타입의 멤버 선언 : Date는 외부로 알려지지 않으며 Product 안에서만 사용되는 지역 클래스
//	protected:
//		int year, month, day;
//	public:
//		Date(int y, int m, int d) { year = y; month = m; day = d; }
//		void OutDate() { printf("%d/%d/%d", year, month, day); }
//	};
//	Date validto; // Date 타입의 validto 멤버 선언
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("이름:%s\n", name);
//		printf("제조사:%s\n", company);
//		printf("유효기간:");
//		validto.OutDate();
//		puts("");
//		printf("가격:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
//	shrimp.OutProduct();
//
//	// Date now(12, 34, 56);	// 에러 : Date 타입을 알 수 없기에 Date 타입의 객체 생성 불가
//}
//#include<stdio.h>
//#include<string.h>
//
//class Date // 클래스 Date 생성
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate(){ printf("%d/%d/%d", year, month, day); }
//};
//
//class Human // 클래스 Human 생성
//{
//protected:
//	char name[12];
//	int age;
//	Date birth; // Date 타입의 멤버 birth 선언
//
//public:
//	Human(const char* aname, int aage, int y, int m, int d) :birth(y, m, d) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { //정보 출력 : 이름과 나이 다음에 birth 객체의 OutDate 함수를 호출하여 생일 출력
//		printf("이름 = %s, 나이=%d \n", name, age);
//		printf("생일 = ");
//		birth.OutDate();
//		printf("\n");
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29, 1989, 6, 29);
//	kim.intro();//정보 출력
//}