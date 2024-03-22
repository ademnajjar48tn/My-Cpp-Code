#include <iostream>

int main() 
{
    using std::cout;
    using std::cin;
    char op;
    double num1, num2, result;
    cout << "*********** CALCULATOR ***********\n";
    cout << "Select (+, -, *, /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;
    switch (op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n';
            break;
        default:
            cout << "That's not valid!" << '\n';
    }
    cout << "**********************************";
}