//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human
//{
//private: // �θ��� ����� private�� ������ ������ �ƹ��� �ڽ��̶� ���� �� ����.
//	char name[12]; // ������ ��� ���� name
//	int age; // ������ ��� ���� age
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age); // �̸��� ���� ���
//	}
//};
//
//class Student : public Human // Human���κ��� �Ļ��� Ŭ���� Student
//{
//private:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum; // Human�� ��� ����� ��ӹ��� �� �й��� �����ϴ� ��� ���� stunum
//	} // �θ�κ��� ��ӹ��� ����� �ڽ��� �ʱ�ȭ�� �� ����. �׷��� ��ӹ��� ����� �ʱ�ȭ�� ���� �ʱ�ȭ ����Ʈ���� �θ��� �����ڸ� ȣ���Ͽ� �θ𿡰� ��Ź�Ѵ�.
//	void study() { // �����ϴ� ���� ǥ��
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29);
//	kim.intro();
//	Student han("���Ѱ�", 15, 123456); // Human���� name, age, intro�� ��ӹ޾� ������. ���� �̸��� ���̸� ����� �� �ִ�.
//	han.intro();
//	han.study();
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//protected: // �ܺο� ���ؼ��� ������� �ڽĿ� ���ؼ��� �׼����� ����� �ʿ䰡 �ִ�. �̷� �� ����ϴ� �߰� �ܰ��� �׼��� �����ڰ� protected�̴�.
//	char name[12]; // ��� ���� name ����
//	int age; // ��� ���� age ����
//
//public: // ���� ����
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { // �̸��� ���� ���
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human���κ��� �Ļ��� Ŭ���� Student
//{
//protected:
//	int stunum; // �й��� �����ϴ� ��� ���� ����
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) { // �θ�κ��� ��ӹ��� name, age�� Human���� �ѱ�
//		stunum = astunum;
//	}
//	void study() { // ���
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//	void report() { // ���� ���� ���, ���� private�̾��ٸ� name ��� �Ұ�
//		printf("�̸� : %s, �й� : %d ���� �����մϴ�.\n", name, stunum);
//	}
//};
//
//int main()
//{
//	Student han("���Ѱ�", 15, 123456); // ��ü ����
//	han.intro(); // �Լ� intro ���
//	han.study(); // �Լ� study ���
//	han.report(); // �Լ� report ���
//}

//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//protected: // protected : �ڽİ� ���� ���� ����
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
//class Student : public Human // Human���κ��� �Ļ��� Ŭ���� Student
//{
//protected: // protected : �ڽİ� ���� ���� ����
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	} // Student�� Human���κ��� ��ӹ޵� ��� ����� �׼��� �Ӽ��� �״�� �����Ѵ�. �׷��� protected �Ӽ��� anme ����� ��� �Ŀ��� ������ protected�̸� Student ��ü�� report �Լ��� name�� �����Ӱ� ���� �� �ִ�.
//	void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//	void intro() {
//		printf("%d�й� %s�Դϴ�.\n", stunum, name);
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29);
//	kim.intro();
//	Student han("���Ѱ�", 15, 123456);
//	han.intro(); // intro�� �������Ѵ� : ��ü�� ���� ���� ȣ��Ǵ� �Լ��� �ٸ���. ���� �θ��� ������ �Լ��� ȣ���ϰ� �ʹٸ� Ŭ������� ���� �����ڸ� ����Ѵ�.
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
//	void intro() { // �̸��� ���� ���
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human // Human���κ��� �Ļ��� Ŭ���� Student
//{
//protected:
//	int stunum; // ���� ����� stunum �߰� (�ڽ�Ŭ���� ���� ����)
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum;
//	} // �̸��� ���̴� Human���� ����
//	void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//};
//
//class Graduate : public Student // Student�κ��� �Ļ��� Ŭ���� Graduate
//{
//protected:
//	char thesis[32]; // ���� ����� thesis �߰�
//
//public: // Student�κ��� �й��� ��ӹ���
//	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum) {
//		strcpy(thesis, athesis);
//	} // �̸�, �й�, ���̴� Student�� ����
//	void research() {
//		printf("%s�� �����ϰ� ���� ����.\n", thesis);
//	}
//};
//
//int main()
//{
//	Graduate moon("������", 45, 920629, "���ӹ� ��� �м�");
//	moon.research(); // �Լ� research ����
//}
//#include<stdio.h>
//#include<string.h>
//
//class Human // Ŭ���� Human ����
//{
//protected: // �ڽİ� ���� ���� ����
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { // �̸��� ���� ���
//		printf("�̸� = %s, ����= %d \n", name, age);
//	}
//};
//
//class Boxer : public Human // Human�κ��� �Ļ��� Ŭ���� Boxer
//{
//protected: // �ڽİ� ���� ���� ����
//	int height; // ������ ���� height
//	int weight; // ������ ���� weight
//
//public:
//	Boxer(const char* aname, int aage, int aheight, int aweight) : Human(aname, aage) {
//		height = aheight;
//		weight = aweight;
//	} // �Է¹��� Ű�� �����Ը� �θ��� Human���� �������ش�.
//	void intro() { // �θ� intro����� ���ҽÿ��� ::�� ����Ѵ�.
//		printf("Ű : %d, ������ %d�� ���� %s�Դϴ�.\n", height, weight, name);
//	}
//	void fight() { // ���� ��� �Լ�
//		puts("����Ʈ, ����Ʈ, µµ\n");
//	}
//};
//
//int main() {
//	Boxer kim("�����", 29, 180, 65);
//	kim.intro();
//	kim.fight(); // fight �Լ� ���
//}

//#include <stdio.h>
//#include <conio.h>
//
//class Date // ��¥�� ���õ� �Ӽ��� �Լ��� �����ϴ� Ŭ���� Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d/%d/%d", year, month, day); } // ���� ��¥ ���
//};
//
//class Time // �ð��� ���õ� ����� ĸ��ȭ�ϴ� Ŭ���� Time
//{
//protected:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() { printf("%d:%d:%d", hour, min, sec); } // ���� �ð� ���
//};
//
//class DateTime : public Date, public Time // ���� ��� : Ŭ���� ���ǹ��� �޸��� �����Ͽ� �θ� Ŭ������ �����ϵ� �� �θ��� �׼��� �����ڴ� ���������� �����Ѵ�.
//{
//private:
//	bool bEngMessage;
//	int milisec;
//public:
//	DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b = false)
//		: Date(y, m, d), Time(h, min, s) {
//		milisec = ms; // ������ �ð��� �����ϱ� ���� milisec ����� �߰��Ѵ�.
//		bEngMessage = b;
//	} // DateTime�� ��¥, �ð��� ���õ� �Ӽ��� ��� ��ӹ����� �ʿ��� ����� �߰��� �����ϴ�.
//	void OutNow() {
//		printf(bEngMessage ? "Now is " : "������ ");
//		OutDate();
//		putch(' ');
//		OutTime();
//		printf(".%d", milisec);
//		puts(bEngMessage ? "." : " �Դϴ�.");
//	}
//};
//
//int main()
//{
//	DateTime now(2017, 6, 29, 12, 30, 58, 99);
//	now.OutNow(); // OutNow �Լ� ȣ��
//}
//#include <stdio.h>
//
//class A // Ŭ���� A
//{
//protected: // �ڽİ� ���� ���� ����
//	int a;
//public:
//	A(int aa) { a = aa; }
//};
//
//class B : public A // Ŭ���� A�� �ڽ��� Ŭ���� B
//{
//protected: // �ڽİ� ���� ���� ����
//	int b;
//public:
//	B(int aa, int ab) : A(aa) { b = ab; }
//};
//
//class C : public A // Ŭ���� A�� �ڽ��� Ŭ���� C
//{
//protected: // �ڽİ� ���� ���� ����
//	int c;
//public:
//	C(int aa, int ac) : A(aa) { c = ac; }
//};
//
//class D : public B, public C // Ŭ���� A�� ������� a : D�� A�� ��� a�� �� �� ��ӹ޴´�.
//{
//protected:
//	int d;
//public:
//	D(int aa, int ab, int ac, int ad) : B(aa, ab), C(aa, ac) { d = ad; }
//	void fD() {
//		b = 1;
//		c = 2;
//		a = 3;		// ���⼭ ���� �߻� : �� �� ��ӹޱ⿡ � a���� �� �� ���� ��ȣ�԰� ������ �߻��Ѵ�.
//	}
//};
//
//int main()
//{
//	D d(1, 2, 3, 4);
//}
//#include <stdio.h>
//
//class A // Ŭ���� A
//{
//protected:
//	int a;
//public:
//	A(int aa) { a = aa; }
//};
//
//class B : virtual public A // Ŭ���� A�� �ڽ��� Ŭ���� B : ���������� �� �� ��ӵǴ��� ����� �� ���� ����ϴ� ���� ��� Ŭ���� virtual ����
//{
//protected:
//	int b;
//public:
//	B(int aa, int ab) : A(aa) { b = ab; }
//};
//
//class C : virtual public A // Ŭ���� A�� �ڽ��� Ŭ���� C : ���������� �� �� ��ӵǴ��� ����� �� ���� ����ϴ� ���� ��� Ŭ���� virtual ����
//{
//protected:
//	int c;
//public:
//	C(int aa, int ac) : A(aa) { c = ac; }
//};
//
//class D : public B, public C // B�� C�� ��ӹ޾� ����� Ŭ���� D
//{
//protected:
//	int d;
//public:
//	D(int aa, int ab, int ac, int ad) : A(aa), B(aa, ab), C(aa, ac) { d = ad; }
//	void fD() {
//		b = 1;
//		c = 2;
//		a = 3;
//	} // ��ȣ�� ����, ���� �߻� X
//}; // ���� ����� ���� ��ӹ��� ����� �ʱ�ȭ�� ���� Ŭ������ ���� ó���Ѵ�.
//
//int main()
//{
//	D d(1, 2, 3, 4);
//}
//#include <stdio.h>
//#include <string.h>
//
//class Date // ��¥�� ǥ���ϴ� Ŭ���� Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d/%d/%d", year, month, day); }
//};
//
//class Product // ��ǰ�� ���� ������ ǥ���ϴ� Ŭ���� Product
//{
//private:
//	char name[64];
//	char company[32];
//	Date validto; // ��ȿ�Ⱓ : Date Ÿ���� validto ����� ����
//	int price;
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("�̸�:%s\n", name);
//		printf("������:%s\n", company);
//		printf("��ȿ�Ⱓ:");
//		validto.OutDate(); // ����� ������ ������ �ʿ� ���� ������ �� ĸ��ȭ�� ���� Date Ŭ������ ��ü �ϳ��� �����ϴ� ���� �� ������
//		puts("");
//		printf("����:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("�����", "���", 2020, 8, 15, 900);
//	shrimp.OutProduct(); // �Լ� ȣ��
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
//class Product : private Date // ���� ����� �ƴ� private ����� ���� Product ���ο����� ����� �� �ְ� �Ѵ�.
//{
//private:
//	char name[64];
//	char company[32];
//	int price;
//public: // Ŭ���� Date�� ���� validto ��� ���� X
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : Date(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() { // ���� ���
//		printf("�̸�:%s\n", name);
//		printf("������:%s\n", company);
//		printf("��ȿ�Ⱓ:");
//		OutDate();
//		puts("");
//		printf("����:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("�����", "���", 2020, 8, 15, 900);
//	shrimp.OutProduct(); // ��� ���
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
//	class Date // �ܺο����� ���� �ʿ�ġ �ʰ� Product Ŭ���� �ȿ����� ���
//	{  // DateŸ���� ��� ���� : Date�� �ܺη� �˷����� ������ Product �ȿ����� ���Ǵ� ���� Ŭ����
//	protected:
//		int year, month, day;
//	public:
//		Date(int y, int m, int d) { year = y; month = m; day = d; }
//		void OutDate() { printf("%d/%d/%d", year, month, day); }
//	};
//	Date validto; // Date Ÿ���� validto ��� ����
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("�̸�:%s\n", name);
//		printf("������:%s\n", company);
//		printf("��ȿ�Ⱓ:");
//		validto.OutDate();
//		puts("");
//		printf("����:%d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("�����", "���", 2020, 8, 15, 900);
//	shrimp.OutProduct();
//
//	// Date now(12, 34, 56);	// ���� : Date Ÿ���� �� �� ���⿡ Date Ÿ���� ��ü ���� �Ұ�
//}
//#include<stdio.h>
//#include<string.h>
//
//class Date // Ŭ���� Date ����
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate(){ printf("%d/%d/%d", year, month, day); }
//};
//
//class Human // Ŭ���� Human ����
//{
//protected:
//	char name[12];
//	int age;
//	Date birth; // Date Ÿ���� ��� birth ����
//
//public:
//	Human(const char* aname, int aage, int y, int m, int d) :birth(y, m, d) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() { //���� ��� : �̸��� ���� ������ birth ��ü�� OutDate �Լ��� ȣ���Ͽ� ���� ���
//		printf("�̸� = %s, ����=%d \n", name, age);
//		printf("���� = ");
//		birth.OutDate();
//		printf("\n");
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29, 1989, 6, 29);
//	kim.intro();//���� ���
//}