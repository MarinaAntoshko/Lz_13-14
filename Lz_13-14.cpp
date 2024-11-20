// Створити лінійний двозв’язний список із цілих чисел. Вилучити зі списку елемент
// після кожного елемента, рівного 4. Вставити число 0 перед кожним числом 1.

#include <iostream>
#include <list>
#include <windows.h> 
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    list<int>myList = { 6, 4, 2, 1, 8, 5, 4, 3, 9 };

    cout << "Список цілих чисел: ";
    for (int number : myList) {
        cout << number << " ";
    }
    cout << endl;

    auto it = myList.begin();

    // Видалення елемента після кожного числа 4
    while (it != myList.end()) {
        auto nextIt = next(it);
        if (*it == 4 && nextIt != myList.end()) {
            it = myList.erase(nextIt); 
        }
        else {
            ++it;
        }
    }

    // Додавання 0 перед кожним числом 1
    it = myList.begin();
    while (it != myList.end()) {
        if (*it == 1) {
            it = myList.insert(it, 0); 
            ++it; 
        }
        ++it;
    }

    cout << "\nОновлений список: ";
    for (int number : myList) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
