#include"iostream"
using namespace std;

//�곣��
#define Sevenday 7

int main() {
	//cout

	cout << "hello world" << endl;
	int a = 10;

	//Const���εĳ���
	const int month = 12;

	//���� �ڴ�ռ��ֽ��� short=2 int=4 long=4 long long =8
	//������ float=4 double=8 
	 //��fʹ�����ͱ�Ϊfloat������ᱻת��Ϊdouble

    float aa=12f;
	short sa = 10;
	long int ssa = 10;
	long long int lla = 10;

	cout << "a=" << sizeof(lla) << endl;

	/*�ȴ���������*/
	system("pause");
	return 0;

}