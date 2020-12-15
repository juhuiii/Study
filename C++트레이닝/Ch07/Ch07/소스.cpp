//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human
//{
//protected: // �߰� ���� ������
//	char name[12]; // ������ ����
//	int age; // ������ ����
//
//public: //���� ���� ������
//	Human(const char* aname, int aage) { // ������ ���� �� ����
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age); // �̸��� ���� ���
//	}
//};
//
//class Student : public Human // Ŭ���� Human�� �ڽ� Ŭ������ Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() {
//		printf("%d�й� %s�Դϴ�.\n", stunum, name); // �й��� �̸� ���
//	}
//	void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n"); // ���� ���
//	}
//};
//
//int main()
//{
//	Human h("����", 10); // Human ��ü h ����
//	Student s("���л�", 15, 1234567); // Student ��ü s ����
//	Human* pH; // ������ ����
//	Student* pS; // ������ ����
//
//	pH = &h;		// �翬�� ���� : �纯�� Ÿ�� ��ġ
//	pS = &s;		// �翬�� ���� : �纯�� Ÿ�� ��ġ
//	pH = &s;		// ���� : �纯�� Ÿ���� ��ġ���� ������ �����ϵ� �����ϰ� �ƹ� ������ ����(Human�� ��� ����� s���� ������)
//	//pS = &h;		// ���� : ��� ����� �� �л��� �ƴϹǷ� �л��� �ϴ� �ൿ �� �Ϻδ� ����� �� �� ����.
//
//	pS = (Student*)&h; // h�� ������ Student*�� �ٲپ� pS�� ����
//	pS->intro(); // pS�� StudentŸ���� �������̱� ������ Student::intro�� ȣ���. stunum ����� �дµ� h���� �� ����� �������� �����Ƿ� ������ ������ �������� �о� �����Ⱚ ���
//}
////#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human
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
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human�� �ڽ� Ŭ���� Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() {
//		printf("%d�й� %s�Դϴ�.\n", stunum, name); // �й��� �̸� ���
//	}
//	void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n"); // ���� ���
//	}
//};
//
//int main()
//{
//	Human h("����", 10);
//	Student s("���л�", 15, 1234567);
//	Human* pH; // Human Ÿ���� ������ pH
//
//
//	pH = &h; // Human ��ü�� ����Ű�� ������ pH : ���� Ÿ�԰� ���� Ÿ���� ��� ���� Human::intro()�� ȣ��
//	pH->intro(); // pH�� intro ȣ��
//	pH = &s; // Student ��ü�� ����Ű�� ������ pH : ���� Ÿ���� ������, ���� Ÿ���� ������ �����ؾ���
//	pH->intro(); // pH�� intro ȣ��
//
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human
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
//	void intro() { // virtual Ű���� : �����Ͱ� ����Ű�� Ÿ�Կ� ���� ȣ���� �Լ��� �����Ϸ��� ��� �Լ� �տ� virtual Ű���带 �ٿ� �������� ������
//		printf("�̸� = %s, ���� = %d\n", name, age);
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
//		printf("%d�й� %s�Դϴ�.\n", stunum, name);
//	}
//	virtual void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//};
//
//void IntroSomeBody(Human* pH) {
//	pH->intro(); // intro �Լ��� �������� ���������Ƿ� �� �Լ��� ȣ���� ���� �������� ���� Ÿ���� ������.
//	// ������ : pH�� � ��ü�� �ѱ�°��� ���� ȣ��� �Լ��� �����Ǿ� ���� ������ �޶�����.
//}
//
//int main()
//{
//	Human h("����", 10); // Human ��ü h�� pH�� �ѱ�� Human::intro()�� ȣ���
//	Student s("���л�", 15, 1234567); // Student ��ü s�� pH�� �ѱ�� Student::intro()�� ȣ���
//
//	IntroSomeBody(&h);
//	IntroSomeBody(&s);
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human
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
//		puts("�ȳȳ�"); // ���� ���
//	}
//	virtual void intro() { // ���� �Լ� ����
//		printf("�̸� = %s, ���� = %d\n", name, age); // �̸��� ���� ���
//	}
//};
//
//class Student : public Human // Human�� �ڽ� Ŭ���� Student
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	}
//	void intro() { // Human�� Student�� ������ �޶� ������
//		printf("%d�й� %s�Դϴ�.\n", stunum, name); // �й��� �̸� ���
//	}
//};
//
//int main()
//{
//	Human h("����", 10);
//	Student s("���л�", 15, 1234567);
//	Human* pH;
//
//	pH = &h;
//	pH->intro(); // Human::intro() ȣ��
//	pH->eat();
//	pH = &s;
//	pH->intro(); // Student::intro() ȣ��
//	pH->eat();
//}
//#include <stdio.h>
//
//class Shape // Ŭ���� Shape
//{
//public:
//	void draw() { puts("���� ������Ʈ�Դϴ�."); } // ���� ���
//};
//
//class Line : public Shape // Shape�κ��� �Ļ��� ���� Ŭ����
//{
//public:
//	void draw() { puts("���� �߽��ϴ�."); } // ���� ���
//};
//
//class Circle : public Shape // Shape�κ��� �Ļ��� ���� Ŭ����
//{
//public:
//	void draw() { puts("���׶�� �׷ȴ� ġ��."); } // ���� ���
//};
//
//class Rect : public Shape // Shape�κ��� �Ļ��� ���� Ŭ����
//{
//public:
//	void draw() { puts("��� �簢���Դϴ�."); } // ���� ���
//};
//
//int main()
//{
//	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() }; // Shape�����͸� �����ϴ� ar �迭 ����, �ټ� ���� ��ü ����
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		ar[i]->draw(); // ar �迭�� ���� Ÿ���� Shape* �̱⿡ �迭 ��ҷκ��� ȣ��Ǵ� �Լ��� �׻� Shape::draw()�̴�.
//	}
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		delete ar[i]; // �޸��Ҵ� ����
//	}
//}
//#include <stdio.h>
//
//class Shape
//{
//public:
//	virtual void draw() { puts("���� ������Ʈ�Դϴ�."); } // draw�� �������� ���� : �Ļ� Ŭ������ �Լ��� �ڵ����� ������ ��. ȣ�� ��ü�� Ÿ�Կ� ���� �������� ���յǹǷ� �� ������ �´� draw �Լ��� ȣ���
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("���� �߽��ϴ�."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("���׶�� �׷ȴ� ġ��."); }
//};
//
//class Rect : public Shape
//{
//public:
//	void draw() { puts("��� �簢���Դϴ�."); }
//};
//
//int main()
//{
//	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() };
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		ar[i]->draw(); // ar[i]�� ���� draw�� ȣ���ϸ� ���� �Լ��� ���� ���յǾ� ��ü Ÿ�Կ� �´� ��Ȯ�� �Լ��� ������
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
//	virtual void draw() { puts("���� ������Ʈ�Դϴ�."); }
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("���� �߽��ϴ�."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("���׶�� �׷ȴ� ġ��."); }
//};
//
//class Rect : public Shape
//{
//public:
//	void draw() { puts("��� �簢���Դϴ�."); }
//};
//
//class Triangle : public Shape
//{
//public:
//	void draw() { puts("���� ���� �߰��� �ﰢ���̴�."); }
//};
//
//int main()
//{
//	Shape* ar[] = { new Triangle(), new Rect(), new Circle() }; // new Triangle() ��Ҹ� �߰��� : ar[i] ���� ���̵� �ڵ尡 ����, ������ �������� �������� ����
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
//#include "cursor.h" // gotoxy�Լ��� ����ϱ� ���� �������
//
//class Point // ȭ����� �� ���� ǥ���ϴ� Ŭ���� Point
//{
//protected:
	//int x, y; // ������� : ���� ��ǥ ǥ��
	//char ch; // ������� : ���� �׸� ����
//
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	void show() {
//		gotoxy(x, y); putch(ch); // ȭ�鿡 �ڽ��� ����
//	}
//	void hide() {
//		gotoxy(x, y); putch(' '); // ȭ�鿡 �ڽ��� ����
//	}
//	void move(int nx, int ny) { // ���� ��ǥ�� ���� ����� �� ��ǥ�� �̵��� �� �ٽ� �������ν� ���� ��ǥ�� �ٲ�
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point // Point�κ��� �Ļ��� ���� ǥ���ϴ� Ŭ���� Circle
//{
//protected:
//	int radius; // ���� ǥ���ϱ� ���� ������ ����� �߰��� ����
//
//public:
//	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
//	void show() { // show �Լ��� ������
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(ch);
//		}
//	}
//	void hide() { // hide �Լ��� ������
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
//#include "cursor.h" // gotoxy�Լ��� ����ϱ� ���� �������
//
//class Point // ȭ����� �� ���� ǥ���ϴ� Ŭ���� Point
//{
//protected:
//	int x, y; // ������� : ���� ��ǥ ǥ��
//	char ch; // ������� : ���� �׸� ����
//
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	virtual void show() { // show�� hide�� �������� ���� : move �Լ����� ȣ���ϴ� show, hide�� �������� ���յǾ� �����κ��� ȣ���� ��, �����κ��� ȣ���� ���� ���� ������ ���������� ������
//		gotoxy(x, y); putch(ch); // ȭ�鿡 �ڽ��� ����
//	}
//	virtual void hide() {
//		gotoxy(x, y); putch(' '); // ȭ�鿡 �ڽ��� ����
//	}
//	void move(int nx, int ny) { // ���� ��ǥ�� ���� ����� �� ��ǥ�� �̵��� �� �ٽ� �������ν� ���� ��ǥ�� �ٲ�
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point // Point�κ��� �Ļ��� ���� ǥ���ϴ� Ŭ���� Circle
//{
//protected:
//	int radius;  // ���� ǥ���ϱ� ���� ������ ����� �߰��� ����
//
//public:
//	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
//	void show() { // show �Լ��� ������
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			putch(ch);
//		}
//	}
//	void hide() { // hide �Լ��� ������
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
//class Base // Ŭ���� Base
//{
//private:
//	char* B_buf;
//public:
//	Base() { B_buf = new char[10]; puts("Base ����"); } // ������ : ���� �迭 ����
//	~Base() { delete[] B_buf; puts("Base �ı�"); } // �ı��� : ����
//};
//
//class Derived : public Base // Base�κ��� �Ļ��� Ŭ����
//{
//private:
//	int* D_buf;
//public:
//	Derived() { D_buf = new int[32]; puts("Derived ����"); } // ������ : ���� �迭 ����
//	~Derived() { delete[] D_buf; puts("Derived �ı�"); } // �ı��� : ����
//};
//
//int main()
//{
//	Derived d; // DerivedŸ���� ��ü d ����
//}
//#include <stdio.h>
//
//class Base
//{
//private:
//	char* B_buf;
//public:
//	Base() { B_buf = new char[10]; puts("Base ����"); }
//	virtual ~Base() { delete[] B_buf; puts("Base �ı�"); } // �ı��ڴ� �׻� �������� �����ؾ� �Ѵ�.
//};
//
//class Derived : public Base
//{
//private:
//	int* D_buf;
//public:
//	Derived() { D_buf = new int[32]; puts("Derived ����"); }
//	virtual ~Derived() { delete[] D_buf; puts("Derived �ı�"); } // �ı��ڴ� �׻� �������� �����ؾ� �Ѵ�.
//};
//
//int main()
//{
//	Base* pB; // Base Ÿ���� ������
//
//	pB = new Derived; // Derived Ÿ���� ��ü ����, ����
//	delete pB; // �޸� �Ҵ� ����
//}
//#include <stdio.h>
//
//class Shape // Ŭ���� Shape : �Ϲ����� ������ ������ �� ������ ȭ�鿡 �ڽ��� �׸� �� �ִ� ��ü���� ������ �ƴ�
//{
//public:
//	virtual void draw() = 0; // ���� ���� �Լ� : �θ� Ŭ������ ������ �ƿ� �������� �ʾ� �Ļ� Ŭ�������� �ݵ�� �������ؾ���. �θ� Ŭ������ �ʹ� �Ϲ����̾ �������� ������ �� ���� �� �Լ��� ��ü�� �����ϰ� ��� ������� ���� =0�� �ٿ� ��ü�� ������ ǥ����
//};
//
//class Line : public Shape // Shape�κ��� �Ļ��� Ŭ����
//{
//public:
//	virtual void draw() { puts("���� �߽��ϴ�."); } // ���� ���
//};
//
//class Circle : public Shape // Shape�κ��� �Ļ��� Ŭ����
//{
//public:
//	virtual void draw() { puts("���׶�� �׷ȴ� ġ��."); } // ���� ���
//};
//
//class Rect : public Shape // Shape�κ��� �Ļ��� Ŭ����
//{
//public:
//	virtual void draw() { puts("��� �簢���Դϴ�."); } // ���� ���
//};
//
//int main()
//{
//	Shape* pS[3]; // Shape Ÿ���� ������ ���� �迭 ����
//
//	 Shape s;
//	pS[0] = new Line; // ��ü �ʱ�ȭ
//	pS[1] = new Circle; // ��ü �ʱ�ȭ
//	pS[2] = new Rect; // ��ü �ʱ�ȭ
//
//	for (int i = 0; i < 3; i++) {
//		pS[i]->draw(); // �� ��ü�� draw�Լ� ȣ��
//	}
//
//	for (int i = 0; i < 3; i++) {
//		delete pS[i]; // �޸� �Ҵ� ����
//	}
//}
