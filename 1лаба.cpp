#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector<int> A;
vector<int> B;
void Intersection() {
	vector<int> P;//Создаем результирующее множество
	for (int i = 0; i < A.size(); i++) {//Проходимся по множеству А
		for (int j = 0; j < B.size(); j++) {//Проходимся по множеству В
			if (A[i] == B[j]) {//Если элементы равны добавляем в результирующее множество P
				P.push_back(A[i]);
			}
		}
	}
	system("cls");
	cout << "Intersection:";
	for (int i = 0; i < P.size(); i++) {
		cout<< P[i] << " ";
	}//Выводим результирующее множество P
	system("pause");
	system("cls");
}
void Union() {
	vector<int> O;//Создаем результирующее множества О
	for (int i = 0; i < B.size(); i++) {
		O.push_back(B[i]);
	}//Копируем множество В в результирующее множества О
	for (int i = 0; i < A.size(); i++) {//Проходимся по множеству А
		for (int j = 0; j < B.size(); j++) {//Проходимся по множеству В
			if (A[i] == B[j])//Если элементы равны переходим к след элементу множества А
				break;
			if (j == (B.size() - 1))//Добавляем элемент множества А в результирующее множество О
				O.push_back(A[i]);
		}
		cout << endl;
	}
	system("cls");
	cout << "Union:";
	for (int i = 0; i < O.size(); i++) {
		cout<< O[i] << " ";//Выводим результирующее множества О
	}
	system("pause");
	system("cls");

}
int main() {
	cout << "Enter the capacity of sets:"; int N; cin >> N;//Вводим кол-во элементов
	A.resize(N);//Создаем множество А
    B.resize(N);//Создаем множество В
	int temp = 0;
	cout << "Enter the elements for A set:";
	for (int i = 0; i < A.size(); i++) {
		cin >> temp;
		A[i] = temp;
	}//Заполняем множество А
	cout << endl;
	cout << "Enter the elements for B set:";
	for (int i = 0; i < B.size(); i++) {
		cin >> temp;
		B[i] = temp;
	}//Заполняем множество В
	system("cls");
	bool answer=true;
	do {
		cout << "1)Intersection" << "   " << "2)Union" << "   " << "3)Exit" << endl;//Выводим меню
		cout << "Your choose:";
		char otvet; cin >> otvet;
		switch (otvet)
		{
		case '1': {
			Intersection();//Если пользователь выбрал пересечение
			break;
		}
		case '2': {
			Union();//Если пользователь выбрал объединение
			break;
		}
		case '3':{
			answer = false;
			break;
		}//Выход из программы
		}
	} while (answer);
	system("cls");
	cout << "Good luck";
	system("pause");
		return 0;
}
