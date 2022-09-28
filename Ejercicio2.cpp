/*
Algunos operadores verifican la relación entre dos valores y estos 
operadores se denominan operadores relacionales. Dados dos valores 
numéricos, su trabajo es solo encontrar la relación entre ellos.es 
decir (i) El primero es mayor que el segundo (ii) El primero es 
menor que el segundo o (iii) El primero y el segundo es igual.

Input:
La primera línea del archivo de entrada es un número entero t (t < 15) 
que indica cuántos conjuntos de entradas hay.
Cada una de las siguientes t líneas contiene dos números enteros a y b 
(|a|, |b| < 1000000001).

Output:
Para cada línea de entrada, produzca una línea de salida. Esta línea contiene 
cualquiera de los operadores relacionales '>', '<' o '=', que indica la relación 
apropiada para los dos números dados.
*/

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<string> vecaux) {
    for (size_t i = 0; i < vecaux.size(); i++) {
        cout << vecaux[i] << endl;
    }
}

string solve(int number1, int number2) {
    string value1 = ">";
    string value2 = "<";
    string value3 = "=";

    if (number1 > number2) { return value1; }
    else if (number1 < number2) { return value2; }
    else { return value3; }

}

void solicit_data(int number_inputs, int number1, int number2) {
    int i = 1;
    vector<string> vec_result;
    while (i <= number_inputs) {
        cin >> number1 >> number2;
        string s = solve(number1, number2);
        vec_result.push_back(s);
        i += 1;
    }
    print_vector(vec_result);
}

int main() {
    int t, n1, n2;
    cin >> t;
    solicit_data(t, n1, n2);
    return 0;
}
