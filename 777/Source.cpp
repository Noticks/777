#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number, sum = 0, evenSum = 0, oddSum = 0;

    cout << "Введите числа (введите 0 для завершения): " << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break; 
        }

        sum += number; 

        if (number % 2 == 0) {
            evenSum += number; 
        }
        else {
            oddSum += number; 
        }
    }

    cout << "Сумма всех чисел: " << sum << endl;
    cout << "Сумма четных чисел: " << evenSum << endl;
    cout << "Сумма нечетных чисел: " << oddSum << endl;

    return 0;
}
