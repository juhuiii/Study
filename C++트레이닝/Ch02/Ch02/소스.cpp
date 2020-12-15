//#include <stdio.h>
//
//struct SHuman // 구조체 SHuman 선언
//{
//	char name[12]; // char형식의 name 배열 선언(크기 12byte)
//	int age; // 정수형 변수 age 선언
//};
//
//void IntroHuman(SHuman who) // IntroHuman함수 선언
//{
//	printf("이름 = %s, 나이 = %d\n", who.name, who.age);
//}
//
//int main()
//{
//	SHuman kim = { "김상형", 29 }; // kim의 구조체 선언 및 초기화
//	IntroHuman(kim); // /IntroHuman함수 호출(인수 : kim)
//}
////#include <stdio.h>
//
//struct SHuman // 구조체 SHuman 선언
//{
//	char name[12]; // char형식의 name 배열 선언(크기 12byte)
//	int age; // 정수형 변수 age 선언
//
//	void intro() { // 멤버함수 선언 및 정의
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	SHuman kim = { "김상형", 29 }; // kim의 구조체 선언 및 초기화
//	kim.intro(); // kim의 정보 출력
//}
//#include <stdio.h>
//
//struct SHuman // 구조체 SHuman 선언
//{
//	char name[12]; // char형식의 name 배열 선언(크기 12byte)
//	int age; // 정수형 변수 age 선언
//
//	void intro();				// 원형 선언
//};
//
//void SHuman::intro()			// 본체 정의 (intro 함수를 외부에 정의)
//{
//	printf("이름 = %s, 나이 = %d\n", name, age);
//}
//
//int main()
//{
//	SHuman kim = { "김상형", 29 }; // kim의 구조체 선언 및 초기화
//	kim.intro(); // kim의 정보 출력
//}
//#include <stdio.h>
//
//struct SHuman // 구조체 SHuman 선언
//{
//private: // 비공개 접근 제한자 (외부엑세스 불가)
//	char name[12];
//	int age;
//
//public: // 공개 접근 제한자 (외부 공개, 자유롭게 호출 가능)
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	SHuman kim; // kim의 구조체 선언 및 초기화
//	//kim.age = 286; // age는 private를 통해 비공개되어 액세스가 불가하다.
//	kim.intro(); // kim의 정보 출력 == 쓰레기값 출력
//}
//#include <stdio.h>
//
//class Human // 클래스 Human 선언
//{
//public: // 공개 접근 제한자 (외부 공개, 자유롭게 호출 가능)
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human kim = { "김상형", 29 };
//	kim.intro();
//}
//#include <stdio.h>
//
//class Human // 클래스 Human 선언
//{
//public: // 공개 접근 연산자
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human arFriend[10] = { // Human 타입으로 크기 10의 배열인 arFriend 선언 및 초기화
//		{ "문동욱", 49  },
//		{ "김유진", 49  },
//		{ "박상막", 49  },
//	};
//
//	Human* pFriend; // Human 타입의 객체를 가리키는 포인터(사람 한 명의 정보를 가리킴)
//	pFriend = &arFriend[1]; // 포인터 초기화 및 arFriend[1]]의 주소 대입
//	pFriend->intro(); // intro함수 호출
//}
//#include <stdio.h>
//
//class Time // 클래스 Time 선언
//{
//private: // 비공개 접근 연산자
//	int hour, min, sec; // 정수형 멤버변수 hour,min,sec 선언
//
//public: // 공개 접근 연산자
//	void SetTime(int h, int m, int s) { // 현재값을 설정하는 함수
//		hour = h;
//		min = m;
//		sec = s;
//	}
//	void OutTime() { // 현재값을 출력하는 함수(SetTime의 값을 저장, 출력)
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now; // Time형의 객체 now 선언
//
//	now.SetTime(12, 30, 40); // SetTime 멤버 함수 호출 및 초기화
//	now.OutTime(); // OutTime 멤버 함수 호출 : 현재시간 출력
//}
//#include <stdio.h>
//#include <string.h> // 문자열 관련 함수를 사용하므로 string.h를 포함
//
//struct SHuman // 구조체 SHuman 선언
//{
//private: // 비공개 접근 제한자
//	char name[12];
//	int age;
//
//public: // 공개 접근 제한자
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//	void setName(const char* newName) { //이름을 변경하는 메서드 선언 및 정의
//		if (strlen(newName) < 12) { // 인수로 전달된 newName 이름의 길이가 12자 미만일 경우에만 name으로 복사하고, 아닐 경우에는 무시한다.
//			strcpy(name, newName);
//		}
//	}
//};
//
//int main()
//{
//	SHuman kim; // kim의 구조체 선언 및 초기화
//	kim.intro(); // kim의 정보 출력 == 쓰레기값 출력
//}

//#include <stdio.h>
//
//class Date // 클래스 Date 선언
//{
//private: // 비공개 접근 연산자
//	int year,month,day; // 정수형 멤버변수 선언
//
//public: // 공개 접근 연산자
//	void SetDate(int y, int m, int d) { // 년,월,일을 각각 선언
//		year = y;
//		month = m;
//		day = d;
//	}
//	void OutDate() { // 현재 값을 출력하는 함수(SetDate의 값을 저장, 출력)
//		printf("오늘은 %d년 %d월 %d일 입니다.\n", year,month,day);
//	}
//};
//
//int main()
//{
//	Date today; // Date형의 객체 today 선언
//
//	today.SetDate(2018,6,29); // SetDate 멤버 함수 호출 및 초기화
//	today.OutDate(); // OutDate 멤버 함수 호출 : 현재 날짜 출력
//}
