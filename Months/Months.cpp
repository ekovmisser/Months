#include <iostream>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::string s1 = "Январь";
    std::string s2 = "Февраль";
    std::string s3 = "Март";
    std::string s4 = "Апрель";
    std::string s5 = "Май";
    std::string s6 = "Июнь";
    std::string s7 = "Июль";
    std::string s8 = "Август";
    std::string s9 = "Сентябрь";
    std::string s10 = "Октябрь";
    std::string s11 = "Ноябрь";
    std::string s12 = "Декабрь";
    int Meaning = 1;
    while (Meaning > 0) {
        do {
            std::cout << "Введите номер месяца: ";
            std::cin >> Meaning;
            switch (Meaning) {
            case 1:
                std::cout << s1 << std::endl;
                break;
            case 2:
                std::cout << s2 << std::endl;
                break;
            case 3:
                std::cout << s3 << std::endl;
                break;
            case 4:
                std::cout << s4 << std::endl;
                break;
            case 5:
                std::cout << s5 << std::endl;
                break;
            case 6:
                std::cout << s6 << std::endl;
                break;
            case 7:
                std::cout << s7 << std::endl;
                break;
            case 8:
                std::cout << s8 << std::endl;
                break;
            case 9:
                std::cout << s9 << std::endl;
                break;
            case 10:
                std::cout << s10 << std::endl;
                break;
            case 11:
                std::cout << s11 << std::endl;
                break;
            case 12:
                std::cout << s12 << std::endl;
                break;
            } switch (Meaning > 12) {
            case 1:
                std::cout << "Неправильный номер!" << std::endl;
                break;
            }
        } while (false);
    }
    std::cout << "До свидания " << std::endl;
    return 0;
}

