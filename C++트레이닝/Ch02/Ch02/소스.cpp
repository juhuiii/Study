//#include <stdio.h>
//
//struct SHuman // ����ü SHuman ����
//{
//	char name[12]; // char������ name �迭 ����(ũ�� 12byte)
//	int age; // ������ ���� age ����
//};
//
//void IntroHuman(SHuman who) // IntroHuman�Լ� ����
//{
//	printf("�̸� = %s, ���� = %d\n", who.name, who.age);
//}
//
//int main()
//{
//	SHuman kim = { "�����", 29 }; // kim�� ����ü ���� �� �ʱ�ȭ
//	IntroHuman(kim); // /IntroHuman�Լ� ȣ��(�μ� : kim)
//}
////#include <stdio.h>
//
//struct SHuman // ����ü SHuman ����
//{
//	char name[12]; // char������ name �迭 ����(ũ�� 12byte)
//	int age; // ������ ���� age ����
//
//	void intro() { // ����Լ� ���� �� ����
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	SHuman kim = { "�����", 29 }; // kim�� ����ü ���� �� �ʱ�ȭ
//	kim.intro(); // kim�� ���� ���
//}
//#include <stdio.h>
//
//struct SHuman // ����ü SHuman ����
//{
//	char name[12]; // char������ name �迭 ����(ũ�� 12byte)
//	int age; // ������ ���� age ����
//
//	void intro();				// ���� ����
//};
//
//void SHuman::intro()			// ��ü ���� (intro �Լ��� �ܺο� ����)
//{
//	printf("�̸� = %s, ���� = %d\n", name, age);
//}
//
//int main()
//{
//	SHuman kim = { "�����", 29 }; // kim�� ����ü ���� �� �ʱ�ȭ
//	kim.intro(); // kim�� ���� ���
//}
//#include <stdio.h>
//
//struct SHuman // ����ü SHuman ����
//{
//private: // ����� ���� ������ (�ܺο����� �Ұ�)
//	char name[12];
//	int age;
//
//public: // ���� ���� ������ (�ܺ� ����, �����Ӱ� ȣ�� ����)
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	SHuman kim; // kim�� ����ü ���� �� �ʱ�ȭ
//	//kim.age = 286; // age�� private�� ���� ������Ǿ� �׼����� �Ұ��ϴ�.
//	kim.intro(); // kim�� ���� ��� == �����Ⱚ ���
//}
//#include <stdio.h>
//
//class Human // Ŭ���� Human ����
//{
//public: // ���� ���� ������ (�ܺ� ����, �����Ӱ� ȣ�� ����)
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human kim = { "�����", 29 };
//	kim.intro();
//}
//#include <stdio.h>
//
//class Human // Ŭ���� Human ����
//{
//public: // ���� ���� ������
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human arFriend[10] = { // Human Ÿ������ ũ�� 10�� �迭�� arFriend ���� �� �ʱ�ȭ
//		{ "������", 49  },
//		{ "������", 49  },
//		{ "�ڻ�", 49  },
//	};
//
//	Human* pFriend; // Human Ÿ���� ��ü�� ����Ű�� ������(��� �� ���� ������ ����Ŵ)
//	pFriend = &arFriend[1]; // ������ �ʱ�ȭ �� arFriend[1]]�� �ּ� ����
//	pFriend->intro(); // intro�Լ� ȣ��
//}
//#include <stdio.h>
//
//class Time // Ŭ���� Time ����
//{
//private: // ����� ���� ������
//	int hour, min, sec; // ������ ������� hour,min,sec ����
//
//public: // ���� ���� ������
//	void SetTime(int h, int m, int s) { // ���簪�� �����ϴ� �Լ�
//		hour = h;
//		min = m;
//		sec = s;
//	}
//	void OutTime() { // ���簪�� ����ϴ� �Լ�(SetTime�� ���� ����, ���)
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now; // Time���� ��ü now ����
//
//	now.SetTime(12, 30, 40); // SetTime ��� �Լ� ȣ�� �� �ʱ�ȭ
//	now.OutTime(); // OutTime ��� �Լ� ȣ�� : ����ð� ���
//}
//#include <stdio.h>
//#include <string.h> // ���ڿ� ���� �Լ��� ����ϹǷ� string.h�� ����
//
//struct SHuman // ����ü SHuman ����
//{
//private: // ����� ���� ������
//	char name[12];
//	int age;
//
//public: // ���� ���� ������
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//	void setName(const char* newName) { //�̸��� �����ϴ� �޼��� ���� �� ����
//		if (strlen(newName) < 12) { // �μ��� ���޵� newName �̸��� ���̰� 12�� �̸��� ��쿡�� name���� �����ϰ�, �ƴ� ��쿡�� �����Ѵ�.
//			strcpy(name, newName);
//		}
//	}
//};
//
//int main()
//{
//	SHuman kim; // kim�� ����ü ���� �� �ʱ�ȭ
//	kim.intro(); // kim�� ���� ��� == �����Ⱚ ���
//}

//#include <stdio.h>
//
//class Date // Ŭ���� Date ����
//{
//private: // ����� ���� ������
//	int year,month,day; // ������ ������� ����
//
//public: // ���� ���� ������
//	void SetDate(int y, int m, int d) { // ��,��,���� ���� ����
//		year = y;
//		month = m;
//		day = d;
//	}
//	void OutDate() { // ���� ���� ����ϴ� �Լ�(SetDate�� ���� ����, ���)
//		printf("������ %d�� %d�� %d�� �Դϴ�.\n", year,month,day);
//	}
//};
//
//int main()
//{
//	Date today; // Date���� ��ü today ����
//
//	today.SetDate(2018,6,29); // SetDate ��� �Լ� ȣ�� �� �ʱ�ȭ
//	today.OutDate(); // OutDate ��� �Լ� ȣ�� : ���� ��¥ ���
//}
