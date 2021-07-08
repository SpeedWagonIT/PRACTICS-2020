#include "struct.h"




SetOfStack::SetOfStack() {
	size = 0;//размер общего стека
	stack = 0;//количество стопок
	plate = 1;//номер тарелки
	cout << "¬ведите количество тарелок в стопке: ";
	cin >> N;
}



SetOfStack::~SetOfStack() {
	table.clear();
}

void SetOfStack::Pop() {
	if (!(size % N))
	{
		table.pop_back();
		table[table.size() - 1].pop_back();
		stack--;
	}
	else
	{
		table[table.size() - 1].pop_back();
	}

	size--;
	plate--;

}

void SetOfStack::Push() {
	if (!(size % N))
	{
		stack++;
		vector <string> temp;
		table.push_back(temp);
		table[table.size() - 1].push_back("Tarelka " + to_string(plate));

	}
	else
	{
		table[table.size() - 1].push_back("Tarelka " + to_string(plate));
	}
	size++;
	plate++;



}

void SetOfStack::Show() {
	int tmp = 0;
	for (int i = 0; i < stack; i++) {
		cout << "\n__________________________\n" << "\nStack " + to_string(i + 1) << endl;
		for (int j = 0; j < N; j++)
		{
			if (tmp > size - 1)
				continue;
			else
				cout << "\t" << table[i][j] << endl;
			tmp++;
		}

	}
	cout << "\n__________________________" << endl;
}