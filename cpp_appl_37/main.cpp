#include <iostream>
#include<Windows.h>

void insertCharAtIndex(char* str, int position, char toInsert) {
    system("chcp 1251");
    system("cls");
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    
    if (position < 0 || position > length) {
        std::cerr << "���������� ������� ��� �������." << std::endl;
        return;
    }

    
    for (int i = length; i >= position; --i) {
        str[i + 1] = str[i];
    }

    
    str[position] = toInsert;
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

    int position;
    std::cout << "������ ������� ��� �������: ";
    std::cin >> position;

    char toInsert;
    std::cout << "������ ������ ��� �������: ";
    std::cin >> toInsert;

    insertCharAtIndex(inputString, position, toInsert);

    std::cout << "���������: " << inputString << std::endl;

    return 0;
}
