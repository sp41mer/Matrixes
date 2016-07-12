//
// Created by Суханов Александр on 12.07.16.
//

// Дана матрица D(N,M), N,M<=10,  с элементами целого типа.
// Написать программу на языке Паскаль или Си (консольный режим),
// которая вводит матрицу и два числа k,l<=10. Определить суммы элементов
// четырех частей матрицы, на которые делят ее строка k и столбец l
// (элементы строки k и столбца l не учитывать). Полученные значения
// поместить в одномерный массив в любом порядке. Вывести на экран
// исходную матрицу и одномерный массив.
#include <iostream>

using namespace std;

int main() {
    int n = 0; // число которое N
    int m = 0; //число которое M
    cout << "Enter rows" << endl;
    cin >> n;
    cout << "Enter cols" <<endl;
    cin >> m;
    int a[n][m];
    cout << "Enter your matrix" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << "Your matrix is:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    int k = 0, l =0;
    cout << "Enter k" << endl;
    cin >> k;
    k--;
    cout << "Enter l" << endl;
    cin >> l;
    l--;
    int result = 0;
    //Левый верхний
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i < k && j < l){
                result += a[i][j];
            }
        }
    }
    cout << result;
    return 0;
}
