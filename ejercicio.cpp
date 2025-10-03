#include <iostream>

using namespace std;

int main (){
    double num1, num2, resultado, operador;
    cout<<"INGRESE EL PRIMER NUMERO";
    cin >> num1;
    cout<<"¿QUE DESEA CALCULAR?(+,-,*,/):";
    cin>> operador;
    cout<<"INGRESE EL SEGUNDO NUMERO";
    cin >> num2;
  if (operador=='+') {
    resultado =num1,num2;
    cout<<"resultado:" <<num1<<"+" <<num2<<"="<<resultado<<endl;
  }
 if (operador=='-') {
    resultado =num1,num2;
    cout<<"resultado:" <<num1<<"-" <<num2<<"="<<resultado<<endl;



}