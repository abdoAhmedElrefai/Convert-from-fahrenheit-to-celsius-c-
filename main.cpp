#include <iostream>
using namespace std;
void FahrenToCelsius();
void CelsiusToFahren();
void erorr();
int main();
void FahrenToCelsius(){
    float fahren, celsius;
    cout << "Enter the temperature in fahrenheit :";
    cin >> fahren;
    celsius = 5 * (fahren - 32) / 9;
    cout << fahren <<" Fahrenheit = " << celsius <<" *";

    main();
}

void CelsiusToFahren(){
    float fahren, celsius;
    cout << "Enter the temperature in celsius :";
    cin >> celsius;
    fahren = celsius * 1.8 + 32;
    cout << celsius <<" celsius = " << fahren <<" *";


    main();
}

void erorr(){
    cout << " Return again \n";
    main();
}
int main() {
    int x;
    cout << "  ############################# \n";
    cout << " name : abdallah ahmed elrefai \n";
    cout << "code : 22256 \n";
    cout << "  ############################# \n";
    cout << "  ############################# \n";
    cout << "  ############################# \n";

    cout << "  1 - fahrenheit to celsius \n";
    cout << "  2 - celsius to fahrenheit \n";
    cout << ":";

    cin >> x;

    if(x == 1){
        FahrenToCelsius();
    }else if(x == 2){
        CelsiusToFahren();
    }else{
        erorr();
    }
}
