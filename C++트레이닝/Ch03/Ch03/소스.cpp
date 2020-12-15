//#include <stdio.h>
//#include <string.h> // strcpy ����� ���� ������ �������
//
//class Human // Ŭ���� Human ����
//{
//private: // ����� ���� ������
//	char name[12];
//	int age;
//
//public: // ���� ���� ������
//	// ������
//	Human(const char* aname, int aage) { // ������ ����
//		strcpy(name, aname); // �̸��� ����
//		age = aage; // ���� ����
//	}
//	void intro() { //
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29); // ������ ȣ��(�����ڰ� ���� �޾� ����� �ʱ�ȭ��)
//	kim.intro(); // �޼��� ȣ��
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
//{
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public: // ���� ���� ������ : �� ���� ������ ����
//	// ������1
//	Time(int h, int m, int s) { // �μ� 3���� ���� ������ 1
//		hour = h; // �Է¹��� �ð��� ������ �����Ѵ�.
//		min = m;
//		sec = s;
//	}
//
//	// ������ 2
//	Time(int abssec) { // �μ� 1���� ���� ������ 2(�μ��� ������ ���� �����ڰ� ������)
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 30, 40); // 3���� �μ��� ���������� ������ 1 ����
//	now.OutTime(); // ��,��,�� ���
//	Time noon(44000); // 1���� �μ��� ���������� ������ 2 ����
//	noon.OutTime(); // ��,��,�� ���
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//private: // ����� ���� ������
//	char* pname; // �����ͺ��� pname ����
//	int age; // ���������� age ����
//
//public: // ���� ���� ������
//	Human(const char* aname, int aage) { // ����� �̸�, ���̸� �Է¹��� �� ��������� �ʱ�ȭ��Ű�� ������ ����
//		pname = new char[strlen(aname) + 1]; // �Է¹��� aname �μ��� ���� ����, �� ���� ���ڸ� ���� 1����Ʈ�� �����Ͽ� ���� �Ҵ�
//		strcpy(pname, aname); // ���ڿ� ����
//		age = aage;
//		printf("%s ��ü�� �����ڰ� ȣ��Ǿ����ϴ�.\n", pname);
//	}
//
//	~Human() { // �޸� ������ ���� �ı��� ����
//		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", pname);
//		delete[] pname; // �޸� ����
//	}
//
//	void intro() // intro �޼��� ����
//	{
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("����ѹ��ź��̿͵η��", 12);
//	boy.intro(); // intro �޼��� ȣ��
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//private: // ����� ���� ������
//	char* pname;
//	int age;
//
//public: // ���� ���� ������
//	Human(const char* aname, int aage) { // ����� �̸�, ���̸� �Է¹��� �� ��������� �ʱ�ȭ��Ű�� ������ ����
//		pname = new char[strlen(aname) + 1]; // �Է¹��� aname �μ��� ���� ����, �� ���� ���ڸ� ���� 1����Ʈ�� �����Ͽ� ���� �Ҵ�
//		strcpy(pname, aname); // ���ڿ� ����
//		age = aage;
//		printf("== <%s> ��ü ���� ==\n", pname);
//	}
//
//	~Human() { // �޸� ������ ���� �ı��� ����
//		printf("== <%s> ��ü�� �ı� ==\n", pname);
//		delete[] pname; // �޸� ����
//	}
//
//	void intro() { // intro �޼��� ����
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("����ѹ��ź��̿͵η��", 12); // ��ü ����
//	boy.intro(); // intro �޼��� ȣ��
//
//	Human* leo; // Human Ŭ������ leo ������ ��ü ����
//	leo = new Human("���������� ��ī������", 40); // ���ο� ���� �Ҵ� �� ����
//	leo->intro(); // ������ Ÿ���̱⿡ leo.intro() �Ұ�
//	delete leo; // leo ��ü �ı�
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//private: // ����� ���� ������
//	char name[12];
//	int age;
//
//public: // ���� ���� ������
//	Human() { // name�� "�̸�����"����, age�� 0���� �ʱ�ȭ
//		strcpy(name, "�̸�����");
//		age = 0;
//	}
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human momo; // momo ��ü ����
//	momo.intro(); // intro �޼��� ����
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
//{
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) { // �ΰ��� �μ��� �Է¹޴� ������
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	// Human momo;			// ���� // �μ��� ���� �����ڸ� �ʿ�� �ϴµ� �� �Լ��� ���� ������ ������ �߻��Ѵ�. Human momo �������� ��ü�� �����ϵ��� �ϰ� �ʹٸ� �ƿ� �����ڸ� �������� ���ƾ� �����Ϸ��� ����Ʈ �����ڸ� �����. �ƴϸ� �ٸ� �����ڿ� �Բ� �μ��� ���� ����Ʈ �����ڵ� �����ؾ��Ѵ�.
//	// Human arFriend[3];		// ���� // ���� ����Ʈ �����ڰ� ���� ������ ������ �߻��Ѵ�. ��ü�� �迭�� ���� �Ϸ��� �⺻������ ��ü�� �����ؾ� �ϹǷ� �μ��� ���� �ʴ� ����Ʈ �����ڰ� �� �ʿ��ϴ�.
//
//	Human arFriend[3] = { 
//		{ Human("������", 49) },
//		{ Human("������", 49) },
//		{ Human("�ڻ�", 49) },
//	};
//
//	arFriend[2].intro(); // 3��° �� ���
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // ������ ���� hour, min, sec ����
//
//public:
//	Time(int h, int m, int s) { // �� ���� �μ��� ������ ������ ����
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // now ��ü ����
//	Time then = now; // then ��ü ����, now�� �ʱ�ȭ
//
//	then.OutTime(); // �޼��� ���� : ���
//}
//#include <stdio.h>
//#include <string.h>
//
//class Human // Ŭ���� Human ����
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
//	~Human() { // �ı��� ����
//		delete[] pname; // �޸� ����
//	}
//
//	void intro() { // �޼��� ����
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human kang("������", 1424); // ��ü kang ����
//	Human boy = kang; // ��ü boy ���� �� kang���� �ʱ�ȭ
//
//	boy.intro(); // ��ü ��� ���� boy�� ����ϴ� �޼��� ȣ��
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
//	Human(const char* aname, int aage) { // ����� �̸�, ���̸� �Է¹��� �� ��������� �ʱ�ȭ��Ű�� ������ ����
//		pname = new char[strlen(aname) + 1]; // �Է¹��� aname �μ��� ���� ����, �� ���� ���ڸ� ���� 1����Ʈ�� �����Ͽ� ���� �Ҵ�
//		strcpy(pname, aname);
//		age = aage;
//	}
//
//	Human(const Human& other) { // ���۷����� �޴� ��������� ����
//		pname = new char[strlen(other.pname) + 1]; // �Է¹��� other.pname �μ��� ���� ����, �� ���� ���ڸ� ���� 1����Ʈ�� �����Ͽ� ���� �Ҵ�
//		strcpy(pname, other.pname);
//		age = other.age;
//	}
//
//	~Human() { // �ı��� ����
//		delete[] pname; // �޸� ����
//	}
//
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//void printHuman(Human who) { // Human Ÿ���� who ��ü�� �μ��� �޴� �Լ� ����
//	who.intro();
//}
//
//int main()
//{
//	Human kang("������", 1424); // ��ü kang ���� �� �ʱ�ȭ
//	Human boy = kang; // ��ü boy ���� �� kang���� �ʱ�ȭ
//
//	printHuman(boy); // ȣ��
//}
//#include <stdio.h>
//
//class Some // Ŭ���� Some ����
//{
//public:
//	const int total; // ������ ��� total. ����� ���� ����� ���ÿ� �ʱ갪�� �־�� ������ Ŭ���� ���� ����� ������ �� �ʱ갪�� �� �� ����.
//	Some(int atotal) : total(atotal) { } // �������� �ʱ�ȭ ����Ʈ���� ���� �ʱ�ȭ
//	void OutTotal() { printf("%d\n", total); } // total �� ��� �޼���
//};
//
//int main()
//{
//	Some S(5); // total�� 5�� �־��ش�
//	S.OutTotal(); // �޼��� ���
//}
//#include <stdio.h>
//
//class Some // Ŭ���� Some ����
//{
//public:
//	int& total; // ������ ���۷��� ����(���۷����� �ٸ� ������ ���� �����̸� �ʱ�ȭ ���Ŀ��� ����� ������ �� ����.)
//	Some(int& atotal) : total(atotal) { }
//	void OutTotal() { printf("%d\n", total); }
//};
//
//int main()
//{
//	int value = 8; // ������ ���� value�� 8 ����
//	Some S(value);
//	S.OutTotal();
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
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
//	Time(int abssec) { // �������� ���� �� �Է�
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//void printTime(Time when)
//{
//	when.OutTime(); // �޼��� ȣ��
//}
//
//int main()
//{
//	Time noon(40000); // �����ڸ� ��������� ȣ��
//	Time now = 60000;
//	now.OutTime();
//	now = 70000; // ���� �߿� ������ �ٷ� �����ص� ��� X
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
//		hour = abssec / 3600; // ������ : �ð�
//		min = (abssec / 60) % 60; // �Ǽ��� : ��
//		sec = abssec % 60; // �� : 0
//	}
//
//	Time(double d) {
//		hour = int(d) % 24;
//		min = int((d - int(d)) * 100) % 60;
//		sec = 0;
//	}
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(3.14); //3�� 14���̶�� Time ��ü
//	now.OutTime();
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
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
//	operator int() { // �����ʸ� ���ϴ� �Լ� ����
//		return hour * 3600 + min * 60 + sec;
//	}
//
//	void OutTime() { // �Է¹��� �ð� ���
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // 12�� 34�� 56�ʷ� �ʱ�ȭ
//	int i = now; // now ��ü�� int() ��ȯ �Լ� ȣ��
//	printf("i = %d\n", i); // ������ ȣ��
//}
//#include <stdio.h>
//
//class Fahrenheit; // Ŭ���� Fahrenheit ���� : ���漱������ Ŭ���� Celsius���� ��ȯ ����
//class Celsius // Ŭ���� Celsius ����
//{
//public:
//	double Tem; // �Ǽ��� ���� ����
//	Celsius() { } // �μ� 0��, �ʱ�ȭ ���� ���� ������
//	Celsius(double aTem) : Tem(aTem) { } // �Ǽ��� Tem �Է°��� ���ڷ� �Ѵ�.
//	operator Fahrenheit();
//	void OutTem() { printf("���� = %f\n", Tem); } // �����µ� ���
//};
//
//class Fahrenheit
//{
//public:
//	double Tem;
//	Fahrenheit() { }
//	Fahrenheit(double aTem) : Tem(aTem) { }
//	operator Celsius();
//	void OutTem() { printf("ȭ�� = %f\n", Tem); } // ȭ���µ� ���
//};
//
//Celsius::operator Fahrenheit() // Ŭ���� ���� ��ȣ ��ȯ
//{
//	Fahrenheit F; // ��ü F ����
//	F.Tem = Tem * 1.8 + 32;
//	return F;
//}
//
//Fahrenheit::operator Celsius() // Ŭ���� ���� ��ȣ ��ȯ
//{
//	Celsius C; // ��ü C ����
//	C.Tem = (Tem - 32) / 1.8;
//	return C;
//}
//
//int main()
//{
//	Celsius C(100); // C ��ü�� �ʱ갪 100
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
//class Circle // Ŭ���� Circle ����
//{
//
//private:
//	int cx, cy; // ������ ���� ����
//	int radius; // ������ ���� ����
//
//public:
//	Circle(int acx, int acy, int aradius) { // 3���� �μ��� ���� ������
//		cx = acx;
//		cy = acy;
//		radius = aradius;
//	}
//	Circle(int left, int top, int right, int bottom) { // 4���� �μ��� ���� ������ 2
//		cx = (left + right) / 2; 
//		cy = (top + bottom) / 2; 
//		radius = right - cx;
//	}
//	void a() {  // radius�ν��Ͻ� ��� �Լ�
//		printf("������ radius : %d\n", radius);
//	}
//};
//
//int main() // �μ��� ������ �´� ������ ���
//{ 
//	Circle c1(20, 20, 10);
//	c1.a();
//	Circle c2(100, 100, 200, 200);
//	c2.a();
//}

//#include<stdio.h>
//
//class Time { // Ŭ���� Time ����
//	private:
//		int hour;
//		int min;
//		int sec;
//
//	public:
//		Time(int h, int m, int s) // 3���� �μ��� ���� ������
//		{
//			hour = h;
//			min = m;
//			sec = s;
//		}
//
//		void OutTime()
//		{
//			printf("���� �ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
//		}
//	};
//
//	int main()
//	{
//		Time* pTime;// ������ ��ü ����
//		pTime = new Time(12, 34, 56); // new �Լ��� �� �Ҵ�
//		pTime->OutTime();
//		delete pTime; // �޸� ����
//	}