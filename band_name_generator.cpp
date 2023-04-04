#include <iostream>
using namespace std;

int main()
{
    cout << "Hello User.\nI will ask you for two names and I will combine your band name with those two.\n"; // Description

    cout << "What is the name of the city where you grow up in?\n"; // Variables
    string city;
    cin >> city;
    cout << "What is the name of your pet ? 
    \n";
    string petName;
    cin >> petName;

    string bandName = city + " " + petName;
    cout << "Your band name would be " << bandName << ". Hope that you will like it.";

    system("pause>0");
}