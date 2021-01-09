#include <iostream>
using namespace std;
struct Elem {  // Визначення структури
	Elem* link1;
	Elem* link2;
	int info;
};
// --------------------------------------------
// Основна функція
int main()
{
	Elem* p;    // Опис вказівника p на елемент структури
	p = new Elem; //Визначення вказівника p на елемент структури
	cout << "adreca 1 elem     " << p << endl;//Вивід вказівника на елемент структури

	p->link1 = NULL;  //Присвоєння значення NULL  1 полю звязку 1-го елементу
	cout << p->link1 << "    - NULL" << endl;
	p->info = 1;//Присвоєння значення 1  інформаому полю 1-го елементу
	cout << p->info << endl; //Вивід значення   інформаого поля 1-го елементу

	// 2-й eлемент

	p->link2 = new Elem; //Створення вказівника на 2-й eлемент
	cout << "adreca 2 elem     " << p->link2 << endl;
	p->link2->info = 2;//Присвоєння значення 2 інформаому полю 2 го елементу
	cout << p->link2->info << endl; //Вивід значення  інформаого поля 2го елементу



	// 4-й eлемент
	p->link2->link2 = new Elem; //Створення вказівника на 4-й-елемент
	cout << "adreca 4 elem      " << p->link2->link2 << endl;
	p->link2->link2->link1 = NULL;//Присвоєння значення NULL  1 полю звязку 4-го елементу
	cout << p->link2->link2->link1 << "    - NULL" << endl;
	p->link2->link2->info = 4;//Присвоєння значення 4 інформаому полю 4-го елементу
	cout << p->link2->link2->info << endl; //Вивід значення  інформаого поля 4-го елементу

	// 3-й eлемент
	p->link2->link2->link2 = new Elem; //Створення вказівника на 3-й-елемент
	cout << "adreca 3 elem      " << p->link2->link2->link2 << endl;

	p->link2->link2->link2->info = 3;//Присвоєння значення 3 інформаому полю 3-го елементу
	cout << p->link2->link2->link2->info << endl; //Вивід значення  інформаого поля 3-го елементу
	p->link2->link2->link2->link2 = p;
	p->link2->link2->link2->link1 = p->link2;

	delete  p->link2->link2->link2;
	delete p->link2->link2;
	delete p->link2;
	delete p;

	return 0;
}

