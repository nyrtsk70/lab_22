#include <iostream>
#include<bitset>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ru");          
    float y, z, x, f, x1, x2, x3;
    cout << "Вычисление выражения\n";//Юлька
    cout << "Введите х=";
    cin >> x;
    cout << "Введите у=";//new
    cin >> y;
    cout << "Введите z=";
    cin >> z;
    x1 = y - sqrt(abs(x));             
    x2 = y / (z + (pow(x, 2) / 4));    
    x3 = x - x2;
    f = log(abs(x1 * x3));            
        cout << "Ответ: " << f;//коммент1
}
