//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1234;
//
//	hex(cout); // 16������ ���
//	cout << i << endl; // ���
//
//	cout << "8���� : " << oct << i << endl; // 8������ ���
//	cout << "16���� : " << hex << i << endl; // 16������ ���
//	cout << "10���� : " << dec << i << endl; // 10������ ���
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1234;
//	int j = -567;
//
//	// ����� ���� : width �Լ�
//	cout << i << endl; // ���
//	cout.width(10); // 10�ڸ� ����
//	cout << i << endl; // ���
//	cout.width(2); // ������ ��¿� �� �� �� ����, ��� �� ���� �������� ����
//	cout << i << endl; // ���
//
//	// ä�� ���� ����
//	cout.width(10);
//	cout.fill('_');
//	cout << i << endl;
//	cout.fill(' ');
//
//	// ���� ����
//	cout.width(20);
//	cout << left << j << endl; // ��������
//	cout.width(20);
//	cout << right << j << endl; // ����������
//	cout.width(20);
//	cout << internal << j << endl; // ��ȣ�� ���� ǥ�ô� ���ʿ�, ���ڴ� �����ʿ� ���
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double d = 1.234;
//
//	// �Ǽ��� ���е� ����
//	cout << d << endl; // ���
//	cout.precision(3); // ��ü ��� �ڸ����� ���� : �ڸ������� �� ���� �ݿø�
//	cout << d << endl; // ���
//	cout.precision(10);
//	cout << showpoint << d << endl; // showpoint ������ : ���ʿ� 0�� ����
//	cout.precision(6);
//
//	// �Ǽ� ��� ���
//	cout << fixed << d << endl; // fixed ������ : ���� �Ҽ��� ������� ���
//	cout << scientific << d << endl; // scientific ������ : �ε� �Ҽ��� ������� ���
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
//	// bool�� ��� ���
//	cout << b << endl;
//	cout << boolalpha << b << endl;
//
//	// ���� ���� ��� �� ��ҹ���
//	cout << hex << i << endl; // 16���� ���
//	cout << showbase << i << endl; // ���� ���
//	cout << uppercase << i << endl; // �빮�ڷ� ������
//
//	// + ��� ��ȣ ǥ��
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
//	cin >> i; // i�� �� �Է¹���
//	cout << i << endl; // ���
//	cin >> str; // str �� �Է¹���
//	cout << str << endl; // ���
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	char str[128];
//
//	cin.get(ch); // ���ڸ� �Է¹޶� ������ �ִ� ����
//	cout << ch << endl;
//	cin.get(ch);
//
//	cin.getline(str, 128); // �迭�� ũ�⸦ ���޹޾� ������ ���� �ʵ��� ��
//	cout << str << endl; // ���
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//
//	if (cin >> i) { // ������ �Է¹��� ���
//		cout << i << endl; // i ���
//	}
//	else { // ������ �Է¹޵� ���ڰ� �ƴ� ������ ���ڰ� �ԷµǸ� ���и޽��� ���
//		cout << "����" << endl;
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
//	if (cin.good()) { // ���� �÷��� ���� �� ���� �Է� ���� ���θ� ����
//		cout << i << endl;
//	}
//	else { // ������ �Է¹޵� ���ڰ� �ƴ� ������ ���ڰ� �ԷµǸ� ���и޽��� ���
//		cout << "����" << endl;
//	}
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ofstream f; // ��ü ofstream ����
//
//	f.open("c:\\temp\\cpptest.txt"); // ���� ����
//	if (f.is_open()) { // ���� ���� ���� ����
//		f << "String " << 1234 << endl; // ���� ������ ���
//		f.close(); // ���� ����
//	}
//	else {
//		cout << "���� ���� ����" << endl; // ���
//	}
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ifstream f; // �Է� ��ü ����
//	char str[128];
//	int i;
//
//	f.open("c:\\temp\\cpptest.txt"); // ���� ����
//	if (f.is_open()) { // ���� ���� ���� ����
//		f >> str >> i; // >> �����ڷ� ������ ����
//		cout << str << i << endl; // ���� ������ ���
//		f.close(); // ���� ����
//	}
//	else {
//		cout << "���� ���� ����" << endl; // ���
//	}
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("test");
//	string s2(s1); // ���� ������ : ���� ���� �� �������� ���ڿ� ����
//	string s3; // ����Ʈ ������
//	string s4(10, 'S'); // ���� ���ڸ� ���ϴ� Ƚ����ŭ �ݺ�
//	string s5("very nice day", 8); // ���ڿ� ������� �Ϻθ��� ����
//	const char* str = "abcdefghijklmnopqrstuvwxyz";
//	string s6(str + 5, str + 10); // �ٸ� ���ڿ��� ���� �������� ���ڿ� ����
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
//	cout << s << " ���ڿ��� ���� = " << s.size() << endl; // ���ڿ��� ���� ���
//	cout << s << " ���ڿ��� ���� = " << s.length() << endl; // ���ڿ��� ���� ���
//	cout << s << " ���ڿ��� �Ҵ� ũ�� = " << s.capacity() << endl; // ���ڿ��� �Ҵ� ũ�� ���
//	cout << s << " ���ڿ��� �ִ� ���� = " << s.max_size() << endl; // ���ڿ��� �ִ� ���� ���
//
//	s.resize(6); // �Ҵ緮 ���� ����
//	cout << s << " ���� = " << s.size() << ",�Ҵ� ũ�� = " << s.capacity() << endl;
//
//	s.reserve(100); // �����б��� ����Ͽ� �޸𸮸� �̸� Ȯ��
//	cout << s << " ���� = " << s.size() << ",�Ҵ� ũ�� = " << s.capacity() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("char array");
//
//	cout << s.data() << endl; // �ܼ� ���ڿ� ����
//	cout << s.c_str() << endl; // �ܼ� ���ڿ� ����
//
//	char str[128];
//	strcpy(str, s.c_str()); // ���ڿ� ��ü�� c_str �Լ��� ������ ����Ʈ ����
//	printf("str = %s\n", str); // ���
//}
////#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name, addr;
//
//	cout << "�̸��� �Է��Ͻÿ� : "; // ���
//	cin >> name; // �Է¹���
//	cout << "�Է��� �̸��� " << name << "�Դϴ�." << endl; // ���
//	cin.ignore(); // ���� ���
//	cout << "�ּҸ� �Է��Ͻÿ� : "; // ���
//	getline(cin, addr); // �Է��� �� ���϶�
//	cout << "�Է��� �ּҴ� " << addr << "�Դϴ�." << endl; // ���
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("korea");
//	size_t len; // �Լ��� ���� ����
//
//	len = s.size();
//	for (int i = 0; i < len; i++) {
//		cout << s[i]; // ������ ���� s[i]�� ���� ���
//	}
//	cout << endl;
//	s[0] = 'c'; // ���� ����
//
//	for (int i = 0; i < len; i++) {
//		cout << s.at(i); // ���ڿ��� ���� ���� �׼���
//	}
//	cout << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("��ȣ �ų���.");
//	string s2;
//
//	s2 = "������ ���ڿ�";
//	cout << s2 << endl; // s2 ���
//	s2 = s1; // s2�� ���� s1 ����
//	cout << s2 << endl; // s2 ���
//	s2 = 'A';
//	cout << s2 << endl; // s2 ���
//
//	s1 += "���ڿ� ����.";
//	cout << s1 << endl;
//	s1 += s2;
//	cout << s1 << endl;
//	s1 += '!';
//	cout << s1 << endl;
//
//	string s3; // ���� ����
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
//	s3.assign(s1, 3, 4); // s3�� s1�� �Ϻθ� ���Թ���
//	cout << s3 << endl;
//	s3.append(s2, 10, 7); // s3�� s2�� �Ϻθ� ������
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
//	s1.insert(5, "XXX"); // s1�� 5��°�� XXX ����
//	cout << s1 << endl; // ���
//	s1.insert(5, s2); // s1�� 5��°�� s2 ����
//	cout << s1 << endl; // ���
//	s1.erase(5, 6); // s1�� 5������ 6���� �����
//	cout << s1 << endl; // ���
//}
////#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1 = "������ �Ϻ���";
//
//	cout << s1 << endl;
//	s1.replace(7, 4, "���ѹα�"); // s1�� 7��°���� 4�ڸ� ��ü
//	cout << s1 << endl; // ���
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1("123456789");
//	string s2 = s1.substr(3, 4); // s1�� �� ��° ���ڿ������� ���� 4��ŭ�� ���� s2�� ����
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
//	cout << (s1 == s1 ? "����" : "�ٸ���") << endl; // ���� ��� ����, �ٸ� ��� �ٸ��� ���
//	cout << (s1 == s2 ? "����" : "�ٸ���") << endl; // ���� ��� ����, �ٸ� ��� �ٸ��� ���
//	cout << (s1 > s2 ? "ũ��" : "��ũ��") << endl; // s1�� �� Ŭ ��� ũ��, s2�� �� Ŭ ��� ��ũ�� ���
//
//	string s3("1234567");
//	string s4("1234999");
//	cout << (s3.compare(s4) == 0 ? "����" : "�ٸ���") << endl; // ���� ��� ����, �ٸ� ��� �ٸ��� ���
//	cout << (s3.compare(0, 4, s4, 0, 4) == 0 ? "����" : "�ٸ���") << endl; // ���� ��� ����, �ٸ� ��� �ٸ��� ���
//
//	string s5("hongkildong");
//	cout << (s5 == "hongkildong" ? "����" : "�ٸ���") << endl; // ���� ��� ����, �ٸ� ��� �ٸ��� ���
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
//	cout << "i:" << s1.find('i') << "��°" << endl; // ���κ��� i ã��
//	cout << "i:" << s1.find('i', 10) << "��°" << endl; // 10��° ��ġ���� i ã��
//	cout << "ass:" << s1.find("ass") << "��°" << endl; // ���κ��� ass ã��
//	cout << "finding�� �� 4:" << s1.find("finding", 0, 4) << "��°" << endl; //finding ���κ��� 4���� ã��
//	cout << "kiss:" << s1.find("kiss") << "��°" << endl; // �˻� �Ұ�
//	cout << s2 << ':' << s1.find(s2) << "��°" << endl; // s1���� s2 ã��
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
//	cout << "������ t:" << s1.find('t') << "��°" << endl; // s1���κ��� t ã��
//	cout << "������ t:" << s1.rfind('t') << "��°" << endl; // ���������� t ã��
//	cout << "������ cra:" << s1.rfind("cra") << "��°" << endl; // ���������� cra ã��
//	cout << "������ ����" << s1.find_first_of(moum) << "��°" << endl; // moum�� ���޵� ù ������ ��ġ
//	cout << "������ ����" << s1.find_last_of(moum) << "��°" << endl; // moum�� ���޵� ������ ������ ��ġ
//	cout << "������ �����" << s2.find_first_not_of(num) << "��°" << endl; // moum�� ���޵� ��ġ���� �ʴ� ù ������ ��ġ
//	cout << "������ �����" << s2.find_last_not_of(num) << "��°" << endl; // moum�� ���޵� ��ġ���� �ʴ� ������ ������ ��ġ
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double* rate; // �Ǽ��� ������ rate ����
//
//	rate = new double; // �����Ҵ�
//	*rate = 3.1415; // �Ǽ� ����
//	cout << *rate << endl; // 
//	//delete rate;
//}
//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main()
//{
//	auto_ptr<double> rate(new double); // rate : �Ǽ��� �����͸� ���δ� ���� ��ü
//
//	*rate = 3.1415;
//	cout << *rate << endl;
//} // �ܼ� �����ʹ� �ı��ڰ� ������ �����͸� ���� auto_ptr�� ��ü�̹Ƿ� �ı��ڰ� �ڵ����� ȣ��� : main �Լ��� ����� �� �ı��ڰ� ȣ��
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
//} // main�� ����� �� ���� ��ü�� pStr�� �ı��Ǹ� �ı��ڰ� ȣ���//#include <string>
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
//	explicit myptr(T* ap) : p(ap) { } // T Ÿ���� �����͸� ���δ� myptr Ŭ����
//	~myptr() { delete p; } // myptr �ı��� ȣ��
//	T& operator *() const { return *p; } // ���ο� ����� p�� ���ü�� �о� ����
//	T* operator ->() const { return p; } // �����͸� ����
//};
//
//int main()
//{
//	myptr<string> pStr(new string("AutoPtr Test"));
//
//	cout << *pStr << endl;
//	cout << "���� = " << pStr->size() << endl;
//}