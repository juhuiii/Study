//#include <stdio.h>
//int main()
//{
//	int sum = 124, num = 5;
//	printf("평균 = %f\n", static_cast<double>(sum) / num); // 상속 관계의 클래스 포인터 및 레퍼런스
//}

//#include <stdio.h>
//
//class Parent // 클래스 Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//private:
//	int num; // 멤버 변수 num
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // 가상함수 PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // 출력 메서드 선언
//};
//
//void func(Parent* p)
//{
//	p->PrintMe(); // Parent 파생 객체의 포인터를 전달받아 PrintMe 함수 호출
//	((Child*)p)->PrintNum(); // Child일 경우 Child * 타입으로 강제 캐스팅하여 PrintNum 비가상 함수도 호출
//}
//
//int main()
//{
//	Parent p; // 객체 생성
//	Child c(5); // 객체 생성
//
//	func(&c); // 함수 호출
//	func(&p); // 함수 호출
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // 클래스 Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // 가상 함수 PrintMe
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // 가상 함수 PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // 출력 메서드
//};
//
//int main()
//{
//	Parent P, * pP; // 객체 생성
//	Child C(123), * pC; // 객체 생성
//	pP = &P;
//	pC = &C;
//
//	printf("P=%s, pP=%s, *pP=%s\n", // P, pP, *pP 객체 타입을 출력
//		typeid(P).name(), typeid(pP).name(), typeid(*pP).name());
//	printf("C=%s, pC=%s, *pC=%s\n",// C, pC, *pC 객체 타입을 출력
//		typeid(C).name(), typeid(pC).name(), typeid(*pC).name());
//
//	pP = &C;
//	printf("pP=%s, *pP=%s\n", // pP, *pP 객체 타입을 출력
//		typeid(pP).name(), typeid(*pP).name());
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // 클래스 Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // 가상 함수 PrintMe
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // 가상 함수 PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // 출력 메서드
//};
//
//void func(Parent* p) // Parent 파생 객체의 포인터를 전달받는 함수 func
//{
//	p->PrintMe(); // p객체의 PrintMe 함수 호출
//	if (typeid(*p) == typeid(Child)) {
//		((Child*)p)->PrintNum(); // p객체의 타입이 Child이면 Child 클래스의 멤버함수 PrintNum 호출
//	}
//	else {
//		puts("이 객체는 num을 가지고 있지 않습니다."); // 출력
//	}
//}
//
//int main()
//{
//	Parent p; // 객체 생성
//	Child c(5); // 객체 생성
//
//	func(&c); // 함수 호출
//	func(&p); // 함수 호출
//}

//#include <stdio.h>
//#include <string.h>
//
//class Parent // 클래스 Parent
//{
//public:
//	char classname[32]; // 문자열 배열 선언
//	Parent() {
//		strcpy(classname, "Parent"); // 문자열 배열 저장 (멤버변수 초기화)
//	}
//	virtual void PrintMe() { // 가상 함수 PrintMe
//		printf("I am Parent\n"); // 출력
//	}
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) {
//		strcpy(classname, "Child");
//	}
//	virtual void PrintMe() { printf("I am Child\n"); } // 가상 함수 PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // 메서드 선언
//};
//
//void func(Parent* p) // Parent 파생 객체의 포인터를 전달받는 함수 func
//{
//	p->PrintMe(); // p객체의 PrintMe 함수 호출
//	if (strcmp(p->classname, "Child") == 0) {
//		((Child*)p)->PrintNum();  // p객체의 타입이 Child이면 Child 클래스의 멤버함수 PrintNum 호출
//	}
//	else {
//		puts("이 객체는 num을 가지고 있지 않습니다.");
//	}
//}
//
//int main()
//{
//	Parent p; // 객체 생성
//	Child c(5); // 객체 생성
//
//	func(&c); // 함수 호출
//	func(&p); // 함수 호출
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* str = "korea"; // 문자열 포인터 str이 가리키는 번지
//	int* pi; // 정수형 포인터로 강제 캐스팅하여 pi에 대입
//
//	pi = (int*)str; // pi가 가리키는 곳의 내용 읽어옴
//	printf("%d %x\n", *pi, *pi); // 출력
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* str = "korea"; // 문자열 포인터 str이 가리키는 번지
//	int* pi; // 정수형 포인터로 강제 캐스팅하여 pi에 대입
//	double d = 123.456; // double형 변수 선언 및 초기화
//	int i; // int형 변수 i
//
//	i = static_cast<int>(d);				// 가능 (실수형을 정수형으로)
//	pi = static_cast<int*>(str);			// 에러 (포인터 타입 다른것으로)
//	pi = (int*)str;						// 가능 (논리적으로는 X 강제 캐스팅 : 실수로 판단)
//}

//#include <stdio.h>
//
//class Parent { }; // 클래스 Parent
//class Child : public Parent { }; // Parent에서 파생된 클래스 Child
//
//int main()
//{
//	Parent P, * pP; // 객체 및 포인터 선언
//	Child C, * pC; // 객체 및 포인터 선언
//	int i = 1234; // 정수형 변수 i 선언 및 초기화
//
//	pP = static_cast<Parent*>(&C);		// 가능 (상속 계층의 위쪽으로 변환하는 업캐스팅)
//	pC = static_cast<Child*>(&P);		// 가능하지만 위험 (부모 객체의 번지를 자식 타입의 포인터로 바꾸는 다운 캐스팅)
//	pP = static_cast<Parent*>(&i);		// 에러 (금지 : 정수형 포인터를 아무런 관련이 없는 클래스형 포인터로 변환)
//	pC = static_cast<Child*>(&i);		// 에러 (금지 : 정수형 포인터를 아무런 관련이 없는 클래스형 포인터로 변환)
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // 클래스 Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // 가상 함수 PrintMe
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // 가상 함수 PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // 메서드 선언
//};
//
//void func(Parent* p) // Parent 파생 객체의 포인터를 전달받는 함수 func
//{
//	p->PrintMe(); // p객체의 PrintMe 함수 호출
//	Child* c = dynamic_cast<Child*>(p); // 인수로 전달된 포인터 p를 Child *로 동적 캐스팅
//	if (c) {
//		c->PrintNum(); // 제대로 변환 되었으면 함수 호출
//	}
//	else {
//		puts("이 객체는 num을 가지고 있지 않습니다."); // 아닐 경우 출력
//	}
//}
//
//int main()
//{
//	Parent p; // 객체 생성
//	Child c(5); // 객체 생성
//
//	func(&c); // 함수 호출
//	func(&p); // 함수 호출
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "string"; // 문자열 배열 선언 및 초기화
//	const char* c1 = str; // 상수 지시 포인터 c1에 str 문자 배열 대입
//	char* c2; // 문자형 포인터 변수 c2 선언
//
//	c2 = const_cast<char*>(c1); // 포인터의 상수성 변경
//	c2[0] = 'a'; // c2[0] 변경
//	puts(c2); // 출력
//}

//#include <stdio.h>
//
//class MyClass // 클래스 MyClass
//{
//public:
//	int i, j;
//	double d;
//};
//
//int main()
//{
//	MyClass C; // 객체 생성
//	int MyClass::* pi; // int형 멤버 포인터 변수
//	double MyClass::* pd; // double형 멤버 포인터 변수
//	int num;
//
//	pi = &MyClass::i; // pi가 MyClass 클래스의 멤버 변수 i를 가리키게 함
//	pi = &MyClass::j; // pi가 MyClass 클래스의 멤버 변수 j를 가리키게 함
//	pd = &MyClass::d; // pd가 MyClass 클래스의 멤버 변수 d를 가리키게 함
//	//pd=&MyClass::i; // pd가 MyClass 클래스의 멤버 변수 i를 가리키게 함 (타입이 달라서 불가)
//	//pi=&MyClass::d; // pi가 MyClass 클래스의 멤버 변수 d를 가리키게 함 (타입이 달라서 불가)
//	//pi=&num; // pi가 num을 가리키게 함 (num은 MyClass 클래스 멤버 변수가 아닌 main()함수의 지역변수라서 불가)
//}
//}

//#include <stdio.h>
//
//class Time // 클래스 Time
//{
//public:
//	int hour, min, sec;
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec); // 현재 시간 출력
//	}
//};
//
//int main()
//{
//	Time now; // Time형 객체 now 선언
//	int Time::* pi; // Time의 정수형 멤버 변수를 가리키는 pi를 선언
//
//	pi = &Time::hour; // pi가 Time의 hour를 가리키도록 하면 이 멤버의 위치를 기억해둠
//	now.*pi = 12; // now 객체의 hour 값이 바뀜
//	pi = &Time::min; // pi가 Time의 min을 가리키도록 하면 이 멤버의 위치를 기억해둠
//	now.*pi = 34; // now 객체의 min 값이 바뀜
//	pi = &Time::sec; // pi가 Time의 sec를 가리키도록 하면 이 멤버의 위치를 기억해둠
//	now.*pi = 56; // now 객체의 sec 값이 바뀜
//	now.OutTime(); // 메서드 호출
//}

//#include <stdio.h>
//
//class Calc // 클래스 Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // 두 정수형 변수를 더하는 함수
//	void Op2(int a, int b) { printf("%d\n", a - b); } // 두 정수형 변수를 빼는 함수
//	void Op3(int a, int b) { printf("%d\n", a * b); } // 두 정수형 변수를 곱하는 함수
//};
//
//int main()
//{
//	int ch;
//	Calc c; // 객체 생성
//	int a = 3, b = 4;
//
//	printf("연산 방법을 선택하시오. 0=더하기, 1=빼기, 2=곱하기 : "); // 출력
//	scanf("%d", &ch); // 연산 방법 입력받음
//
//	switch (ch) { // 적절한 계산 함수 호출
//	case 0:
//		c.Op1(a, b);
//		break;
//	case 1:
//		c.Op2(a, b);
//		break;
//	case 2:
//		c.Op3(a, b);
//		break;
//	}
//}

//#include <stdio.h>
//
//class Calc // 클래스 Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // 두 정수형 변수를 더하는 함수
//	void Op2(int a, int b) { printf("%d\n", a - b); } // 두 정수형 변수를 빼는 함수
//	void Op3(int a, int b) { printf("%d\n", a * b); } // 두 정수형 변수를 곱하는 함수
//};
//
//int main()
//{
//	int ch;
//	Calc c; // 객체 생성
//	int a = 3, b = 4;
//	void (Calc:: * arop[3])(int, int) = { &Calc::Op1,&Calc::Op2,&Calc::Op3 }; // 사용자가 입력한 연산 종류를 첨자로 하여 arop의 멤버 함수를 선택함
//
//	printf("연산 방법을 선택하시오. 0=더하기, 1=빼기, 2=곱하기 : "); // 출력
//	scanf("%d", &ch); // 연산 방법 입력받음
//
//	if (ch >= 0 && ch <= 2) {
//		(c.*arop[ch])(3, 4); // 멤버 함수 호출
//	}
//}

//#include <stdio.h>
//
//class Calc // 클래스 Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // 두 정수형 변수를 더하는 함수
//	void Op2(int a, int b) { printf("%d\n", a - b); } // 두 정수형 변수를 빼는 함수
//	void Op3(int a, int b) { printf("%d\n", a * b); } // 두 정수형 변수를 곱하는 함수
//	void DoCalc(void (Calc::* fp)(int, int), int a, int b) { // 앞뒤로 메시지 출력 후 Op1,Op2,Op3을 대신 호출하는 래퍼
//		puts("지금부터 연산 결과를 발표하겠습니다.");
//		printf("%d와 %d의 연산 결과 : ", a, b); // 출력
//		(this->*fp)(a, b); // 전달받은 멤버의 함수 호출
//		puts("이상입니다.");
//	}
//};
//
//int main()
//{
//	int ch;
//	Calc c;
//	int a = 3, b = 4;
//	void (Calc:: * arop[3])(int, int) = { &Calc::Op1,&Calc::Op2,&Calc::Op3 }; // 사용자가 입력한 연산 종류를 첨자로 하여 arop의 멤버 함수를 선택함
//
//	printf("연산 방법을 선택하시오. 0=더하기, 1=빼기, 2=곱하기 : "); // 출력
//	scanf("%d", &ch); // 연산 방법 입력받음
//
//	if (ch >= 0 && ch <= 2) {
//		c.DoCalc(arop[ch], a, b); // 메서드 호출
//	}
//}

//#include <stdio.h>
//
//class Parent // 클래스 Parent
//{
//public:
//	int p;
//};
//
//class Child : public Parent // Parent에서 파생된 클래스 Child
//{
//public:
//	int c;
//};
//
//int main()
//{
//	int Parent::*pp; // int형 멤버 포인터 변수 pp선언
//	int Child::*pc; // int형 멤버 포인터 변수 pc선언
//
//	pp = &Parent::p; // pp가 Parent 클래스의 멤버 변수 p를 가리키게 함
//	pc = &Child::c; // pc가 Child 클래스의 멤버 변수 c를 가리키게 함
//
//	pc = &Parent::p; // pc가 Parent 클래스의 멤버 변수 p를 가리키게 함
//	pc = &Child::p; // pc가 Child 클래스의 멤버 변수 p를 가리키게 함
//	//pp = &Child::c; // pp가 Child 클래스의 멤버 변수 c를 가리키게 함
//}

