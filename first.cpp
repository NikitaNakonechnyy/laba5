#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

int main() {
	setlocale(LC_ALL, "");
	std::string word;
	std::cout << "Введите слово для поиска(world): ";
	std::cin >> word;
	std::ifstream file("text.txt");
	if (!file.is_open()) {
		std::cout << "Файл не найден." << std::endl;
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
	std::cout << "Слово \"" << word << "\" встречается в файле " << count[word] << " раз(а)." << std::endl;
	return 0;
}