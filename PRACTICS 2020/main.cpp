#include "struct.h"


using namespace std;



int main() {
	setlocale(LC_ALL, "Rus");
	int in; //выбор действия в меню
	int num; // количество тарелок для взаимодействия
	SetOfStack SetOfStack;

	do {
		system("cls");
		cout << "Количество тарелок в стопке : " << SetOfStack.N << endl;
		cout << "Выберете действие:" << endl;
		cout << "[1] Добавить тарелки" << endl;
		cout << "[2] Удалить тарелки" << endl;
		cout << "[3] Выйти из программы\n>>";
		cin >> in;
		switch (in) {
		case 1:
			cout << "Сколько тарелок добавить? \n>>" << endl;
			cin >> num;
			for (int i = 0; i < num; i++) {
				SetOfStack.Push();
			}
			SetOfStack.Show();
			cout << "\nТарелки добавлены!\n" << endl;
			break;
		case 2:
			cout << "Сколько тарелок удалить? \n>>" << endl;
			cin >> num;
			for (int i = 0; i < num; i++) {
				SetOfStack.Pop();
			}
			SetOfStack.Show();
			cout << "\nТарелки удалены!\n" << endl;
			break;
			break;
		case 3:
			cout << "\nПрограмма завершает свою работу....\n" << endl;
			break;
		default:
			cout << "Неккоректные данные" << endl;
			break;
		}
		system("Pause");
	} while (in != 3);


	return 0;
}