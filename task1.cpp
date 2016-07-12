// Дана матрица D(N,N), N<=10,  с элементами целого типа.
// Написать программу на языке Паскаль или Си (консольный режим),
// которая вводит матрицу, находит суммы элементов четырех частей матрицы,
// на которые делят ее главная и побочная диагонали (без диагональных элементов).
// Полученные значения поместить в одномерный массив в любом порядке.
// Вывести на экран исходную матрицу и одномерный массив.

#include <iostream>

using namespace std;

int main() {

    /*Ввод матрицы */

    //число столбцов
    int n = 0;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int a[n][n];
    cout << "Enter numbers of matrix:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Your matrix is:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    /*Логика*/

    //левый сегмент
    int left = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i>j){
                if (i < (n - j - 1)) {
                    left += a[i][j];
                    cout << "a[" << i << "]" << '[' << j << ']' << endl;
                }
            }
        }
    }
    //правый сегмент
    int right = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i<j){
                if (i > (n - j - 1)) {
                    right += a[i][j];
                    cout << "a[" << i << "]" << '[' << j << ']' << endl;
                }
            }
        }
    }
    //верхний сегмент
    int up = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i<j){
                if (i < (n - j - 1)) {
                    up += a[i][j];
                    cout << "a[" << i << "]" << '[' << j << ']' << endl;
                }
            }
        }
    }
    cout << up <<endl;
    //нижний сегмент
    int down = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i>j){
                if (i > (n - j - 1)) {
                    down += a[i][j];
                    cout << "a[" << i << "]" << '[' << j << ']' << endl;
                }
            }
        }
    }
    cout << down <<endl;
    return 0;
}