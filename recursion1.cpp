#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//void elevator (int floor);
//int factorial (int n));
//template<typename T>
// T power (T a, T n);
void fibonacci(int n, unsigned long long int a = 0, unsigned long long int b = 1)
{
	if (n == 0)return; // �������
	//if (a>n)return; //������� 1
	cout << a << "\t";
	//fibonacci(n, b, a+b);// ������� 1
	fibonacci(n - 1, b, a + b)//�������
}
void main()
{
	setlocale(LC_ALL, "Russian");
	/*  int floor;
	cout<<"�� ����� ����� �� ����������:";
	cin>>floor;
	elevator(floor);
	cout<<endl;

	int n;
	cout<<"������� ���������:";cin >>n;
	n=factorial(n);
	cout<<"���������:"<<n<<endl;
	*/
	//double a;
	//double n;
	//double N;
	//cout << "������� ��������� �������: "; cin >> a;
	//cout << "������� ���������� �������:"; cin >> n;
	//cout << "���������:"<<power (a,n)<<endl;
	int n;
	cout << "�� ������ ������� ������� ��� ����� ���������?" cin >> n;
	fibonacci(n);
	/*
	void elevator (int floor)
	{
	cout <<"You are on the "<<floor<<"floor:\n";
	if (floor == 0)return;
	elevator (floor - 1);
	cout<<"You are on the"<< floor<<"floor:\n"
	}
	int factorial(int n)
	{
	return n==0?1:factorial(n-1)*n;
}
*/
//template<typename T>T power (T a, T n)
  //
	{
		//if (n==0) return 1;
		//if (n>0)return a*power(a,n-1);
		//if (n<0)return 1 /power (a, -n);
		//T N=a*power(a,n-1);
		//return N;
		//return a*power (a, n-1);
		//return n>0?a*power (a, n-1):n<0?1/ power(a,-n);
		//First commit
	}