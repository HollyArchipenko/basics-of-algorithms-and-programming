#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n, k, rmn = -100, rmx = 100;
    cout << "введите размер массива: ";
    cin >> n;
    int mas[n * 2];
    srand((unsigned)time(NULL));
    cout << "начальный массив: ";
    for (int i = 0; i < n; ++i) {
        mas[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
        cout << mas[i] << " ";
    }
    cout << endl;
    cout << "массив после сдвига: ";
    for (int i = 0; i < n; i = i + 3) {
        for (int j = i; j < n; ++j) {
            mas[j] = mas[j + 1];
        }
        n--;
    }
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";

    }
    cout << endl;
    cout << "массив после добавления 10: ";
    for (int i = 0; i < n; i++) {
        if (mas[i] < 0) {
            for (int j = n; j > i; j--) {
                mas[j + 1] = mas[j];
            }
            n++;
            mas[i + 1] = 10;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";

    }

}