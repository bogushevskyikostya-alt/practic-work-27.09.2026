/* Завдання 1
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int MONTHS = 12;
    double profit[MONTHS];
    double totalProfit = 0.0;

    cout << "Введіть прибуток фірми за кожен місяць (1-12):\n";
    for (int i = 0; i < MONTHS; i++) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
        totalProfit += profit[i];
    }

    int maxMonth = 0;
    int minMonth = 0;

    for (int i = 1; i < MONTHS; i++) {
        if (profit[i] > profit[maxMonth]) {
            maxMonth = i;
        }
        if (profit[i] < profit[minMonth]) {
            minMonth = i;
        }
    }

    double averageProfit = totalProfit / MONTHS;

    cout << "\n--- ПІДСУМКИ ФІНАНСОВОГО РОКУ ---\n";
    cout << "Загальний прибуток за рік: " << totalProfit << " грн\n";
    cout << "Середній прибуток на місяць: " << averageProfit << " грн\n";
    cout << "Місяць з максимальним прибутком: " << maxMonth + 1 << " (сума: " << profit[maxMonth] << " грн)\n";
    cout << "Місяць з мінімальним прибутком: " << minMonth + 1 << " (сума: " << profit[minMonth] << " грн)\n";

    return 0;
}
*/
/*Завдання 2
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int SIZE = 10;
    int arr[SIZE] = { 5, 12, 19, 24, 33, 42, 51, 60, 77, 88 };

    cout << "Масив у звичайному порядку: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Масив у зворотному порядку: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/
/*Завдання 3
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int SIDES = 5;
    double sides[SIDES];
    double perimeter = 0.0;

    cout << "Введіть довжину 5 сторін п'ятикутника:\n";
    for (int i = 0; i < SIDES; i++) {
        cout << "Сторона " << i + 1 << ": ";
        cin >> sides[i];
        perimeter += sides[i];
    }

    cout << "Периметр п'ятикутника дорівнює: " << perimeter << endl;

    return 0;
}
*/
/* Завдання 4
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int SIZE = 9;
    int arr[SIZE] = { 0, -11, 0, 12, 54, 0, 0, -40, 11 };

    cout << "Масив до стискання: { ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << (i < SIZE - 1 ? ", " : " ");
    }
    cout << "}" << endl;

    int writeIndex = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] != 0) {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }

    for (int i = writeIndex; i < SIZE; i++) {
        arr[i] = -1;
    }

    cout << "Масив після стискання: { ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << (i < SIZE - 1 ? ", " : " ");
    }
    cout << "}" << endl;

    return 0;
}
*/
/*Завдання 5
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int SIZE1 = 5;
    const int SIZE2 = 5;
    const int TOTAL_SIZE = SIZE1 + SIZE2;

    int arr1[SIZE1] = { 10, 0, 52, -10, -44 };
    int arr2[SIZE2] = { 54, 0, -100, 12, 4 };
    int result[TOTAL_SIZE];

    int index = 0;

    for (int i = 0; i < SIZE1; i++) {
        if (arr1[i] > 0) result[index++] = arr1[i];
    }
    for (int i = 0; i < SIZE2; i++) {
        if (arr2[i] > 0) result[index++] = arr2[i];
    }

    for (int i = 0; i < SIZE1; i++) {
        if (arr1[i] == 0) result[index++] = arr1[i];
    }
    for (int i = 0; i < SIZE2; i++) {
        if (arr2[i] == 0) result[index++] = arr2[i];
    }

    for (int i = 0; i < SIZE1; i++) {
        if (arr1[i] < 0) result[index++] = arr1[i];
    }
    for (int i = 0; i < SIZE2; i++) {
        if (arr2[i] < 0) result[index++] = arr2[i];
    }
    cout << "Результат: { ";
    for (int i = 0; i < TOTAL_SIZE; i++) {
        cout << result[i] << (i < TOTAL_SIZE - 1 ? ", " : " ");
    }
    cout << "}" << endl;

    return 0;
}
*/