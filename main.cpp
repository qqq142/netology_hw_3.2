#include <QCoreApplication>
#include <iostream>
#include <Windows.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int firstNum{}, secondNum{}, thirdNum{};

    std::cout << "Введите первое число: ";
    std::cin >> firstNum;

    std::cout << "Введите второе число: ";
    std::cin >> secondNum;

    std::cout << "Введите третье число: ";
    std::cin >> thirdNum;

    int temp{};

    if (firstNum < secondNum) {
        temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

    if (secondNum < thirdNum) {
        temp = secondNum;
        secondNum = thirdNum;
        thirdNum = temp;
    }

    if (firstNum < secondNum) {
        temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

     std::cout << "Результат: " << firstNum << " " << secondNum << " " << thirdNum << std::endl;

    return 0;
}
