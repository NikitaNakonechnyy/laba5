#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

int main() {
	setlocale(LC_ALL, "");
	std::string word;
	std::cout << "������� ����� ��� ������(world): ";
	std::cin >> word;
	std::ifstream file("text.txt");
	if (!file.is_open()) {
		std::cout << "���� �� ������." << std::endl;
		return 1;
	}
	std::unordered_map<std::string, int> count;
	std::string line;
	while (std::getline(file, line)) {
		std::size_t pos = 0;
		while ((pos = line.find(word, pos)) != std::string::npos) {
			count[word]++;
			pos += word.length();
		}
	}
	file.close();
	std::cout << "����� \"" << word << "\" ����������� � ����� " << count[word] << " ���(�)." << std::endl;
	return 0;
}