#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number, sum = 0, evenSum = 0, oddSum = 0;

    cout << "������� ����� (������� 0 ��� ����������): " << endl;

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

    cout << "����� ���� �����: " << sum << endl;
    cout << "����� ������ �����: " << evenSum << endl;
    cout << "����� �������� �����: " << oddSum << endl;

    return 0;
}
