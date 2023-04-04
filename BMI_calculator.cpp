#include <iostream>
using namespace std;

int main()
{
    cout << "This is BMI calculator\n";
    int weight;
    float height;
    cout << "Put in your weight ";
    cin >> weight;
    cout << "Put in your height ";
    cin >> height;

    cout << "Your BMI is: " << weight / (height * height);
}