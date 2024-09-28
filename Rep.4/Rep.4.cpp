#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int age;
    int salary;
    string name;
    cout << "Введiть свiй вiк: ";
    cin >> age;
    cout << "Введiть свою зарплату: ";
    cin >> salary;
    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "Введiть своє iм'я: ";
        cout << "Введiть своє прiзвище: ";
        cout << "Введiть бажану посаду: ";
        cin >> name;
        cout << " Вiтаємо, ми розглянемо вашу позицiю " << name << "." << endl;

    }
    else {
        cout << "Вибачте, ви не пiдходите" << endl;
    }
}