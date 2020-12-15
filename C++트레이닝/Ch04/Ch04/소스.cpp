//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
//{
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public: // ���� ���� ������
//	Time(int h, int m, int s) { // �μ� 3���� ���� ������
//		SetHour(h); // Hour ����� ���� �׼���(����� �� ����) : ������ �����ϴ� ���� �ƴ϶� ���ǿ� �´� ���� �޾Ƶ鿩 ��ü ���¸� ��ȿ�ϰ� ������
//		SetMinute(m); // Minute ����� ���� �׼���(����� �� ����)
//		sec = s; // ������� sec�� �ð� ����
//	}
//
//	int GetHour() { return hour; } // Hour ����� ���� �׼���(������� �о���)
//	void SetHour(int h) { // 0�̻� 24�̸��� �ð��� ��ȿ�� ������ ����
//		if (h >= 0 && h < 24) {
//			hour = h; // ������� hour�� �ð� ����
//		}
//	}
//
//	int GetMinute() { return min; } // min ����� ���� �׼���
//	void SetMinute(int m) { // 0�̻� 60�̸��� �ð��� ��ȿ�� ������ ����
//		if (m >= 0 && m < 60) {
//			min = m; // ������� min�� �ð� ����
//		}
//	}
//	int GetSecond() { return sec; } // sec ����� ���� �׼���
//
//	void OutTime() { // �ð� ��� �޼���
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56); // Ŭ���� ���� now ���� �� �� �Է�
//	now.SetHour(40); // hour�� 40 ����
//	now.OutTime(); // �ð� ���
//	now.SetHour(9); // hour�� 9 ����
//	now.OutTime(); // �ð� ���
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include "cursor.h""
//
//class Car
//{
//private: // dhlqndptj wlrwjq whwkr ��
//	int gear; // ������ ���� gear
//	int angle; // ������ ���� angle
//	int rpm; // ������ ���� rpm
//
//public:
//	Car() { gear = 0; angle = 0; rpm = 0; }
//	void ChangeGear(int aGear) { // �� �ٲٴ� �Լ�
//		if (aGear >= 0 && aGear <= 6) { // 0-6�ܱ����� ����
//			gear = aGear;
//		}
//	}
//
//	void RotateWheel(int Delta) { // �չ����� ������ �¿�� 45�������� ���� ����
//		int tAngle = angle + Delta;
//		if (tAngle >= -45 && tAngle <= 45) {
//			angle = tAngle;
//		}
//	}
//
//	void Accel() { // rpm ����
//		rpm = min(rpm + 100, 3000);
//	}
//
//	void Break() { // rpm ����
//		rpm = max(rpm - 500, 0);
//	}
//
//	void Run() { // ������ �����Ͽ� �ڵ����� ����
//		int Speed;
//		char Mes[128];
//		gotoxy(10, 13);
//		if (gear == 0) { // �� �߸��̸� �޸��� ���� ���� �޽��� ���, ����
//			puts("���� 1~6Ű�� ���� �� �����ÿ�           ");
//			return;
//		}
//		if (gear == 6) {
//			Speed = rpm / 100;
//		}
//		else {
//			Speed = gear * rpm / 100;
//		}
//
//		sprintf(Mes, "%d�� �ӵ��� %s�� %d�� �������� %s����      ",
//			abs(Speed), (angle >= 0 ? "����" : "��"), abs(angle),
//			(gear == 6 ? "��" : "��"));
//		puts(Mes);
//	}
//};

//int main()
//{
//	Car C; // ��ü Car ���� : Ű �Է��� �޾� ������ �Լ��� ���� �ڵ����� ����
//	int ch;
//
//	for (;;) {
//		gotoxy(10, 10);
//		printf("1~5:��� ����, 6:���� ���, 0:��� �߸�");
//		gotoxy(10, 11);
//		printf("��:�׼�, �Ʒ�:�극��ũ, �¿�:�ڵ�, Q:����");
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
//class Time // Ŭ���� Time ����(�ð��� ǥ��)
//{
//	friend void OutToday(Date&, Time&); // friend�� ����(Ŭ������ ��� ����� �����Ӱ� �׼����� �� ����)
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//public: // ���� ���� ������
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; } // �μ� �� ���� ���� ������
//};
//
//class Date // Ŭ���� Date ����(��¥�� ǥ��)
//{
//	friend void OutToday(Date&, Time&); // friend�� ����(Ŭ������ ��� ����� �����Ӱ� �׼����� �� ����)
//private: // ����� ���� ������
//	int year, month, day; // ������ ���� year,month,day ����
//public: // ���� ���� ������
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // �μ� �� ���� ���� ������
//};
//
//void OutToday(Date& d, Time& t) // ��¥�� �ð� ��� �޼���(OutToday �Լ��� Time�� Date�� ������� ����, �ܺ� �Լ������� ��� �Լ�ó�� ������ ��� ����� ���� �� ����)
//{
//	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",
//		d.year, d.month, d.day, t.hour, t.min, t.sec); // ��¥�� �ð� ���
//}
//
//int main()
//{
//	Date d(2018, 06, 29); // Ŭ���� ��� d ���� �� �ʱ�ȭ
//	Time t(12, 34, 56); // Ŭ���� ��� t ���� �� �ʱ�ȭ
//	OutToday(d, t); // ��¥�� �ð� ���
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
//{
//	friend class Date; // Date�� Time�� ������� ����
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//public: // ���� ���� ������
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; } // �μ� �� ���� ���� ������
//};
//
//class Date // Ŭ���� Date ����
//{
//private: // ����� ���� ������
//	int year, month, day; // ������ ���� year,month,day ����
//public: // ���� ���� ������
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // �μ� �� ���� ���� ������
//	void OutToday(Time& t) { // ��¥�� �ð� ��� �޼���
//		printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",
//			year, month, day, t.hour, t.min, t.sec); // ��¥�� �ð� ���
//	}
//};
//
//int main()
//{
//	Date d(2018, 06, 29); // Ŭ���� ��� d ���� �� �ʱ�ȭ
//	Time t(12, 34, 56); // Ŭ���� ��� t ���� �� �ʱ�ȭ
//	d.OutToday(t); // ��¥�� �ð� ���
//}
//#include <stdio.h>
//
//class Time; // Ŭ���� Time ����(Date::OutToday�� Time ��ü�� �μ��� �������� Time Ŭ������ ���� ����Ǿ�� ��)
//class Date // Ŭ���� Date ����
//{
//private: // ����� ���� ������
//	int year, month, day; // ������ ���� year,month,day ����
//public: // ���� ���� ������
//	Date(int y, int m, int d) { year = y; month = m; day = d; } // �μ� �� ���� ���� ������
//	void OutToday(Time& t); // ��¥�� �ð� ��� �޼���
//};
//
//class Time
//{
//	friend void Date::OutToday(Time& t); // Date Ŭ������ OutToday ����Լ��� Time�� ��� ����� ���� �� �ִ� ������ ������.
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//};
//
//void Date::OutToday(Time& t)
//{
//	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",
//		year, month, day, t.hour, t.min, t.sec); // ��¥�� �ð� ���
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
//class Simple // Ŭ���� Simple ����
//{
//private:
//	int value; // ������ ���� value ����
//
//public:
//	Simple(int avalue) : value(avalue) { }
//	void OutValue() { // value �� ���(������ �μ��� ���� ����)
//		printf("value = %d\n", value);
//	}
//};
//
//int main()
//{
//	Simple A(1), B(2); // �� ��ü ����
//	A.OutValue(); // 1 ���
//	B.OutValue(); // 2 ���
//}
//#include <stdio.h>
//
//int count = 0; // ������ ���� count ���� �� �ʱ�ȭ
//class Simple // Ŭ���� Simple ����
//{
//private:
//	int value; // ������ ���� value ����
//
//public:
//	Simple() { count++; } /// �����ڿ��� 1 ���� : �������� ����� ��ü�� �������� �����Ǵ� ��ü�� �����ڿ� �ı��ڴ� ��Ȯ�ϰ� ȣ��ȴ�.
//	~Simple() { count--; } // �ı��ڿ��� 1 ���� : ��ü�� ������ �� �����ϰ� �ı��� �� �����ϹǷ� count�� ���� ������ ��ü�� ���� �� �� ����
//	void OutCount() { // �ż��� ����
//		printf("���� ��ü ���� = %d\n", count);
//	}
//};
//
//int main()
//{
//	Simple s, * ps; // Simple�� s�� ������ ps ����
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps; // �ı���
//	s.OutCount();
//	printf("ũ�� = %d\n", sizeof(s)); // ���
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	int count = 0; // count�� Simple Ŭ���� ������ ���Խ�Ű�� 0���� �ʱ�ȭ
//
//public:
//	Simple() { count++; } // ������ count
//	~Simple() { count--; } // �ı��� count
//	void OutCount() {
//		printf("���� ��ü ���� = %d\n", count); // ��ü���� count ����� �ְ� �����ڿ��� �ڽ��� ī��Ʈ�� ���������� ������Ű�Ƿ� �׻� 1��.
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
//	printf("ũ�� = %d\n", sizeof(s));
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; // count �տ� static Ű���带 �ٿ� ���� ������� ���(count�� Simple Ŭ���� �Ҽ��̶�� �͸� �˸� �� �޸𸮴� �Ҵ����� �ʴ´�.
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	void OutCount() {
//		printf("���� ��ü ���� = %d\n", count);
//	}
//};
//int Simple::count = 0; // count�� Simple Ŭ���� �Ҽ��̸� �� �� ���� �ʱ�ȭ �ȴ�.
//
//int main()
//{
//	Simple s, * ps;
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps;
//	s.OutCount();
//	printf("ũ�� = %d\n", sizeof(s)); // sizeof(s)�� value�� ũ�Ⱚ�� 4�̴�.
//}
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; // ���� ��� �Լ��� ������ �� �Լ� ���� �տ� static Ű���带 ���̸� �ܺο� �ۼ��� ���� static Ű���带 �����Ѵ�.
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	static void InitCount() { // count�� �ʱ���� �����ϰ� ���� ��� �Լ� InitCountdptj 0���� �ʱ�ȭ
//		count = 0;
//	}
//	static void OutCount() { // ��ü�� ������ ����ϴ� �Լ�(�������� ����)
//		printf("���� ��ü ���� = %d\n", count);
//	}
//};
//int Simple::count;
//
//int main()
//{
//	Simple::InitCount();		// ī��Ʈ 0
//	Simple::OutCount(); // ��ü�� �����Ƿ� 0�� ���
//	Simple s, * ps;				// ī��Ʈ 1
//	Simple::OutCount(); // s ��ü�� ����
//	ps = new Simple;			// ī��Ʈ 2
//	Simple::OutCount(); // ps��ü�� ���� �����ϸ� 2�� ��
//	delete ps;					// ī��Ʈ 1
//	Simple::OutCount(); // ps ��ü�� �����ϸ� 1�� ����, main�� ������ ���� : s ��ü�� �ı�
//	printf("ũ�� = %d\n", sizeof(s));
//}								// ī��Ʈ 0
//#include <stdio.h>
//
//class DBQuery
//{
//private:
//	static int hCon; // ���� ��� hCon ����, �޸� �Ҵ� ���� ����
//	int nResult; // ������ ���� nResult ����
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
//	// ���⼭ DB ������ �����Ѵ�. : DBConnect �Լ��� ���� �̸��� ID, ��й�ȣ�� ���� �޾� DB������ �����Ѵ�. ���� ���� ������ ���� ��� ���� hCon�� ����Ǹ� ���� ��� ��ü�� �� �ڵ��� ����Ͽ� DB ������ ����Ѵ�. main���� �� ���� DBQuery ��ü�� �����Ѵ�.
//	hCon = 1234;
//	puts("����Ǿ����ϴ�.");
//}
//
//void DBQuery::DBDisConnect()
//{
//	// ������ �����Ѵ�.
//	hCon = NULL;
//	puts("������ ���������ϴ�.");
//}
//
//bool DBQuery::RunQuery(const char* SQL)
//{
//	// Query(hCon,SQL); : RunQuery�� �Ϲ� �Լ����� ���� ����� hCon�� �����Ͽ� ���Ǹ� ó���Ѵ�. ������ ������� ��� ��ü�� �����ϴ� ���� ����� �����ϴ� ���� ������ �����ϴ�.
//	puts(SQL);
//	return true;
//}
//
//int main()
//{
//	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk"); // �� ���� DBQuery ��ü ����
//	DBQuery Q1, Q2, Q3;
//
//	// �ʿ��� DB ���Ǹ� �Ѵ�.
//	Q1.RunQuery("select * from tblBuja where ���� ģ�� ���");
//
//	DBQuery::DBDisConnect(); // ��� ���Ǹ� ��ģ �� ���α׷��� �����ϱ� ���� DBDisConnect �Լ��� ������ ���´�.
//}
//#include <stdio.h>
//#include <windows.h> // �ü���� ������ �о�� �ϹǷ� ��������� ����
//
//class Shape // ������ ǥ���ϴ� Shape Ŭ���� ����
//{
//private:
//	int shapeType; // ������ ���� shapeType ����
//	RECT shapeArea;
//	COLORREF color;
//
//public:
//	static int scrx, scry; // �����������
//	static void GetScreenSize(); // ��������Լ�
//};
//
//int Shape::scrx;
//int Shape::scry;
//
//void Shape::GetScreenSize() // ȭ�� ũ�⸦ �����ϴ� ���� ��� �Լ�
//{
//	scrx = GetSystemMetrics(SM_CXSCREEN); // �����������
//	scry = GetSystemMetrics(SM_CYSCREEN); // �����������
//}
//
//int main()
//{
//	Shape::GetScreenSize();
//	Shape C, E, R; // �� ���� ��ü�� ���� ����
//	printf("ȭ�� ũ�� = (%d,%d)\n", Shape::scrx, Shape::scry);
//}
//#include <stdio.h>
//
//class Exchange // ȯ���� ����ϴ� Ŭ���� Exchange
//{
//private:
//	static double rate; // ȯ���� ����ϴ� rate ��� ������ Exchange Ŭ������ �������� ����. Exchange ��ü�� �ʿ��� �� �������� �� ���� �аų� ������ �� �ִ�.
//
//public:
//	static double GetRate() { return rate; }
//	static void SetRate(double aRate) { rate = aRate; }
//	double DollarToWon(double d) { return d * rate; }
//	double WonToDollar(double w) { return w / rate; }
//};
//double Exchange::rate; // ������ ����
//
//int main()
//{
//	Exchange::SetRate(1200); // ���� ȭ���� 1200������ �ʱ�ȭ
//	Exchange A, B; // A, B��ü�� 1200���� �����Ͽ� ȯ���� ���
//	printf("1�޷��� %.0f���̴�.\n", A.DollarToWon(1.0));
//	Exchange::SetRate(1150); // �߰��� ȯ���� �ٲ�� SetRate �Լ��� ����. ��� ��ü�� ���� ���ú��� �� ȯ���� ���� : ���ذ��� �ϳ����� �����ϱ� ���� ����ġ�� �߻����� ����.
//	printf("1�޷��� %.0f���̴�.\n", B.DollarToWon(1.0));
//}
//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	const double pie; // �Ǽ��� ��� ��� ���� : ��� ����� ���� �����Ǹ� ������ �� ���� ����̴�. Ŭ���� ��ü���� �����ϴ� �߿��� ���� ����� �����ϴµ� ��� ���� �տ� const �����ڸ� ���δ�.
//
//public:
//	MathCalc(double apie) : pie(apie) { }
//	void DoCalc(double r) {
//		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie); // �Ҽ��� ��°�ڸ����� ���
//	}
//};
//
//int main()
//{
//	MathCalc m(3.1416); // ��� ��� ���, �������� �ʱ�ȭ ����Ʈ���� ��ü���� �ʱ�ȭ
//	m.DoCalc(5); // r=5�� ����
//}
//#include <stdio.h>
//
//class Enemy
//{
//private:
//	const int Speed; // ������ ��� ��� ����
//
//public:
//	Enemy(int aSpeed) : Speed(aSpeed) { } // Enemy Ŭ������ ������ ǥ��, ��ü���� �ӵ��� �ٸ����� �� �� �ӵ��� �������� �Һ��̴�.
//	void Move() {
//		printf("%d�� �ӵ��� �����δ�.\n", Speed);
//	}
//};
//
//int main()
//{
//	Enemy e1(10), e2(20); // ��� ����� ����ϸ� �������� �ʱ�ȭ ����Ʈ���� ��ü���� �ʱ�ȭ�Ѵ�.
//	e1.Move(); // 10 ����
//	e2.Move(); // 20 ����
//}
#include <stdio.h>

class MathCalc
{
private:
	static const double pie; // pie ��� ���𹮿� static�� const�� ���� ���̸� ���� ����� �ȴ�. Ŭ������ ���ԵǸ� �� �� ī�Ǹ� �����Ͽ� �޸𸮰� ����Ǹ� ���� �ٲ� ���� ����.

public:
	MathCalc() { }
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie);
	}
};
const double MathCalc::pie = 3.1416; // ���� ����� �����ڿ��� �ʱ�ȭ�� �� ���� Ŭ���� �ܺο� �����ϸ鼭 �ʱ�ȭ�ϴ� ���� ��Ģ���̴�.

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

	void SetTime(int h, int m, int s) { // ���� ��� �Լ�(�ð��� ���� ����)
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const { // ��� ��� �Լ�(�ð��� �б⸸ ��). �ڿ� const �����ڸ� �ٿ� ��ü�� ���¸� �������� ������ �и��� ��.
		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 34, 56); // ������ ����� now ��ü(���� ��ü�� ��� �Լ��� ȣ���ϴ� ���� ������ ����)
	now.SetTime(11, 22, 33); // SetTime���� �ð��� ����
	now.OutTime(); // OutTime���� ���� �ð��� ���

	const Time meeting(16, 00, 00);
	meeting.SetTime(17, 00, 00); : meeting ��ü�� ������ �� const �����ڷ� ��� ��ü���� ����Ͽ� ���� ������ �� ����
	meeting.OutTime(); // meeting ��ü�� OutTime���� �ð��� Ȯ���� �� �� �ְ� SetTime���� �ð��� ������ ���� ����
}
//#include <stdio.h>
//
//class Some
//{
//private:
//	mutable int temp; // �ӽ� ������ �����ϴ� temp ��� ����. ��� �Լ��� ��� ��ü�� ����� ���� ���� �ְ� ������ ���� ����. mutable �����ڴ� �� ��Ģ�� ���� ���ܸ� �����Ͽ� �� �Ӽ��� ������ �޹��� ��ü�� ������� ������� ������ ������ �����ϴ�.
//
//public:
//	Some() { }
//	void method() const { temp = 0; } // ��� �Լ� method(temp�� ���� ������� ���� ����)
//};
//
//int main()
//{
//	Some s;
//	s.method();
//
//	const Some t; // t ��� ����
//	t.method(); // method ȣ��, temp�� �� ����
//}
//#include<stdio.h>
//#include<string.h>
//
//class Human
//{
//private: // ����� ���� ������
//	char name[12]; // ������ �迭 ���� �Ҵ�(12)
//	int age; // ������ ���� age ����
//
//public: // ���� ���� ������
//	Human(const char* aname, int aage) { // ���� ����
//		SetName(aname); // ��� ��� ����
//		SetAge(aage); // ������ ����
//	}
//
//	void intro() {
//		printf("�̸�=%s, ����=%d\n", name, age); // ���
//	}
//
//	char* GetName() { return name; } // Get �Լ��� ������� �о ��
//	void SetName(const char* aname) {  // ��� ��� ���� aname, Set �Լ��� �־��� ���ǿ� ���� ���� ����� ���� �����ϰ� �׷��� ������ �� ���ڿ��̳� 0�� �����Ͽ� ��ҵ� �������� ���
//		if (strlen(aname) < 12) { // �̸��� 12�̸��� ���
//			strcpy(name, aname); // name�� aname����
//		}
//		else { // �ƴ� ���
//			strcpy(name, ""); // name�� "" ����
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
//	Human kim("�����", 29); // Ŭ���� Human ��� kim ���� �� ����
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
//	const int x, y; // ������ ��� ��� ����
//	const char ch; // ������ ��� ��� ����
//
//public:
//	Sun(int ax, int ay, char ach) : x(ax), y(ay), ch(ach) { ; } //�¾��� ������ ��ǥ���� �������� �ʾ� ��� ��������� ����� ����
//	void Show() {
//		gotoxy(x, y); putch(ch);
//	}
//	void Hide() {
//		gotoxy(x, y); putch('');
//	}
//	int GetX() const { return x; } // �Լ��� ��ǥ ����
//	int GetY() const { return y; } // �Լ��� ��ǥ ����
//};
//
//class Earth
//{
//private:
//	const int r; // ������ ��� ��� ���� r
//	int s, y;
//	const char ch; // ������ ��� ��� ���� ch
//	const Sun* pSun; // �������� ��� ��� ����
//
//public:
//	Earth(int ar, char ach, Sun* apSun) : r(ar), ch(ach), pSun(apSun) { ; }
//	void Revolve(double angle) { // ���� ���� ó�� : ���� ������ �μ��� �޾� �˵����� ��ǥ�� ���� ������ ��ġ�� �ű�
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
//	Sun S(40, 12, 'S'); // �¾� ��ü ����
//	Earth E(10, 'E', &S); // ���� ��ü ����
//
//	clrscr();
//	showcursor(0);
//	S.Show();
//	for (double angle = 0; !kbhit(); angle += 10) { // ������ ����
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
//class Sun //Ŭ���� ���� �� ����
//{
//private:
//	const int x, y; //������ ��� ��� x,y ����
//	const char ch; //������ ��� ��� ch ����
//
//public:
//	Sun(int ax, int ay, char ach) : x(ax), y(ay), ch(ach) { ; }//�ʱ�ȭ����Ʈ�� ���ؼ� �ʱ�ȭ����
//	void Show() { //������� �巯����.
//		gotoxy(x, y);
//		_putch(ch);
//	}
//	void Hide() { //��� ���� �����ش�
//		gotoxy(x, y);
//		_putch(' ');
//	}	// �¾��� ��ǥ���� ���ڰ� ���ְ� ��
//	int GetX() const { return x; } //�¾� x��ǥ
//	int GetY() const { return y; } //�¾� y��ǥ
//};
//
//class Earth //Ŭ���� ����
//{
//private:
//	const int r; //������ ������ ����
//	int x, y;
//	const char ch; //������ ������ ����
//	const Sun* pSun; //Ŭ������ ������ ��� ���
//
//public:
//	Earth(int ar, char ach, Sun* apSun) : r(ar), ch(ach), pSun(apSun) { ; } //�ʱ�ȭ����Ʈ�� ���ؼ� �ʱ�ȭ����
//	void Revolve(double angle) { //���� ó���Լ�
//		Hide();
//		x = int(cos(angle * 3.1416 / 180) * r * 2);
//		y = int(sin(angle * 3.1416 / 180) * r);
//		Show();
//	}
//	void Show() {//x�� y��ǥ�� ���������
//		gotoxy(pSun->GetX() + x, pSun->GetX() + y);
//		_putch(ch);	//�̹��� ������ ��ǥ�̴�
//	}
//	void Hide() { //����
//		gotoxy(pSun->GetX() + x, pSun->GetY() + y);
//		_putch(' ');	// ������ ��ǥ���� ���ڰ� ���ְԲ� �����س���
//	}
//};
//
//int main()
//{
//	Sun S(40, 12, 'S'); //Ŭ���� ���� S ���� �̿� ���ÿ� ������ ȣ�� 
//	Earth E(10, 'E', &S); //Ŭ���� ���� E ���� �̿� ���ÿ� ������ ȣ��
//
//	clrscr(); //ȭ�� �����ش�(clear screen)
//	showcursor(0); //���콺 Ŀ�� ����->�ȿ��� ������ true or false�� ����
//	S.Show(); //�¾��� ǥ�����ش�
//	for (double angle = 0; !_kbhit(); angle += 10) { //kbhit�Լ��� �̿��� Ű���� ���������� �ݺ����ش�
//		E.Revolve(angle); //������ ������ ��Ÿ����
//		delay(100); //�����̴� 0.1��
//	}
//	showcursor(1); //���콺 Ŀ���� �� ǥ������
//}

//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<cursor.h>
//
//class Sun
//{
//private:
//	const int x, y; // ������ ��� ��� ����
//	const char ch; // ������ ��� ��� ����
//
//public:
//	Sun(int ax, int au, char ach) :x(ax), y(au), ch(ach) { ; }
//	void Show()
//	{
//		gotoxy(x, y); putch(ch); // ��ǥ�� �����
//	} 
//
//	void Hide()
//	{
//		gotoxy(x, y); putch(' '); // ��ǥ�� ����
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
//	const int r;// ������ ��� ��� ����
//	int x, y;
//	const char ch;// ������ ��� ��� ����
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
//		gotoxy(pEarth->GetX() + x, pEarth->GetY() + y); putch(ch); //  ���� ��ġ ���
//	}
//	void Hide()
//	{
//		gotoxy(pEarth->GetX() + x, pEarth->GetY() + y); putch('*'); // ���� ������ ��ġ ����
//	}
//};
//
//int main()
//{
//	Sun S(40, 12, 'S'); // Sun ��ǥ ����
//	Earth E(10, 'E', &S);// Earth ��ǥ ����
//
//	Moon M(5, 'M', &E);// ���� ��ġ ���
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