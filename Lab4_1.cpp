/**************************************
* Автор: Алексеев Д.К.                *
* Дата: 24.09.2024                    *
* Название: Лаба 4 Циклы с ветвлением *
**************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double Re = 2e4;
    double d = 25.4;
    double S1 = 60;
    double S2_values[] = {30, 50, 65, 75, 80};

    cout << fixed << setprecision(2);

    for (double S2 : S2_values) {
        double Sg = d * sqrt(0.25 * pow(S1 / d, 2) + pow(S2 / d, 2));
        double tri = (S1 - d) / (Sg - d);
        
        double Nu;
        if (tri < 0.7) {
            Nu = 0.27 * pow(Re, 0.6) * tri;
        } else {
            Nu = 0.295 * pow(Re, 0.6) * pow(tri, 0.25);
        }

        cout << "Для S2 = " << S2 << " мм: ";
        cout << "Nu = " << Nu << ", tri = " << tri << endl;
    }

    return 0;
}