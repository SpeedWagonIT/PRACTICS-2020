#include "struct.h"


using namespace std;



int main() {
	setlocale(LC_ALL, "Rus");
	int in; //����� �������� � ����
	int num; // ���������� ������� ��� ��������������
	SetOfStack SetOfStack;

	do {
		system("cls");
		cout << "���������� ������� � ������ : " << SetOfStack.N << endl;
		cout << "�������� ��������:" << endl;
		cout << "[1] �������� �������" << endl;
		cout << "[2] ������� �������" << endl;
		cout << "[3] ����� �� ���������\n>>";
		cin >> in;
		switch (in) {
		case 1:
			cout << "������� ������� ��������? \n>>" << endl;
			cin >> num;
			for (int i = 0; i < num; i++) {
				SetOfStack.Push();
			}
			SetOfStack.Show();
			cout << "\n������� ���������!\n" << endl;
			break;
		case 2:
			cout << "������� ������� �������? \n>>" << endl;
			cin >> num;
			for (int i = 0; i < num; i++) {
				SetOfStack.Pop();
			}
			SetOfStack.Show();
			cout << "\n������� �������!\n" << endl;
			break;
			break;
		case 3:
			cout << "\n��������� ��������� ���� ������....\n" << endl;
			break;
		default:
			cout << "������������ ������" << endl;
			break;
		}
		system("Pause");
	} while (in != 3);


	return 0;
}