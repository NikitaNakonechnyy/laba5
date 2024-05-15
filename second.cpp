#include <fstream>
#include <iostream>
using namespace std;

class Matrix {
public:
	Matrix(int rows, int cols) {
		// ������������� �������
	}

	void writeToFile(const string& filename) {
		ofstream file(filename);
		if (!file.is_open()) {
			cout << "������ �������� �����" << endl;
			return;
		}

		// ������ ������� � ����
	}

	void readFromFile(const string& filename) {
		ifstream file(filename);
		if (!file.is_open()) {
			cout << "������ �������� �����" << endl;
			return;
		}

		// ������ ������� �� �����
	}
};

int main() {
	Matrix matrix1(3, 4); // �������� ������� 3x4
	Matrix matrix2(5, 6); // �������� ������� 5x6

	matrix1.writeToFile("input.txt"); // ������ ������� � ����
	matrix2.writeToFile("input.txt"); // ������ ������ ������� � ��� �� ����

	matrix1.readFromFile("input.txt"); // ������ ������ �� �����
	matrix2.readFromFile("input.txt");
	return 0;
}