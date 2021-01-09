#include <iostream>
using namespace std;
struct Elem {  // ���������� ���������
	Elem* link1;
	Elem* link2;
	int info;
};
// --------------------------------------------
// ������� �������
int main()
{
	Elem* p;    // ���� ��������� p �� ������� ���������
	p = new Elem; //���������� ��������� p �� ������� ���������
	cout << "adreca 1 elem     " << p << endl;//���� ��������� �� ������� ���������

	p->link1 = NULL;  //��������� �������� NULL  1 ���� ������ 1-�� ��������
	cout << p->link1 << "    - NULL" << endl;
	p->info = 1;//��������� �������� 1  ���������� ���� 1-�� ��������
	cout << p->info << endl; //���� ��������   ���������� ���� 1-�� ��������

	// 2-� e������

	p->link2 = new Elem; //��������� ��������� �� 2-� e������
	cout << "adreca 2 elem     " << p->link2 << endl;
	p->link2->info = 2;//��������� �������� 2 ���������� ���� 2 �� ��������
	cout << p->link2->info << endl; //���� ��������  ���������� ���� 2�� ��������



	// 4-� e������
	p->link2->link2 = new Elem; //��������� ��������� �� 4-�-�������
	cout << "adreca 4 elem      " << p->link2->link2 << endl;
	p->link2->link2->link1 = NULL;//��������� �������� NULL  1 ���� ������ 4-�� ��������
	cout << p->link2->link2->link1 << "    - NULL" << endl;
	p->link2->link2->info = 4;//��������� �������� 4 ���������� ���� 4-�� ��������
	cout << p->link2->link2->info << endl; //���� ��������  ���������� ���� 4-�� ��������

	// 3-� e������
	p->link2->link2->link2 = new Elem; //��������� ��������� �� 3-�-�������
	cout << "adreca 3 elem      " << p->link2->link2->link2 << endl;

	p->link2->link2->link2->info = 3;//��������� �������� 3 ���������� ���� 3-�� ��������
	cout << p->link2->link2->link2->info << endl; //���� ��������  ���������� ���� 3-�� ��������
	p->link2->link2->link2->link2 = p;
	p->link2->link2->link2->link1 = p->link2;

	delete  p->link2->link2->link2;
	delete p->link2->link2;
	delete p->link2;
	delete p;

	return 0;
}

