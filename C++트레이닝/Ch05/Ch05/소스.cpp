//#include <stdio.h>
//
//class Time
//{
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public: // ���� ���� ������
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }//h�� hour, m�� min, s�� sec ����
//	void OutTime() { // �ð� ���
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time AddTime(const Time& other) const { // �ð� ��ü������ ������ �����ϴ� �Լ� AddTime : �μ��� Time ��ü�� �޾� ���� ��ü�� ���� ���ο� �ð��� ������
//		Time t;
//		t.sec = sec + other.sec; // ���ο� sec
//		t.min = min + other.min; // ���ο� min
//		t.hour = hour + other.hour; // ���ο� hour
//
//		t.min += t.sec / 60; // �ڸ���ħ�� ó��
//		t.sec %= 60;
//		t.hour += t.min / 60; // �ڸ���ħ�� ó��
//		t.min %= 60;
//		return t; // ���ο� �ð��� ����
//	}
//};
//
//int main()
//{
//	Time t1(1, 10, 30); // t1 ����
//	Time t2(2, 20, 40); // t2 ����
//	Time t3;
//
//	t3 = t1.AddTime(t2); // t1�� t2�� �ð� ����
//	t3.OutTime(); // ����� ���
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
//{
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() { // �ð� ���
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	const Time operator +(const Time& other) const { // �Լ� ȣ�� ������ �ƴ� ���깮���� ���� ����
//		Time t;
//		t.sec = sec + other.sec; // ���ο� sec
//		t.min = min + other.min; // ���ο� min
//		t.hour = hour + other.hour; // ���ο� hour
//
//		t.min += t.sec / 60; // �ڸ���ħ�� ó��
//		t.sec %= 60;
//		t.hour += t.min / 60; // �ڸ���ħ�� ó��
//		t.min %= 60;
//		return t; // ���ο� �ð��� ����
//	}
//};
//
//int main()
//{
//	Time t1(1, 10, 30); // t1 ����
//	Time t2(2, 20, 40); // t2 ����
//	Time t3;
//
//	t3 = t1 + t2; // ������ �Լ�
//	t3.OutTime(); // t3 ���
//}
//#include <stdio.h>
//
//class Time
//{
//	friend const Time operator +(const Time& me, const Time& other);  // operator + �Ϲ� �Լ��� �������� �ۼ�, �ܺο� �����ϴ� ������ �Լ��� ��� Ŭ���� ����� �����Ӱ� �б����� ������ ������ ���� �׼��� ���� �ο�
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
//const Time operator +(const Time& me, const Time& other) { // �ǿ����� �� ���� me,other��� �̸��� �μ��� ���޹޾� �� ��ü�� ���� ������
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
//	t3 = t1 + t2; // operator +(t1,t2) �Լ� ȣ��
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
//	const Time operator +(int s) const { // Time ��ü�� ������ ���ϱ� ���� ������ �Լ��� ����
//		Time t = *this; // �ӽ� ��ü t�� this�� �纻���� ����
//
//		t.sec += s; // �μ��� ���� s�ʸ� ����
//
//		t.min += t.sec / 60; // �ڸ���ħ�� ó��
//		t.sec %= 60;
//		t.hour += t.min / 60; // �ڸ���ħ�� ó��
//		t.min %= 60;
//		return t;
//	}
//};
//
//int main()
//{
//	Time now(11, 22, 33); // Time�� �� ����
//	now.OutTime(); // ���� �� ���
//	now = now + 1; // �ð� ��ü�� ���� 1�� ����
//	now.OutTime(); // ���� �� ���
//}
//#include <stdio.h>
//
//class Time
//{
//	friend const Time operator +(int s, const Time& me); // operator+(int,Time) ���� �Լ��� �߰�, ������ �ð� ��ü�� ����
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
//	now = 1 + now; // ������ Time ��ü�� �޴� �Լ��� ���ǵǾ����� 1+now ������ ����
//	now.OutTime(); // ���� �� ���
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
//	const Time operator +(int s) const { // ������ ���� ���� : ���� �Լ��� Time Ŭ������ ����� ���� ���� ����
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
//	now = 1 + now; // ����+Ÿ�� ��ü
//	now = now + 1;//Ÿ��+���� ��ü
//	now.OutTime(); // ��� �� ���
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() { }
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	bool operator ==(const Time& other) const { // ���� �����ڴ� ���� ���θ� �Ǵ��ϹǷ� bool Ÿ���� ������
//		return (hour == other.hour && min == other.min && sec == other.sec); // ��,��,�� ��Ұ� ��� ��ġ�ϴ��� ���� ���Ͽ� && �� �����ڷ� ������
//	}
//	bool operator !=(const Time& other) const { // �� ��� �� �ϳ��� �ٸ��� ����
//		return !(*this == other); // == ������ ����� �ݴ�� ������ ������
//	}
//	bool operator >(const Time& other) const { // �º��� �� ū�� �˻��ϴ� ������
//		if (hour > other.hour) return true; // ���� ū ������ �ð��� ���� ���غ��� �º� ��ü�� �ð��� �� ũ�� ��
//		if (hour < other.hour) return false; // �� ������ ����
//		if (min > other.min) return true;
//		if (min < other.min) return false;
//		if (sec > other.sec) return true;
//		return false;
//	}
//	bool operator >=(const Time& other) const {
//		return (*this == other || *this > other);
//	}
//	bool operator <(const Time& other) const { // �캯�� �� ū�� �˻��ϴ� ������
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
//	if (t1 == t2) { // t1�� t2 ��
//		puts("�� �ð��� ����.");
//	}
//	else {
//		puts("�� �ð��� �ٸ���.");
//	}
//
//	if (t1 > t2) { // t1�� t2 ��
//		puts("t1�� �� ũ��.");
//	}
//	else {
//		puts("t1�� �� �۴�.");
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
//	Time operator ++() { // ������ ���� ������ ����
//		sec++;
//		min += sec / 60;
//		sec %= 60;
//		hour += min / 60;
//		min %= 60;
//		return *this;
//	}
//	const Time operator ++(int dummy) { // �������� ���� �����ڴ� ������ ���� �μ� �ϳ��� ���ϴ� ����� ���(�����ε� ����� �����ä� �� ������ ���� �����ڸ� ��� ���� �� �� �ֵ��� �ϴ� ���� ���� ����)
//		Time t = *this; // �ӽ� ��ü t�� ���� ��ü�� �纻�� ��
//		++* this; // ��ü�� ������Ŵ
//		return t; // ���� ���� t ����
//	}
//};
//
//int main()
//{
//	Time t1(1, 1, 1); // t1 ��ü �ʱ�ȭ
//	Time t2;
//
//	t2 = ++t1; // ������ ���� ������
//	t1.OutTime();
//	t2.OutTime(); // t1, t2 ��� ����
//	t2 = t1++; // ������ ���� ������
//	t1.OutTime();
//	t2.OutTime(); // t2�� ���� ���� t1���� ����
//}
//#include <stdio.h>
//#include <string.h> // strcpy ����� ���� �������
//
//class Human // �̸��� �����ϴ� pname ����� �������� �Ҵ��ϴ� Ŭ���� Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human() { // ����Ʈ ������ : ����� NULL,0,false ������ �ʱ�ȭ
//		pname = new char[1]; // ������, ũ�Ⱑ 1����Ʈ�� �����Ҵ�
//		pname[0] = NULL;
//		age = 0;
//	}
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1]; // Null���ڸ� ���Ѹ�ŭ�� ���� �Ҵ�
//		strcpy(pname, aname);
//		age = aage;
//	}
//	Human(const Human& other) {
//		pname = new char[strlen(other.pname) + 1]; // Null���ڸ� ���Ѹ�ŭ�� ���� �Ҵ�
//		strcpy(pname, other.pname);
//		age = other.age;
//	}
//
//	~Human() { // �ı��� ����
//		delete[] pname;
//	}
//
//	void intro()
//	{
//		printf("�̸� = %s, ���� = %d\n", pname, age); // �̸�, ���� ���
//	}
//};
//
//int main()
//{
//	Human kang("������", 1424); // kang�� ������, 1424 ����
//	Human boy; // boy ����
//
//	boy = kang; // boy�� kang ����
//	boy.intro(); // �� ���
//} // ���� �����ڸ� �������� �ʾ� ���� ���縦 �����Ͽ� ���� �߻�
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
//		pname = new char[strlen(aname) + 1]; // Null���ڸ� ���Ѹ�ŭ�� ���� �Ҵ�
//		strcpy(pname, aname);
//		age = aage;
//	}
//	Human(const Human& other) { 
//		pname = new char[strlen(other.pname) + 1]; // Null���ڸ� ���Ѹ�ŭ�� ���� �Ҵ�
//		strcpy(pname, other.pname);
//		
//		age = other.age;
//	}
//	Human& operator =(const Human& other) { // �ܼ����Կ����� ����, ������ �����ε�
//		if (this != &other) { // ���� ���� �ʴٸ�
//			delete[] pname;  // �ı�
//			pname = new char[strlen(other.pname) + 1]; // Null���ڸ� ���Ѹ�ŭ�� ���� �Ҵ�
//			strcpy(pname, other.pname);
//			age = other.age;
//		}
//		return *this; 
//	}
//
//	~Human() { // �ı���
//		delete[] pname;
//	}
//
//	void intro() 
//	{
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human kang("������", 1424); // kang�� ������, 1424 ����
//	Human boy; // boy ����
//
//	boy = kang; 
//	boy.intro();
//} 

//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() { } // �ð� ��ü�� ������ ���� �� �ִ� Ŭ���� Time
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // ���� ���
//	}
//	const Time operator +=(int s) { // ����ڰ� �Է��� ������ ����������� ����
//		sec += s;
//
//		min += sec / 60;
//		sec %= 60;
//		hour += min / 60;
//		min %= 60;
//		return *this; // ��ü�� ����
//	}
//	const Time operator +(int s) const { // ����ڰ� �Է��� ������ ����
//		Time t = *this; // ���� ��ü�� t�� ����
//		t += s;
//		return t; // t�� ����
//	}
//};
//
//int main()
//{
//	Time now(11, 22, 33); // ��ü ���� �� �� ����
//	now.OutTime();
//	now = now + 2; // 2�� ����
//	now += 40; // 40�� ����
//	now.OutTime(); // ����� ���
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class Time
//{
//	friend ostream& operator <<(ostream& c, const Time& T); // ostream ��ü, ���� ������ �Լ� ����
//	friend ostream& operator <<(ostream& c, const Time* pT); // Time���� ��ü, Time���� ������, ���� ������ �Լ� ����
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
//	c << T.hour << "��" << T.min << "��" << T.sec << "��"; // Time Ŭ������ ����� c ��ü�� ������� ����
//	return c; // c�� ����
//}
//
//ostream& operator <<(ostream& c, const Time* pT) // ostream Ÿ���� ���۷����� ���� : �������� ��� ����
//{
//	c << *pT;
//	return c; // c�� ����
//}
//
//int main()
//{
//	Time now(1, 2, 3);
//	Time* pTime;
//
//	pTime = new Time(4, 5, 6); // �޸� �Ҵ�, pTime�� �ν��Ͻ� �� �ʱ�ȭ
//	cout << "���� �ð��� " << now << "�Դϴ�." << endl;
//	cout << "���� �ð��� " << pTime << "�Դϴ�." << endl;
//	delete pTime;
//}
//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() {}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // ���� ���
//	}
//	const Time operator -(const Time& other) const { // ������ �����ε�
//		Time t;
//		t.sec = sec - other.sec; // ��� ����
//		t.min = min - other.min; // ��� ����
//		t.hour = hour - other.hour; // ��� ����
//
//		if (t.sec < 0) { // �ʰ� 0���� ������
//			t.min--; // min���� - ����� ����
//			t.sec += 60; // sec���� 60 ������ ���
//		}
//		if (t.min < 0) { // min�� 0���� ������
//			t.hour--; // hour���� - ����� ����
//			t.min += 60; // min���� 60 ������ ���
//		}
//		return t; // t�� ����
//	}
//};
//
//int main()
//{
//	Time t1(3, 10, 30); // t1 ����
//	Time t2(1, 20, 20); // t2 ����
//	Time t3;
//	t3 = t1 - t2; // t3 ���
//	t3.OutTime(); // t3 ����� ���
//}

//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec; // ������ ���� hour,min,sec ����
//
//public:
//	Time() {}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec); // ��ü ���� ���
//	}
//	const Time operator *(int s)const {
//		Time t = *this; // t���� ���� ��ü �� ����
//
//		t.sec *= s;
//		t.min *= s;
//		t.hour *= s;
//
//		t.min += t.sec / 60;
//		t.sec %= 60;
//		t.hour += t.min / 60;
//		t.min %= 60;
//		return t; // t�� ����
//	}
//};
//
//const Time operator *(int s, const Time& me) { // �����Լ�
//	return (me * s);
//}
//
//int main()
//{
//	Time now(1, 2, 33);
//	now = now * 2; // ���
//	now.OutTime(); // ����� ���
//	now = 3 * now; // ���
//	now.OutTime(); // ����� ���
//}

//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//class Human
//{
//	friend ostream& operator <<(ostream& c, const Human& H); // friend�Լ� ����
//	friend ostream& operator <<(ostream& c, const Human* pH); // friend�Լ� ����
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
//		printf("�̸� = %s, ���� = %d\n", name, age); // ��ü ���� ���
//	}
//};
//
//ostream& operator << (ostream& c, const Human& H) // �����Լ� operator ����
//{
//	c << " �̸� : " << H.name << ", ���� : " << H.age << "��"; //
//	return c; // c�� ���
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
//	Human kim("�����", 29);
//	Human *pLee = new Human("�̽¿�", 45);
//	cout << "������" << kim << "�Դϴ�." << endl; //
//	cout << "������" << pLee << "�Դϴ�." << endl; //
//	delete pLee;
//}