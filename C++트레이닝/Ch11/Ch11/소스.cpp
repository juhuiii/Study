//#include <stdio.h>
//
//namespace A { // 네임스페이스 A 선언
//	double value; // A 소속의 value
//}
//
//namespace B { // 네임스페이스 A 선B
//	int value; // B 소속의 value
//}
//
//int main()
//{
//	A::value = 12.345; // 네임스페이스에 속한 명칭을 참조할 때는 :: 연산자 앞에 소속을 밝힌다.
//	B::value = 123;
//}
////#include <stdio.h>
//
//int value;					// 전역 네임 스페이스 소속
//namespace A {
//	int value;				// A 소속
//}
//
//int main()
//{
//	int value;				// main 소속
//
//	value = 1;				// 지역 변수 value
//	::value = 2;			// 전역 네임 스페이스의 value
//	A::value = 3;			// A 네임 스페이스의 value
//} // 이름만 쓰면 지역 변수이고, 네임 스페이스를 밝히면 해당 소속의 변수이며, 전역 네임스페이스는 이름이 없어 :: 연산자만 붙임
//#include <stdio.h>
//
//namespace UTIL { // 네임스페이스 UTIL 소속
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//using namespace UTIL; // using 지시자 : 지정한 네임스페이스의 모든 명칭을 현재 영역으로 가져와 소속을 밝히지 않고 바로 사용할 수 있도록 함
//
//int main()
//{
//	value = 3;
//	score = 1.2345;
//	sub();
//} // using 지시자로 UTIL 네임스페이스를 사용
//#include <stdio.h>
//
//namespace UTIL { // 네임스페이스 UTIL 소속
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int main()
//{
//	using UTIL::value; // value에 대한 using 선언 (maing에서만)
//
//	value = 3;
//	UTIL::score = 1.2345;
//	UTIL::sub();
//} // score와 sub는 별도의 선언이 없으므로 소속을 밝혀야함
//
//void mysub()
//{
//	UTIL::value = 5; // using UTIL::value에 대한 선언이 main 함수 내부에 있기에 참조해야함
//}
//#include <stdio.h>
//
//namespace UTIL { // 네임스페이스 UTIL 소속
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int value;
//int main()
//{
//	using UTIL::value;
//	int value = 5;			// 에러
//
//	value = 1;				// UTIL의 value
//	::value = 2;			// 전역 변수 value
//} // using 선언에 의한 모호함이 발생하여 에러 처리됨
//#include <stdio.h>
//
//namespace UTIL { // 네임스페이스 UTIL 소속
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int value;
//int main()
//{
//	using namespace UTIL;
//	int value = 5;			// 지역 변수 선언
//
//	value = 1;				// 지역 변수 value
//	::value = 2;			// 전역 변수 value
//	UTIL::value = 3;		// UTIL의 value
//
//	score = 1.2345;
//}
//#include <stdio.h>
//
//namespace A { // 네임스페이스 A
//	double value;
//}
//
//namespace B { // 네임스페이스 B
//	int value;
//}
//
//int main()
//{
//	using namespace A;
//	using namespace B;
//
//	value = 3;				// 모호하다는 에러 발생
//} // 네임스페이스 A,B를 다 가져오며 각 영역에 있는 value가 main블록으로 들어오고, value의 소속이 모호하기 때문에 에러 발생
