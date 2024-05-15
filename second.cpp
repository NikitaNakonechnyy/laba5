#include <fstream>
#include <iostream>
using namespace std;

class Matrix {
public:
	Matrix(int rows, int cols) {
		// Инициализация матрицы
	}

	void writeToFile(const string& filename) {
		ofstream file(filename);
		if (!file.is_open()) {
			cout << "Ошибка открытия файла" << endl;
			return;
		}

		// Запись матрицы в файл
	}

	void readFromFile(const string& filename) {
		ifstream file(filename);
		if (!file.is_open()) {
			cout << "Ошибка открытия файла" << endl;
			return;
		}

		// Чтение матрицы из файла
	}
};

int main() {
	Matrix matrix1(3, 4); // Создание матрицы 3x4
	Matrix matrix2(5, 6); // Создание матрицы 5x6

	matrix1.writeToFile("input.txt"); // Запись матрицы в файл
	matrix2.writeToFile("input.txt"); // Запись второй матрицы в тот же файл

	matrix1.readFromFile("input.txt"); // Чтение матриц из файла
	matrix2.readFromFile("input.txt");
	return 0;
}