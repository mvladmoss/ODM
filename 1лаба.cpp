#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector<int> A;
vector<int> B;
void Intersection() {
	vector<int> P;//������� �������������� ���������
	for (int i = 0; i < A.size(); i++) {//���������� �� ��������� �
		for (int j = 0; j < B.size(); j++) {//���������� �� ��������� �
			if (A[i] == B[j]) {//���� �������� ����� ��������� � �������������� ��������� P
				P.push_back(A[i]);
			}
		}
	}
	system("cls");
	cout << "Intersection:";
	for (int i = 0; i < P.size(); i++) {
		cout<< P[i] << " ";
	}//������� �������������� ��������� P
	system("pause");
	system("cls");
}
void Union() {
	vector<int> O;//������� �������������� ��������� �
	for (int i = 0; i < B.size(); i++) {
		O.push_back(B[i]);
	}//�������� ��������� � � �������������� ��������� �
	for (int i = 0; i < A.size(); i++) {//���������� �� ��������� �
		for (int j = 0; j < B.size(); j++) {//���������� �� ��������� �
			if (A[i] == B[j])//���� �������� ����� ��������� � ���� �������� ��������� �
				break;
			if (j == (B.size() - 1))//��������� ������� ��������� � � �������������� ��������� �
				O.push_back(A[i]);
		}
		cout << endl;
	}
	system("cls");
	cout << "Union:";
	for (int i = 0; i < O.size(); i++) {
		cout<< O[i] << " ";//������� �������������� ��������� �
	}
	system("pause");
	system("cls");

}
int main() {
	cout << "Enter the capacity of sets:"; int N; cin >> N;//������ ���-�� ���������
	A.resize(N);//������� ��������� �
    B.resize(N);//������� ��������� �
	int temp = 0;
	cout << "Enter the elements for A set:";
	for (int i = 0; i < A.size(); i++) {
		cin >> temp;
		A[i] = temp;
	}//��������� ��������� �
	cout << endl;
	cout << "Enter the elements for B set:";
	for (int i = 0; i < B.size(); i++) {
		cin >> temp;
		B[i] = temp;
	}//��������� ��������� �
	system("cls");
	bool answer=true;
	do {
		cout << "1)Intersection" << "   " << "2)Union" << "   " << "3)Exit" << endl;//������� ����
		cout << "Your choose:";
		char otvet; cin >> otvet;
		switch (otvet)
		{
		case '1': {
			Intersection();//���� ������������ ������ �����������
			break;
		}
		case '2': {
			Union();//���� ������������ ������ �����������
			break;
		}
		case '3':{
			answer = false;
			break;
		}//����� �� ���������
		}
	} while (answer);
	system("cls");
	cout << "Good luck";
	system("pause");
		return 0;
}
