//11.1 Удалить пять первых нечетных элементов массива. 
// Добавить в конец массива три новых нулевых элемент.

#include <iostream>
//#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            count++;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
        if (count == 5) {
            break;
        }
    }

    int* new_arr = new int[n + 3];
    for (int i = 0; i < n; i++) {
        new_arr[i] = arr[i];
    }
    for (int i = n; i < n + 3; i++) {
        new_arr[i] = 0;
    }
    n += 3;
    delete[] arr;
    arr = new_arr;

    cout << "Измененный массив: ";
    for (int i = 0; i < n; i++) {
        cout << new_arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    //delete[] new_arr;
    /*arr == NULL ? cout << 'yep' : cout << 'no';
    new_arr == NULL ? cout << 'yep' : cout << 'no';*/
    return 0;
}

