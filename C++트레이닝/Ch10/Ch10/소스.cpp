//#include <stdio.h>
//int main()
//{
//	int sum = 124, num = 5;
//	printf("��� = %f\n", static_cast<double>(sum) / num); // ��� ������ Ŭ���� ������ �� ���۷���
//}

//#include <stdio.h>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//private:
//	int num; // ��� ���� num
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // �����Լ� PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // ��� �޼��� ����
//};
//
//void func(Parent* p)
//{
//	p->PrintMe(); // Parent �Ļ� ��ü�� �����͸� ���޹޾� PrintMe �Լ� ȣ��
//	((Child*)p)->PrintNum(); // Child�� ��� Child * Ÿ������ ���� ĳ�����Ͽ� PrintNum �񰡻� �Լ��� ȣ��
//}
//
//int main()
//{
//	Parent p; // ��ü ����
//	Child c(5); // ��ü ����
//
//	func(&c); // �Լ� ȣ��
//	func(&p); // �Լ� ȣ��
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // ���� �Լ� PrintMe
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // ���� �Լ� PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // ��� �޼���
//};
//
//int main()
//{
//	Parent P, * pP; // ��ü ����
//	Child C(123), * pC; // ��ü ����
//	pP = &P;
//	pC = &C;
//
//	printf("P=%s, pP=%s, *pP=%s\n", // P, pP, *pP ��ü Ÿ���� ���
//		typeid(P).name(), typeid(pP).name(), typeid(*pP).name());
//	printf("C=%s, pC=%s, *pC=%s\n",// C, pC, *pC ��ü Ÿ���� ���
//		typeid(C).name(), typeid(pC).name(), typeid(*pC).name());
//
//	pP = &C;
//	printf("pP=%s, *pP=%s\n", // pP, *pP ��ü Ÿ���� ���
//		typeid(pP).name(), typeid(*pP).name());
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // ���� �Լ� PrintMe
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // ���� �Լ� PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // ��� �޼���
//};
//
//void func(Parent* p) // Parent �Ļ� ��ü�� �����͸� ���޹޴� �Լ� func
//{
//	p->PrintMe(); // p��ü�� PrintMe �Լ� ȣ��
//	if (typeid(*p) == typeid(Child)) {
//		((Child*)p)->PrintNum(); // p��ü�� Ÿ���� Child�̸� Child Ŭ������ ����Լ� PrintNum ȣ��
//	}
//	else {
//		puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�."); // ���
//	}
//}
//
//int main()
//{
//	Parent p; // ��ü ����
//	Child c(5); // ��ü ����
//
//	func(&c); // �Լ� ȣ��
//	func(&p); // �Լ� ȣ��
//}

//#include <stdio.h>
//#include <string.h>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	char classname[32]; // ���ڿ� �迭 ����
//	Parent() {
//		strcpy(classname, "Parent"); // ���ڿ� �迭 ���� (������� �ʱ�ȭ)
//	}
//	virtual void PrintMe() { // ���� �Լ� PrintMe
//		printf("I am Parent\n"); // ���
//	}
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) {
//		strcpy(classname, "Child");
//	}
//	virtual void PrintMe() { printf("I am Child\n"); } // ���� �Լ� PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // �޼��� ����
//};
//
//void func(Parent* p) // Parent �Ļ� ��ü�� �����͸� ���޹޴� �Լ� func
//{
//	p->PrintMe(); // p��ü�� PrintMe �Լ� ȣ��
//	if (strcmp(p->classname, "Child") == 0) {
//		((Child*)p)->PrintNum();  // p��ü�� Ÿ���� Child�̸� Child Ŭ������ ����Լ� PrintNum ȣ��
//	}
//	else {
//		puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�.");
//	}
//}
//
//int main()
//{
//	Parent p; // ��ü ����
//	Child c(5); // ��ü ����
//
//	func(&c); // �Լ� ȣ��
//	func(&p); // �Լ� ȣ��
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* str = "korea"; // ���ڿ� ������ str�� ����Ű�� ����
//	int* pi; // ������ �����ͷ� ���� ĳ�����Ͽ� pi�� ����
//
//	pi = (int*)str; // pi�� ����Ű�� ���� ���� �о��
//	printf("%d %x\n", *pi, *pi); // ���
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* str = "korea"; // ���ڿ� ������ str�� ����Ű�� ����
//	int* pi; // ������ �����ͷ� ���� ĳ�����Ͽ� pi�� ����
//	double d = 123.456; // double�� ���� ���� �� �ʱ�ȭ
//	int i; // int�� ���� i
//
//	i = static_cast<int>(d);				// ���� (�Ǽ����� ����������)
//	pi = static_cast<int*>(str);			// ���� (������ Ÿ�� �ٸ�������)
//	pi = (int*)str;						// ���� (�������δ� X ���� ĳ���� : �Ǽ��� �Ǵ�)
//}

//#include <stdio.h>
//
//class Parent { }; // Ŭ���� Parent
//class Child : public Parent { }; // Parent���� �Ļ��� Ŭ���� Child
//
//int main()
//{
//	Parent P, * pP; // ��ü �� ������ ����
//	Child C, * pC; // ��ü �� ������ ����
//	int i = 1234; // ������ ���� i ���� �� �ʱ�ȭ
//
//	pP = static_cast<Parent*>(&C);		// ���� (��� ������ �������� ��ȯ�ϴ� ��ĳ����)
//	pC = static_cast<Child*>(&P);		// ���������� ���� (�θ� ��ü�� ������ �ڽ� Ÿ���� �����ͷ� �ٲٴ� �ٿ� ĳ����)
//	pP = static_cast<Parent*>(&i);		// ���� (���� : ������ �����͸� �ƹ��� ������ ���� Ŭ������ �����ͷ� ��ȯ)
//	pC = static_cast<Child*>(&i);		// ���� (���� : ������ �����͸� �ƹ��� ������ ���� Ŭ������ �����ͷ� ��ȯ)
//}

//#include <stdio.h>
//#include <typeinfo>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); } // ���� �Լ� PrintMe
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//private:
//	int num;
//
//public:
//	Child(int anum) : num(anum) { }
//	virtual void PrintMe() { printf("I am Child\n"); } // ���� �Լ� PrintMe
//	void PrintNum() { printf("Hello Child = %d\n", num); } // �޼��� ����
//};
//
//void func(Parent* p) // Parent �Ļ� ��ü�� �����͸� ���޹޴� �Լ� func
//{
//	p->PrintMe(); // p��ü�� PrintMe �Լ� ȣ��
//	Child* c = dynamic_cast<Child*>(p); // �μ��� ���޵� ������ p�� Child *�� ���� ĳ����
//	if (c) {
//		c->PrintNum(); // ����� ��ȯ �Ǿ����� �Լ� ȣ��
//	}
//	else {
//		puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�."); // �ƴ� ��� ���
//	}
//}
//
//int main()
//{
//	Parent p; // ��ü ����
//	Child c(5); // ��ü ����
//
//	func(&c); // �Լ� ȣ��
//	func(&p); // �Լ� ȣ��
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "string"; // ���ڿ� �迭 ���� �� �ʱ�ȭ
//	const char* c1 = str; // ��� ���� ������ c1�� str ���� �迭 ����
//	char* c2; // ������ ������ ���� c2 ����
//
//	c2 = const_cast<char*>(c1); // �������� ����� ����
//	c2[0] = 'a'; // c2[0] ����
//	puts(c2); // ���
//}

//#include <stdio.h>
//
//class MyClass // Ŭ���� MyClass
//{
//public:
//	int i, j;
//	double d;
//};
//
//int main()
//{
//	MyClass C; // ��ü ����
//	int MyClass::* pi; // int�� ��� ������ ����
//	double MyClass::* pd; // double�� ��� ������ ����
//	int num;
//
//	pi = &MyClass::i; // pi�� MyClass Ŭ������ ��� ���� i�� ����Ű�� ��
//	pi = &MyClass::j; // pi�� MyClass Ŭ������ ��� ���� j�� ����Ű�� ��
//	pd = &MyClass::d; // pd�� MyClass Ŭ������ ��� ���� d�� ����Ű�� ��
//	//pd=&MyClass::i; // pd�� MyClass Ŭ������ ��� ���� i�� ����Ű�� �� (Ÿ���� �޶� �Ұ�)
//	//pi=&MyClass::d; // pi�� MyClass Ŭ������ ��� ���� d�� ����Ű�� �� (Ÿ���� �޶� �Ұ�)
//	//pi=&num; // pi�� num�� ����Ű�� �� (num�� MyClass Ŭ���� ��� ������ �ƴ� main()�Լ��� ���������� �Ұ�)
//}
//}

//#include <stdio.h>
//
//class Time // Ŭ���� Time
//{
//public:
//	int hour, min, sec;
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec); // ���� �ð� ���
//	}
//};
//
//int main()
//{
//	Time now; // Time�� ��ü now ����
//	int Time::* pi; // Time�� ������ ��� ������ ����Ű�� pi�� ����
//
//	pi = &Time::hour; // pi�� Time�� hour�� ����Ű���� �ϸ� �� ����� ��ġ�� ����ص�
//	now.*pi = 12; // now ��ü�� hour ���� �ٲ�
//	pi = &Time::min; // pi�� Time�� min�� ����Ű���� �ϸ� �� ����� ��ġ�� ����ص�
//	now.*pi = 34; // now ��ü�� min ���� �ٲ�
//	pi = &Time::sec; // pi�� Time�� sec�� ����Ű���� �ϸ� �� ����� ��ġ�� ����ص�
//	now.*pi = 56; // now ��ü�� sec ���� �ٲ�
//	now.OutTime(); // �޼��� ȣ��
//}

//#include <stdio.h>
//
//class Calc // Ŭ���� Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // �� ������ ������ ���ϴ� �Լ�
//	void Op2(int a, int b) { printf("%d\n", a - b); } // �� ������ ������ ���� �Լ�
//	void Op3(int a, int b) { printf("%d\n", a * b); } // �� ������ ������ ���ϴ� �Լ�
//};
//
//int main()
//{
//	int ch;
//	Calc c; // ��ü ����
//	int a = 3, b = 4;
//
//	printf("���� ����� �����Ͻÿ�. 0=���ϱ�, 1=����, 2=���ϱ� : "); // ���
//	scanf("%d", &ch); // ���� ��� �Է¹���
//
//	switch (ch) { // ������ ��� �Լ� ȣ��
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
//class Calc // Ŭ���� Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // �� ������ ������ ���ϴ� �Լ�
//	void Op2(int a, int b) { printf("%d\n", a - b); } // �� ������ ������ ���� �Լ�
//	void Op3(int a, int b) { printf("%d\n", a * b); } // �� ������ ������ ���ϴ� �Լ�
//};
//
//int main()
//{
//	int ch;
//	Calc c; // ��ü ����
//	int a = 3, b = 4;
//	void (Calc:: * arop[3])(int, int) = { &Calc::Op1,&Calc::Op2,&Calc::Op3 }; // ����ڰ� �Է��� ���� ������ ÷�ڷ� �Ͽ� arop�� ��� �Լ��� ������
//
//	printf("���� ����� �����Ͻÿ�. 0=���ϱ�, 1=����, 2=���ϱ� : "); // ���
//	scanf("%d", &ch); // ���� ��� �Է¹���
//
//	if (ch >= 0 && ch <= 2) {
//		(c.*arop[ch])(3, 4); // ��� �Լ� ȣ��
//	}
//}

//#include <stdio.h>
//
//class Calc // Ŭ���� Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); } // �� ������ ������ ���ϴ� �Լ�
//	void Op2(int a, int b) { printf("%d\n", a - b); } // �� ������ ������ ���� �Լ�
//	void Op3(int a, int b) { printf("%d\n", a * b); } // �� ������ ������ ���ϴ� �Լ�
//	void DoCalc(void (Calc::* fp)(int, int), int a, int b) { // �յڷ� �޽��� ��� �� Op1,Op2,Op3�� ��� ȣ���ϴ� ����
//		puts("���ݺ��� ���� ����� ��ǥ�ϰڽ��ϴ�.");
//		printf("%d�� %d�� ���� ��� : ", a, b); // ���
//		(this->*fp)(a, b); // ���޹��� ����� �Լ� ȣ��
//		puts("�̻��Դϴ�.");
//	}
//};
//
//int main()
//{
//	int ch;
//	Calc c;
//	int a = 3, b = 4;
//	void (Calc:: * arop[3])(int, int) = { &Calc::Op1,&Calc::Op2,&Calc::Op3 }; // ����ڰ� �Է��� ���� ������ ÷�ڷ� �Ͽ� arop�� ��� �Լ��� ������
//
//	printf("���� ����� �����Ͻÿ�. 0=���ϱ�, 1=����, 2=���ϱ� : "); // ���
//	scanf("%d", &ch); // ���� ��� �Է¹���
//
//	if (ch >= 0 && ch <= 2) {
//		c.DoCalc(arop[ch], a, b); // �޼��� ȣ��
//	}
//}

//#include <stdio.h>
//
//class Parent // Ŭ���� Parent
//{
//public:
//	int p;
//};
//
//class Child : public Parent // Parent���� �Ļ��� Ŭ���� Child
//{
//public:
//	int c;
//};
//
//int main()
//{
//	int Parent::*pp; // int�� ��� ������ ���� pp����
//	int Child::*pc; // int�� ��� ������ ���� pc����
//
//	pp = &Parent::p; // pp�� Parent Ŭ������ ��� ���� p�� ����Ű�� ��
//	pc = &Child::c; // pc�� Child Ŭ������ ��� ���� c�� ����Ű�� ��
//
//	pc = &Parent::p; // pc�� Parent Ŭ������ ��� ���� p�� ����Ű�� ��
//	pc = &Child::p; // pc�� Child Ŭ������ ��� ���� p�� ����Ű�� ��
//	//pp = &Child::c; // pp�� Child Ŭ������ ��� ���� c�� ����Ű�� ��
//}

