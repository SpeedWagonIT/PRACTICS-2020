#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

struct SetOfStack {
	vector <vector<string>> table;
	int size;//количество тарелок
	int N; // макс. кол-во тарелок в стопке
	int stack; // номер стопки
	int plate;// номер тарелки
	SetOfStack();
	~SetOfStack();
	void Push();
	void Pop();
	void Show();
};