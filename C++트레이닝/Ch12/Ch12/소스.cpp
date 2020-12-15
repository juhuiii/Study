//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1234;
//
//	hex(cout); // 16진수로 출력
//	cout << i << endl; // 출력
//
//	cout << "8진수 : " << oct << i << endl; // 8진수로 출력
//	cout << "16진수 : " << hex << i << endl; // 16진수로 출력
//	cout << "10진수 : " << dec << i << endl; // 10진수로 출력
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1234;
//	int j = -567;
//
//	// 출력폭 지정 : width 함수
//	cout << i << endl; // 출력
//	cout.width(10); // 10자리 차지
//	cout << i << endl; // 출력
//	cout.width(2); // 직후의 출력에 딱 한 번 적용, 출력 후 원래 설정으로 복귀
//	cout << i << endl; // 출력
//
//	// 채움 문자 지정
//	cout.width(10);
//	cout.fill('_');
//	cout << i << endl;
//	cout.fill(' ');
//
//	// 정렬 지정
//	cout.width(20);
//	cout << left << j << endl; // 왼쪽정렬
//	cout.width(20);
//	cout << right << j << endl; // 오른쪽정렬
//	cout.width(20);
//	cout << internal << j << endl; // 부호나 진법 표시는 왼쪽에, 숫자는 오른쪽에 출력
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double d = 1.234;
//
//	// 실수의 정밀도 지정
//	cout << d << endl; // 출력
//	cout.precision(3); // 전체 출력 자릿수를 지정 : 자릿수보다 긴 값은 반올림
//	cout << d << endl; // 출력
//	cout.precision(10);
//	cout << showpoint << d << endl; // showpoint 조정자 : 뒤쪽에 0을 붙임
//	cout.precision(6);
//
//	// 실수 출력 방식
//	cout << fixed << d << endl; // fixed 조정자 : 고정 소수점 방식으로 출력
//	cout << scientific << d << endl; // scientific 조정자 : 부동 소수점 방식으로 출력
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1234;
//	double d = 56.789;
//	const char* str = "String";
//	bool b = true;
//
//	// bool형 출력 방식
//	cout << b << endl;
//	cout << boolalpha << b << endl;
//
//	// 진법 접두 출력 및 대소문자
//	cout << hex << i << endl; // 16진수 출력
//	cout << showbase << i << endl; // 진법 출력
//	cout << uppercase << i << endl; // 대문자로 ㅊㄹ력
//
//	// + 양수 기호 표시
//	cout << dec << showpos << i << endl;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//	char str[128];
//
//	cin >> i; // i의 값 입력받음
//	cout << i << endl; // 출력
//	cin >> str; // str 값 입력받음
//	cout << str << endl; // 출력
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	char str[128];
//
//	cin.get(ch); // 문자를 입력받라 리턴해 주는 버전
//	cout << ch << endl;
//	cin.get(ch);
//
//	cin.getline(str, 128); // 배열의 크기를 전달받아 범위를 넘지 않도록 함
//	cout << str << endl; // 출력
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//
//	if (cin >> i) { // 정수를 입력받을 경우
//		cout << i << endl; // i 출력
//	}
//	else { // 정수를 입력받되 숫자가 아닌 엉뚱한 문자가 입력되면 실패메시지 출력
//		cout << "실패" << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//
//	cin >> i;
//	if (cin.good()) { // 에러 플래그 조사 후 정수 입력 성공 여부를 조사
//		cout << i << endl;
//	}
//	else { // 정수를 입력받되 숫자가 아닌 엉뚱한 문자가 입력되면 실패메시지 출력
//		cout << "실패" << endl;
//	}
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ofstream f; // 객체 ofstream 생성
//
//	f.open("c:\\temp\\cpptest.txt"); // 파일 오픈
//	if (f.is_open()) { // 오픈 성공 여부 조사
//		f << "String " << 1234 << endl; // 오픈 성공시 출력
//		f.close(); // 파일 닫음
//	}
//	else {
//		cout << "파일 열기 실패" << endl; // 출력
//	}
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ifstream f; // 입력 객체 생성
//	char str[128];
//	int i;
//
//	f.open("c:\\temp\\cpptest.txt"); // 파일 오픈
//	if (f.is_open()) { // 오픈 성공 여부 조사
//		f >> str >> i; // >> 연산자로 변수에 대입
//		cout << str << i << endl; // 오픈 성공시 출력
//		f.close(); // 파일 닫음
//	}
//	else {
//		cout << "파일 열기 실패" << endl; // 출력
//	}
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("test");
//	string s2(s1); // 복사 생성자 : 깊은 복사 후 개별적인 문자열 생성
//	string s3; // 디폴트 생성자
//	string s4(10, 'S'); // 같은 문자를 원하는 횟수만큼 반복
//	string s5("very nice day", 8); // 문자열 상수에서 일부만을 취함
//	const char* str = "abcdefghijklmnopqrstuvwxyz";
//	string s6(str + 5, str + 10); // 다른 문자열의 일정 범위에서 문자열 추출
//
//	cout << "s1=" << s1 << endl;
//	cout << "s2=" << s2 << endl;
//	cout << "s3=" << s3 << endl;
//	cout << "s4=" << s4 << endl;
//	cout << "s5=" << s5 << endl;
//	cout << "s6=" << s6 << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("C++ string");
//
//	cout << s << " 문자열의 길이 = " << s.size() << endl; // 문자열의 길이 출력
//	cout << s << " 문자열의 길이 = " << s.length() << endl; // 문자열의 길이 출력
//	cout << s << " 문자열의 할당 크기 = " << s.capacity() << endl; // 문자열의 할당 크기 출력
//	cout << s << " 문자열의 최대 길이 = " << s.max_size() << endl; // 문자열의 최대 길이 출력
//
//	s.resize(6); // 할당량 강제 변경
//	cout << s << " 길이 = " << s.size() << ",할당 크기 = " << s.capacity() << endl;
//
//	s.reserve(100); // 여유분까지 고려하여 메모리를 미리 확보
//	cout << s << " 길이 = " << s.size() << ",할당 크기 = " << s.capacity() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("char array");
//
//	cout << s.data() << endl; // 단순 문자열 리턴
//	cout << s.c_str() << endl; // 단순 문자열 리턴
//
//	char str[128];
//	strcpy(str, s.c_str()); // 문자열 객체의 c_str 함수가 리턴한 포인트 복사
//	printf("str = %s\n", str); // 출력
//}
////#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name, addr;
//
//	cout << "이름을 입력하시오 : "; // 출력
//	cin >> name; // 입력받음
//	cout << "입력한 이름은 " << name << "입니다." << endl; // 출력
//	cin.ignore(); // 버퍼 비움
//	cout << "주소를 입력하시오 : "; // 출력
//	getline(cin, addr); // 입력이 한 행일때
//	cout << "입력한 주소는 " << addr << "입니다." << endl; // 출력
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("korea");
//	size_t len; // 함수의 길이 조사
//
//	len = s.size();
//	for (int i = 0; i < len; i++) {
//		cout << s[i]; // 루프를 돌며 s[i]의 문자 출력
//	}
//	cout << endl;
//	s[0] = 'c'; // 문자 변경
//
//	for (int i = 0; i < len; i++) {
//		cout << s.at(i); // 문자열의 개별 문자 액세스
//	}
//	cout << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("야호 신난다.");
//	string s2;
//
//	s2 = "임의의 문자열";
//	cout << s2 << endl; // s2 출력
//	s2 = s1; // s2의 값에 s1 대입
//	cout << s2 << endl; // s2 출력
//	s2 = 'A';
//	cout << s2 << endl; // s2 출력
//
//	s1 += "문자열 연결.";
//	cout << s1 << endl;
//	s1 += s2;
//	cout << s1 << endl;
//	s1 += '!';
//	cout << s1 << endl;
//
//	string s3; // 변수 선언
//	s3 = "s1:" + s1 + "s2:" + s2 + '.';
//	cout << s3 << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("1234567890");
//	string s2("abcdefghijklmnopqrstuvwxyz");
//	string s3;
//
//	s3.assign(s1, 3, 4); // s3은 s1의 일부를 대입받음
//	cout << s3 << endl;
//	s3.append(s2, 10, 7); // s3은 s2의 일부를 연결함
//	cout << s3 << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("1234567890");
//	string s2("^_^");
//
//	cout << s1 << endl;
//	s1.insert(5, "XXX"); // s1의 5번째에 XXX 삽입
//	cout << s1 << endl; // 출력
//	s1.insert(5, s2); // s1의 5번째에 s2 삽입
//	cout << s1 << endl; // 출력
//	s1.erase(5, 6); // s1의 5번부터 6글자 지우기
//	cout << s1 << endl; // 출력
//}
////#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1 = "독도는 일본땅";
//
//	cout << s1 << endl;
//	s1.replace(7, 4, "대한민국"); // s1의 7번째부터 4자리 대체
//	cout << s1 << endl; // 출력
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("123456789");
//	string s2 = s1.substr(3, 4); // s1의 세 번째 문자에서부터 길이 4만큼을 취해 s2를 만듦
//
//	cout << "s1:" << s1 << endl;
//	cout << "s2:" << s2 << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("aaa");
//	string s2("bbb");
//
//	cout << (s1 == s1 ? "같다" : "다르다") << endl; // 같을 경우 같다, 다를 경우 다르다 출력
//	cout << (s1 == s2 ? "같다" : "다르다") << endl; // 같을 경우 같다, 다를 경우 다르다 출력
//	cout << (s1 > s2 ? "크다" : "안크다") << endl; // s1이 더 클 경우 크다, s2가 더 클 경우 안크다 출력
//
//	string s3("1234567");
//	string s4("1234999");
//	cout << (s3.compare(s4) == 0 ? "같다" : "다르다") << endl; // 같을 경우 같다, 다를 경우 다르다 출력
//	cout << (s3.compare(0, 4, s4, 0, 4) == 0 ? "같다" : "다르다") << endl; // 같을 경우 같다, 다를 경우 다르다 출력
//
//	string s5("hongkildong");
//	cout << (s5 == "hongkildong" ? "같다" : "다르다") << endl; // 같을 경우 같다, 다를 경우 다르다 출력
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("string class find function");
//	string s2("func");
//
//	cout << "i:" << s1.find('i') << "번째" << endl; // 선두부터 i 찾기
//	cout << "i:" << s1.find('i', 10) << "번째" << endl; // 10번째 위치부터 i 찾기
//	cout << "ass:" << s1.find("ass") << "번째" << endl; // 선두부터 ass 찾기
//	cout << "finding의 앞 4:" << s1.find("finding", 0, 4) << "번째" << endl; //finding 선두부터 4글자 찾기
//	cout << "kiss:" << s1.find("kiss") << "번째" << endl; // 검색 불가
//	cout << s2 << ':' << s1.find(s2) << "번째" << endl; // s1에서 s2 찾기
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("starcraft");
//	string s2("123abc456");
//	string moum("aeiou");
//	string num("0123456789");
//
//	cout << "순방향 t:" << s1.find('t') << "번째" << endl; // s1선두부터 t 찾기
//	cout << "역방향 t:" << s1.rfind('t') << "번째" << endl; // 역방향으로 t 찾기
//	cout << "역방향 cra:" << s1.rfind("cra") << "번째" << endl; // 역방향으로 cra 찾기
//	cout << "최초의 모음" << s1.find_first_of(moum) << "번째" << endl; // moum의 전달된 첫 문자의 위치
//	cout << "최후의 모음" << s1.find_last_of(moum) << "번째" << endl; // moum의 전달된 마지막 문자의 위치
//	cout << "최초의 비숫자" << s2.find_first_not_of(num) << "번째" << endl; // moum의 전달된 일치하지 않는 첫 문자의 위치
//	cout << "최후의 비숫자" << s2.find_last_not_of(num) << "번째" << endl; // moum의 전달된 일치하지 않는 마지막 문자의 위치
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double* rate; // 실수형 포인터 rate 선언
//
//	rate = new double; // 동적할당
//	*rate = 3.1415; // 실수 저장
//	cout << *rate << endl; // 
//	//delete rate;
//}
//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main()
//{
//	auto_ptr<double> rate(new double); // rate : 실수형 포인터를 감싸는 래퍼 객체
//
//	*rate = 3.1415;
//	cout << *rate << endl;
//} // 단순 포인터는 파괴자가 없지만 포인터를 감싼 auto_ptr은 객체이므로 파괴자가 자동으로 호출됨 : main 함수가 종료될 때 파괴자가 호출
//#include <string>
//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main()
//{
//	auto_ptr<string> pStr(new string("AutoPtr Test"));
//
//	cout << *pStr << endl;
//} // main이 종료될 때 지역 객체인 pStr이 파괴되며 파괴자가 호출됨//#include <string>
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class myptr
//{
//private:
//	T* p;
//
//public:
//	explicit myptr(T* ap) : p(ap) { } // T 타입의 포인터를 감싸는 myptr 클래스
//	~myptr() { delete p; } // myptr 파괴자 호출
//	T& operator *() const { return *p; } // 내부에 저장된 p의 대상체를 읽어 리턴
//	T* operator ->() const { return p; } // 포인터를 리턴
//};
//
//int main()
//{
//	myptr<string> pStr(new string("AutoPtr Test"));
//
//	cout << *pStr << endl;
//	cout << "길이 = " << pStr->size() << endl;
//}