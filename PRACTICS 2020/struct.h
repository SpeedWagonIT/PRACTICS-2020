#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

struct SetOfStack {
	vector <vector<string>> table;
	int size;//���������� �������
	int N; // ����. ���-�� ������� � ������
	int stack; // ����� ������
	int plate;// ����� �������
	SetOfStack();
	~SetOfStack();
	void Push();
	void Pop();
	void Show();
};