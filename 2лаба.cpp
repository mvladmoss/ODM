#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector<int> A;
vector<int> B;
vector<int> U(250);
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
		cout << P[i] << " ";
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
		cout << O[i] << " ";//Выводим результирующее множества О
	}
	system("pause");
	system("cls");

}
void Diffrence() {
	vector<int> R;//создаем результирующее множества R
	for (int i = 0; i < A.size(); i++) {//Проходимся по мн-ву А
		for (int j = 0; j < B.size(); j++) {//Проходимся по мн-ву В
			if (A[i] == B[j])//Если элементы равны переходим к след элементу мн-ва А
				break;
			if (j == (B.size() - 1))//Добавляем элемент множества А в результирующее множество R
				R.push_back(A[i]);
		}
	}
	system("cls");
	cout << "Diffrence:";
	for (int i = 0; i < R.size(); i++) {
		cout << R[i] << " ";//Выводим результирующее множества R
	}
	system("pause");
	system("cls");
}
void Symmetric_Diffrence() {
	vector<int> SR;//Создаем результирующее мн-во SR
	vector<int> R1;//Создаем мн-во R1
	for (int i = 0; i < A.size(); i++) {//Проходимся по мн-ву А
		for (int j = 0; j < B.size(); j++) {//Проходимся по мн-ву В
			if (A[i] == B[j])//Если элементы равны переходим к след элементу мн-ва А
				break;
			if (j == (B.size() - 1))//Добавляем элемент множества А во множество R1
				R1.push_back(A[i]);
		}
	}
	vector<int> R2;
	for (int i = 0; i < B.size(); i++) {//Проходимся по мн-ву В
		for (int j = 0; j < A.size(); j++) {//Проходимся по мн-ву A
			if (B[i] == A[j])//Если элементы равны переходим к след элементу мн-ва В
				break;
			if (j == (A.size() - 1))//Добавляем элемент множества В во множество R2
				R2.push_back(B[i]);
		}
	}
	for (int i = 0; i < R2.size(); i++) {
		SR.push_back(R2[i]);
	}//Копируем множество R2 в результирующее множества SR
	for (int i = 0; i < R1.size(); i++) {//Проходимся по множеству R1
		for (int j = 0; j < R2.size(); j++) {//Проходимся по множеству R2
			if (R1[i] == R2[j])//Если элементы равны переходим к след элементу множества R1
				break;
			if (j == (R2.size() - 1))//Добавляем элемент множества R1 в результирующее множество SR
				SR.push_back(R1[i]);
		}
		cout << endl;
	}
	system("cls");
	cout << "Symmetric Diffrence:";
	for (int i = 0; i < SR.size(); i++) {
		cout << SR[i] << " ";//Выводим результирующее множества SR
	}
	system("pause");
	system("cls");
}
void Adding() {
	vector<int> ADD;//создаем мн-во  пустое ADD
	for (int i = 0; i < U.size(); i++) {//Проходимся по универсуму U
		for (int j = 0; j < A.size(); j++) {//Проходимся по множеству A
			if (U[i] == A[j])//Если элементы равны переходим к след элементу универсума U
				break;
			if (j == (A.size() - 1))//Добавляем элемент универсума U в результирующее множество ADD
				ADD.push_back(U[i]);
		}
	}
	system("cls");
	cout << "Adding:";
	for (int i = 0; i < ADD.size(); i++) {
		cout << ADD[i] << " ";//Выводим результирующее множества ADD
	}
	system("pause");
	system("cls");
}
void Cartesian_product() {
	vector<vector<int>> M;//создаем результируюшее мн-во M
	for(int i = 0; i < A.size(); i++) {//Проходимся по множеству A
		for (int j = 0; j < B.size(); j++) {//Проходимся по множеству В
			vector<int> tempory;
			tempory.push_back(A[i]);
			tempory.push_back(B[i]);
			M.push_back(tempory);//добавляем пару выбпанных элементов
		}
	}
	system("cls");
	cout << "Cartesian product:{";
	for (int i = 0; i < M.size(); i++) {
		cout <<"<"<< M[i][0] << ","<<M[i][1]<<">"<<"   ";//Выводим результирующее множества M
	}
	cout << "}";
	system("pause");
	system("cls");
}
int main() {
	cout << "Enter the capacity of sets:"; int N; cin >> N;//Вводим кол-во элементов
	A.resize(N);//Создаем множество А
	B.resize(N);//Создаем множество В
	for (int i = 0; i < U.size(); i++) {
		U[i] = i + 1;
	}//заполняем универсум
	system("cls");
	cout << "1)enumerative" << endl << "2)expressive" << endl << "Choose way for filling the sets:"; char temp; cin >> temp;//выбираем способ задания множества
	switch (temp) {
	case '1': {//Перечислительный
		for (int i = 0; i < A.size(); i++) {
			A[i] = 1 + rand() % 100;//мн-во А заполняется случайными числами
		
			for (int i = 0; i < B.size(); i++) {
			B[i] = 1 + rand() % 100;//мн-во В заполняется случайными числами
		}
		break;
	}
	case '2': {//Высказывательный способ
		system("cls");
		cout << "enter the y(from 0 to 15):"; int y; cin >> y;
		int x_A = 0;
		for (int i = 0; i < N; i++) {
			A[i] = 2 * x_A + 3 * y;
			x_A = x_A + 1;;
		}
		cout << "enter the z(from 0 to 17):"; int z; cin >> z;
		int x_B = 0;
		for (int i = 0; i < N; i++) {
			B[i] = x_B*x_B + z;
			x_B = x_B + 1;;
		}
		break;
	}
	}
	bool answer = true;
	do {
		cout << "1)Intersection" << "   " << "2)Union" << "   " << "3)Diffrence" << "   " << "4)Symmetric Diffrence" << "   " << "5)Adding" << "   " << "6)Cartesian product" << "   " << "7)Exit" << endl;//Выводим меню
		cout << "Your choose:";//Выводиться главное меню
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
		case '3': {
			Diffrence();//Если пользователь выбрал разность
			break;
		}
		case '4': {//Если пользователь выбрал симметрическую разность
			Symmetric_Diffrence();
			break;
		}
		case '5': {//Если пользователь выбрал дополнение
			Adding();
			break;
		}
		case '6': {//Если пользователь выбрал декартовое произведение
			Cartesian_product();
			break;
		}
		case '7': {//Если пользователь выбрал Выход из программы
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
