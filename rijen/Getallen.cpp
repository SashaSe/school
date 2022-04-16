#include <iostream>
#include <iomanip>
using namespace std;

float* inputNumber() {
    float number = 50;
    float* array = new float[3];
    float sum = 0;
    float count = -1;
    float avg = 0;
    while (number != 0 && number >=50 && number <=100) {
        cout << "Enter number (0 to stop the program): ";
        cin >> number;
        sum = sum + number;
        count++;
        avg = sum/count;
    }
    array [0] = sum;
    array [1] = count;
    array [2] = avg;
    return array; 
}

void output(float array[3]) {
    cout << "Sum of numbers = " << array [0] << "." << endl << "Amount of numbers = " << array [1] << "." << endl << "Average of numbers = " << array [2] << "." << endl;
}

int main() {
    float* array= inputNumber(); 
    output(array);
}

