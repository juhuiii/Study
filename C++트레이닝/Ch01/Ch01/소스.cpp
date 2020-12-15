//#include <stdio.h>
//#include "cursor.h" // 헤더파일 cursor 참조
//#pragma warning(disable:4996) // scanf 오류 방지
//
//class RandNum // 클래스 RandNum 선언
//{
//private: // 비공개 제한자(외부 변경 불가)
//	int num; // 정수형 변수 num 선언
//
//public: // 공개 제한자
//	RandNum() { randomize(); } // 난수생성 및 초기화
//	void Generate() { num = random(100) + 1; } // 난수 생성 (범위 1~100)
//	BOOL Compare(int input) { // input값에 따라 결과 반환
//		if (input == num) { // input값과 num 비교
//			printf("맞췄습니다.\n"); // 같다면, 문자열 출력
//			return TRUE; // True 반환
//		}
//		else if (input > num) { // input값과 num 비교
//			printf("입력한 숫자보다 더 작습니다.\n"); // 작다면, 문자열 출력
//		}
//		else { // input값과 num 비교
//			printf("입력한 숫자보다 더 큽니다.\n"); // 크다면, 문자열 출력
//		}
//		return FALSE; // False 반환
//	}
//};
//
//class Ask // 클래스 Ask 선언
//{
//private:
//	int input; // 정수형 변수 input 선언
//
//public:
//	void Prompt() { printf("\n제가 만든 숫자를 맞춰 보세요.\n"); } // 
//	BOOL AskUser() { // 참 거짓 판단 후이
//		printf("숫자를 입력하세요(끝낼 때는 999) : "); // 문자열 출력
//		scanf("%d", &input); // 사용자에게 숫자를 입력받음
//		if (input == 999) { // input값과 999 비교
//			return TRUE; // 999일 경우 True 반환
//		}
//		return FALSE; // 아닐경우 False 반환
//	}
//	int GetInput() { return input; }
//};
//
//int main()
//{
//	RandNum R; // 객체 R 선언
//	Ask A; // 객체 A 선언
//
//	for (;;) { // 반복
//		R.Generate(); // 1~100 범위의 난수 생성
//		A.Prompt(); // Ask 호출
//		for (;;) { // 반복
//			if (A.AskUser()) {
//				exit(0); // 만약 999일 경우 (True==0), 종료
//			}
//			if (R.Compare(A.GetInput())) { // Compare로 input값과 비교함
//				break; // 만약 False일 경우, 반복문 계속 반복됨
//			}
//		}
//	}
//}



//#include <stdio.h>
//
//int main()
//{
//	int age = 25; // 정수형 변수 age 정의, 초기화
//	bool isAdult = age > 19; // age가 19보다 크면(참이면) 아래 코드 실행
//	if (isAdult) {
//		puts("성인입니다.");
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	enum origin { EAST, WEST, SOUTH, NORTH }; // 열거형 태그 origin 설정
//	enum origin mark = WEST; // 변수선언
//	printf("%d 방향\n", mark); // mark값(WEST : 1) 출력
//
//	struct SHuman // 구조체 태그 SHuman 설정
//	{
//		char name[12]; // 구조체 멤버 정의
//		int age; // 구조체 멤버 정의
//		double height; // 구조체 멤버 정의
//	};
//	struct SHuman kim = { "김상형", 29, 181.4 }; // 구조체 변수 kim 선언
//	printf("이름 = %s, 나이 = %d\n", kim.name, kim.age); // 구조체 변수 kim의 name, age(멤버) 접근, 출력
//}
//#include <stdio.h>
//
//int main()
//{
//	int* pi; // 정수형 포인터 변수 pi 선언
//
//	pi = new int; // 정수형 변수 pi를 저장할 공간 확보
//	*pi = 123; // 포인터 변수 pi 선언
//	printf("*pi = %d\n", *pi); // *pi 출력
//	delete pi; // 할당 삭제 (new가 리턴한 포인터 전달)
//}
//#include <stdio.h>
//
//int main()
//{
//	int* ar; // 정수형 포인터 변수 ar 선언
//
//	ar = new int[5]; // 정수형 변수 다섯개를 저장할 20바이트의 공간 확보
//	for (int i = 0; i < 5; i++) {
//		ar[i] = i; // 배열 할당
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d번째 = %d\n", i, ar[i]); // 순서별 ar 출력
//	}
//	delete[] ar; // 할당 삭제 (new가 리턴한 포인터 전달)
//}
//#include <iostream> // cout의 기본 헤더 파일 iostream
//using namespace std; // 표준 C++ 라이브러리가 정의된 std 네임스페이스 사용 선언
//
//int main()
//{
//	cout << "First C++ Program" << endl; // 문자열 출력, endl==\n(개행)
//
//	int i = 56; // 정수형 변수 i 정의, 초기화
//	char ch = 'S'; // 문자형 변수 ch 정의, 초기화
//	double d = 2.414; // 실수형 변수 d 정의, 초기화
//
//	cout << i << ch << d << endl; // 정수, 실수, 문자열 출력
//}
//#include <iostream> // cout과 cin의 기본 헤더 파일 iostream
//using namespace std; // 표준 C++ 라이브러리가 정의된 std 네임스페이스 사용 선언
//
//int main()
//{
//	int age; // 정수형 변수 age 정의
//	cout << "나이를 입력하시오 : "; // 문자열 출력
//	cin >> age; // 정수 값을 입력받아 age로 보냄
//	cout << "당신은 " << age << "살입니다." << endl; // age와 문자열 출력
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 3; // 정수형 변수 i 정의, 초기화
//	int& ri = i; // 정수형 레퍼런스 ri 선언, 초기화
//
//
//	printf("i = %d, ri = %d\n", i, ri); // i와 ri 값 출력
//	ri++; // ri 값 증가
//	printf("i = %d, ri = %d\n", i, ri); // i와 ri 값 출력
//	printf("i번지 = %x, ri번지 = %x\n", &i, &ri); // i와 ri의 주소 계산, 출력
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 3, j = 7; // 정수형 변수 i,j 정의, 초기화
//	int& ri = i; // 정수형 레퍼런스 ri 선언, 초기화
//
//	printf("i=%d, ri=%d, j=%d\n", i, ri, j); // i,ri,j의 값 출력
//	ri = j; // ri의 별명은 i 이므로, i=j와 같음
//	printf("i=%d, ri=%d, j=%d\n", i, ri, j); // i,ri,j의 값 출력
//}
//#include <stdio.h>
//
//void plusref2(int& ra) // 레퍼런스를 인수로 받는 함수 plusref2 정의
//{
//	ra = ra + 1; // ra 값을 1 증가시킴
//}
//
//int main()
//{
//	int a = 5; // 정수형 변수 a 정의, 초기화
//
//	plusref2(a); // 함수 호출
//	printf("a = %d\n", a); // a 출력
//}
//#include <stdio.h>
//#include <malloc.h>
//#include <string.h> // 문자열 함수 헤더파일
//#pragma warning(disable:4996) // strcpy의 오류 방지
//
//void InputName(char *&Name) // 포인터의 레퍼런스를 인수로 받는 함수 InputName 정의
//{
//	Name = (char *)malloc(32); // Name에 문자형 32바이트를 저장할 공간 확보
//	strcpy(Name,"kim sang hyung"); // Kim sang hyung을 Name에 복사
//}
//
//int main()
//{
//	char *Name; // 문자형 포인터 변수 Name 선언
//
//	InputName(Name);
//	printf("이름은 %s입니다.\n", Name); // Name 출력
//	free(Name); // Name 할당 메모리 해제
//}
//#include <stdio.h>
//
//int ar[] = { 1,2,3,4,5 }; // 정수형 변수를 원소로 갖는 배열 ar 선언, 초기화
//
//int& GetAr(int i) // 함수 GetAr 정의
//{
//	return ar[i]; // ar배열에서 i번째 요소를 찾아 그 별명을 리턴
//}
//
//int main()
//{
//	GetAr(3) = 6; // GetAr(3) 배열요소에 6 대입
//	printf("ar[3] = %d\n", ar[3]); // ar[3] 출력
//}
//#include <stdio.h>
//
//int GetSum(int from, int to, int step = 1, int base = 0); // 함수 GetSum 정의
//
//int main()
//{
//	printf("%d\n", GetSum(1, 10)); // 1부터 10까지의 합계 출력
//	printf("%d\n", GetSum(1, 10, 2)); // 1부터 2씩 건너뛰어 10까지의 합계 출력
//	printf("%d\n", GetSum(1, 10, 2, 10)); // 10을 기본으로 하여, 1부터 2씩 건너뛰어 10까지의 합계 출력
//}
//
//int GetSum(int from, int to, int step/* = 1*/, int base/* = 0*/) // 함수 GetSum 정의
//{
//	int sum = base; // base에 from ~ to의 합계를 더하되, step 단위로 건너뜀
//	for (int i = from; i <= to; i += step) {
//		sum += i;
//	}
//	return sum; // sum을 리턴
//}
//#include <stdio.h>
//
//int Add(int a, int b); // 두 개의 정수형 인수를 가지는 함수 Add 정의
//int Add(int a, int b, int c); // 세 개의 정수형 인수를 가지는 함수 Add 정의
//double Add(double a, double b); // 두 개의 실수형 인수를 가지는 함수 Add 정의
//
//int main()
//{
//	printf("1 + 2 = %d\n", Add(1, 2)); // 1 + 2 출력
//	printf("3 + 4 + 5 = %d\n", Add(3, 4, 5)); // 3 + 4 + 5 출력
//	printf("1.414 + 2.54 = %f\n", Add(1.414, 2.54)); // 1.414 + 2.54 출력
//}
//
//int Add(int a, int b)
//{
//	return a + b; // a + b를 리턴
//}
//
//int Add(int a, int b, int c)
//{
//	return a + b + c; // a + b + c를 리턴
//}
//
//double Add(double a, double b)
//{
//	return a + b; // a + b를 리턴
//}
//#include <stdio.h>
//
//void sub(int a) { printf("int : %d\n", a); } // 정수형 인수를 받는 함수 sub 정의
//void sub(int* a) { printf("pointer : %p\n", a); } // 정수형 포인터를 인수로 받는 함수 sub 정의
//
//int main()
//{
//	int i = 1234, * pi = &i; // 정수형 변수 i 정의, 초기화
//
//	sub(i); // 함수 호출
//	sub(pi); // 함수 호출
//	sub(NULL); // 이때 NULL은 정수 0으로도, 포인터로도 볼 수 있으나 컴파일러는 정수로 해석
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int randfunc(int n) // 정수형 인수를 가지는 함수 randfuc 정의
//{
//	return rand() % n; // n보다 작은 하나의 난수 생성하여 돌려줌
//}
//
//int main()
//{
//	int i, j, k; // 정수형 변수 i,j,k 선언
//
//	i = randfunc(10); // 10보다 작은 하나의 난수 생성
//	j = randfunc(100); // 100보다 작은 하나의 난수 생성
//	k = randfunc(50); // 50보다 작은 하나의 난수 생성
//	printf("난수 = %d,%d,%d\n", i, j, k); // i,j,k 출력
//}
#include <stdio.h>

int main(void)
{
	double* ar; // 실수형 포인터 ar 선언

	ar = new double[100]; // 크기가 100인 실수형 배열 할당
	ar[50] = 3.14; // 50번째 요소에 3.14 대입
	printf("%f\n", ar[50]); // 50번째 요소 출력
	delete[] ar; // 할당메모리 해제
}