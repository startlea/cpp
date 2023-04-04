#include <iostream>
using namespace std;

int main()
{
    cout << "This is BMI calculator.\n";
    int weight;
    cout << "Put in your weight: ";
    cin >> weight;
    float height;
    cout << "Put in your  height: ";
    cin >> height;
    float BMI = weight / (height * height);

    if (BMI <= 18.5)
    {
        cout << "Your BMI is " << BMI << ".You are Underweight.\n ";
    }
    else if (BMI > 18.5 && BMI <= 25)
    {
        cout << "Your BMI is " << BMI << ".You have normal weight.\n ";
    }
    else if (BMI > 25 && BMI <= 30)
    {
        cout << "Your BMI is " << BMI << ".You are overweight.\n ";
    }
    else if (BMI > 30 && BMI <= 35)
    {
        cout << "Your BMI is " << BMI << ".You are obese.\n ";
    }
    else
    {
        cout << "Your BMI is " << BMI << ".You are clinically obeese.\n ";
    }

    system("pause>0");
    return 0;
}