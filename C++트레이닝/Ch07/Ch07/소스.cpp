//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human
//{
//protected: // 중간 접근 제한자
//	char name[12]; // 문자형 변수
//	int age; // 정수형 변수
//
//public: //공개 접근 제한자
//	Human(const char* aname, int aage) { // 생성자 선언 및 정의
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age); // 이름과 나이 출력
//	}
//};
//
//class Student : public Human // 클래스 Human의 자식 클래스인 Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() {
//		printf("%d학번 %s입니다.\n", stunum, name); // 학번과 이름 출력
//	}
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n"); // 문장 출력
//	}
//};
//
//int main()
//{
//	Human h("김사람", 10); // Human 객체 h 선언
//	Student s("이학생", 15, 1234567); // Student 객체 s 선언
//	Human* pH; // 포인터 선언
//	Student* pS; // 포인터 선언
//
//	pH = &h;		// 당연히 가능 : 양변의 타입 일치
//	pS = &s;		// 당연히 가능 : 양변의 타입 일치
//	pH = &s;		// 가능 : 양변의 타입이 일치하지 않지만 컴파일도 가능하고 아무 문제가 없음(Human의 모든 멤버가 s에도 존재함)
//	//pS = &h;		// 에러 : 모든 사람이 다 학생은 아니므로 학생이 하는 행동 중 일부는 사람이 할 수 없음.
//
//	pS = (Student*)&h; // h의 번지를 Student*로 바꾸어 pS에 대입
//	pS->intro(); // pS가 Student타입의 포인터이기 때문에 Student::intro가 호출됨. stunum 멤버를 읽는데 h에는 이 멤버가 존재하지 않으므로 엉뚱한 번지의 오프셋을 읽어 쓰레기값 출력
//}
////#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human
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
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human의 자식 클래스 Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() {
//		printf("%d학번 %s입니다.\n", stunum, name); // 학번과 이름 출력
//	}
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n"); // 문장 출력
//	}
//};
//
//int main()
//{
//	Human h("김사람", 10);
//	Student s("이학생", 15, 1234567);
//	Human* pH; // Human 타입의 포인터 pH
//
//
//	pH = &h; // Human 객체를 가리키는 포인터 pH : 정적 타입과 동적 타입이 모두 같아 Human::intro()를 호출
//	pH->intro(); // pH로 intro 호출
//	pH = &s; // Student 객체를 가리키는 포인터 pH : 정적 타입을 따를지, 동적 타입을 따를지 결정해야함
//	pH->intro(); // pH로 intro 호출
//
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human
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
//	void intro() { // virtual 키워드 : 포인터가 가리키는 타입에 따라 호출할 함수를 결정하려면 멤버 함수 앞에 virtual 키워드를 붙여 가상으로 선언함
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() {
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//	virtual void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//void IntroSomeBody(Human* pH) {
//	pH->intro(); // intro 함수를 가상으로 선언했으므로 이 함수를 호출할 때는 포인터의 동적 타입을 따른다.
//	// 다형성 : pH로 어떤 객체를 넘기는가에 따라 호출될 함수가 결정되어 실제 동작이 달라진다.
//}
//
//int main()
//{
//	Human h("김사람", 10); // Human 객체 h를 pH로 넘기면 Human::intro()가 호출됨
//	Student s("이학생", 15, 1234567); // Student 객체 s를 pH로 넘기면 Student::intro()가 호출됨
//
//	IntroSomeBody(&h);
//	IntroSomeBody(&s);
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // 클래스 Human
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
//	void eat() {
//		puts("냠냠냠"); // 문장 출력
//	}
//	virtual void intro() { // 가상 함수 선언
//		printf("이름 = %s, 나이 = %d\n", name, age); // 이름과 나이 출력
//	}
//};
//
//class Student : public Human // Human의 자식 클래스 Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() { // Human과 Student의 동작이 달라 재정의
//		printf("%d학번 %s입니다.\n", stunum, name); // 학번과 이름 출력
//	}
//};
//
//int main()
//{
//	Human h("김사람", 10);
//	Student s("이학생", 15, 1234567);
//	Human* pH;
//
//	pH = &h;
//	pH->intro(); // Human::intro() 호출
//	pH->eat();
//	pH = &s;
//	pH->intro(); // Student::intro() 호출
//	pH->eat();
//}
//#include <stdio.h>
//
//class Shape // 클래스 Shape
//{
//public:
//	void draw() { puts("도형 오브젝트입니다."); } // 문장 출력
//};
//
//class Line : public Shape // Shape로부터 파생된 도형 클래스
//{
//public:
//	void draw() { puts("선을 긋습니다."); } // 문장 출력
//};
//
//class Circle : public Shape // Shape로부터 파생된 도형 클래스
//{
//public:
//	void draw() { puts("동그라미 그렸다 치고."); } // 문장 출력
//};
//
//class Rect : public Shape // Shape로부터 파생된 도형 클래스
//{
//public:
//	void draw() { puts("요건 사각형입니다."); } // 문장 출력
//};
//
//int main()
//{
//	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() }; // Shape포인터를 저장하는 ar 배열 선언, 다섯 개의 객체 생성
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		ar[i]->draw(); // ar 배열의 정적 타입이 Shape* 이기에 배열 요소로부터 호출되는 함수는 항상 Shape::draw()이다.
//	}
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		delete ar[i]; // 메모리할당 해제
//	}
//}
//#include <stdio.h>
//
//class Shape
//{
//public:
//	virtual void draw() { puts("도형 오브젝트입니다."); } // draw를 가상으로 선언 : 파생 클래스의 함수도 자동으로 가상이 됨. 호출 객체의 타입에 따라 동적으로 결합되므로 각 도형에 맞는 draw 함수가 호출됨
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("선을 긋습니다."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("동그라미 그렸다 치고."); }
//};
//
//class Rect : public Shape
//{
//public:
//	void draw() { puts("요건 사각형입니다."); }
//};
//
//int main()
//{
//	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() };
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		ar[i]->draw(); // ar[i]에 대한 draw만 호출하면 가상 함수가 동적 결합되어 객체 타입에 맞는 정확한 함수를 선택함
//	}
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		delete ar[i];
//	}
//}
//#include <stdio.h>
//
//class Shape
//{
//public:
//	virtual void draw() { puts("도형 오브젝트입니다."); }
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("선을 긋습니다."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("동그라미 그렸다 치고."); }
//};
//
//class Rect : public Shape
//{
//public:
//	void draw() { puts("요건 사각형입니다."); }
//};
//
//class Triangle : public Shape
//{
//public:
//	void draw() { puts("나는 새로 추가된 삼각형이다."); }
//};
//
//int main()
//{
//	Shape* ar[] = { new Triangle(), new Rect(), new Circle() }; // new Triangle() 요소를 추가함 : ar[i] 수정 없이도 코드가 동작, 관리의 유연성이 극적으로 향상됨
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		ar[i]->draw();
//	}
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		delete ar[i];
//	}
//}
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include "cursor.h" // gotoxy함수를 사용하기 위한 헤더파일
//
//class Point // 화면상의 한 점을 표현하는 클래스 Point
//{
//protected:
	//int x, y; // 멤버변수 : 점의 좌표 표현
	//char ch; // 멤버변수 : 점을 그릴 문자
//
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	void show() {
//		gotoxy(x, y); putch(ch); // 화면에 자신을 보임
//	}
//	void hide() {
//		gotoxy(x, y); putch(' '); // 화면에 자신을 숨김
//	}
//	void move(int nx, int ny) { // 현재 좌표의 점을 숨기고 새 좌표로 이동한 후 다시 보임으로써 점의 좌표를 바꿈
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point // Point로부터 파생된 원을 표현하는 클래스 Circle
//{
//protected:
//	int radius; // 원을 표현하기 위한 반지름 멤버를 추가로 가짐
//
//public:
//	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
//	void show() { // show 함수의 재정의
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(ch);
//		}
//	}
//	void hide() { // hide 함수의 재정의
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(' ');
//		}
//	}
//};
//
//int main()
//{
//	Point p(1, 1, 'P');
//	Circle c(20, 10, 'C', 12);
//
//	p.show();
//	c.show();
//
//	getch();
//	p.move(40, 1);
//	getch();
//	c.move(40, 10);
//	getch();
//}
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include "cursor.h" // gotoxy함수를 사용하기 위한 헤더파일
//
//class Point // 화면상의 한 점을 표현하는 클래스 Point
//{
//protected:
//	int x, y; // 멤버변수 : 점의 좌표 표현
//	char ch; // 멤버변수 : 점을 그릴 문자
//
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	virtual void show() { // show와 hide를 가상으로 선언 : move 함수에서 호출하는 show, hide가 동적으로 결합되어 점으로부터 호출할 때, 원으로부터 호출할 때의 실제 동작이 다형적으로 결정됨
//		gotoxy(x, y); putch(ch); // 화면에 자신을 보임
//	}
//	virtual void hide() {
//		gotoxy(x, y); putch(' '); // 화면에 자신을 숨김
//	}
//	void move(int nx, int ny) { // 현재 좌표의 점을 숨기고 새 좌표로 이동한 후 다시 보임으로써 점의 좌표를 바꿈
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point // Point로부터 파생된 원을 표현하는 클래스 Circle
//{
//protected:
//	int radius;  // 원을 표현하기 위한 반지름 멤버를 추가로 가짐
//
//public:
//	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
//	void show() { // show 함수의 재정의
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(ch);
//		}
//	}
//	void hide() { // hide 함수의 재정의
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(' ');
//		}
//	}
//};
//
//int main()
//{
//	Point p(1, 1, 'P');
//	Circle c(20, 10, 'C', 12);
//
//	p.show();
//	c.show();
//
//	getch();
//	p.move(40, 1);
//	getch();
//	c.move(40, 10);
//	getch();
//}
//#include <stdio.h>
//
//class Base // 클래스 Base
//{
//private:
//	char* B_buf;
//public:
//	Base() { B_buf = new char[10]; puts("Base 생성"); } // 생성자 : 문자 배열 생성
//	~Base() { delete[] B_buf; puts("Base 파괴"); } // 파괴자 : 해제
//};
//
//class Derived : public Base // Base로부터 파생된 클래스
//{
//private:
//	int* D_buf;
//public:
//	Derived() { D_buf = new int[32]; puts("Derived 생성"); } // 생성자 : 정수 배열 생성
//	~Derived() { delete[] D_buf; puts("Derived 파괴"); } // 파괴자 : 해제
//};
//
//int main()
//{
//	Derived d; // Derived타입의 객체 d 실행
//}
//#include <stdio.h>
//
//class Base
//{
//private:
//	char* B_buf;
//public:
//	Base() { B_buf = new char[10]; puts("Base 생성"); }
//	virtual ~Base() { delete[] B_buf; puts("Base 파괴"); } // 파괴자는 항상 가상으로 선언해야 한다.
//};
//
//class Derived : public Base
//{
//private:
//	int* D_buf;
//public:
//	Derived() { D_buf = new int[32]; puts("Derived 생성"); }
//	virtual ~Derived() { delete[] D_buf; puts("Derived 파괴"); } // 파괴자는 항상 가상으로 선언해야 한다.
//};
//
//int main()
//{
//	Base* pB; // Base 타입의 포인터
//
//	pB = new Derived; // Derived 타입의 객체 생성, 대입
//	delete pB; // 메모리 할당 해제
//}
//#include <stdio.h>
//
//class Shape // 클래스 Shape : 일반적인 도형을 정의할 뿐 실제로 화면에 자신을 그릴 수 있는 구체적인 도형은 아님
//{
//public:
//	virtual void draw() = 0; // 순수 가상 함수 : 부모 클래스가 동작을 아예 정의하지 않아 파생 클래스에서 반드시 재정의해야함. 부모 클래스가 너무 일반적이어서 동ㅈ가을 정의할 수 없을 때 함수의 본체를 생략하고 대신 선언부의 끝에 =0를 붙여 본체가 없음을 표시함
//};
//
//class Line : public Shape // Shape로부터 파생된 클래스
//{
//public:
//	virtual void draw() { puts("선을 긋습니다."); } // 문장 출력
//};
//
//class Circle : public Shape // Shape로부터 파생된 클래스
//{
//public:
//	virtual void draw() { puts("동그라미 그렸다 치고."); } // 문장 출력
//};
//
//class Rect : public Shape // Shape로부터 파생된 클래스
//{
//public:
//	virtual void draw() { puts("요건 사각형입니다."); } // 문장 출력
//};
//
//int main()
//{
//	Shape* pS[3]; // Shape 타입의 포인터 저장 배열 선언
//
//	 Shape s;
//	pS[0] = new Line; // 객체 초기화
//	pS[1] = new Circle; // 객체 초기화
//	pS[2] = new Rect; // 객체 초기화
//
//	for (int i = 0; i < 3; i++) {
//		pS[i]->draw(); // 각 개체의 draw함수 호출
//	}
//
//	for (int i = 0; i < 3; i++) {
//		delete pS[i]; // 메모리 할당 해제
//	}
//}
