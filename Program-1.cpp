#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Calculator
{
public:
    double a, b;
    char operation;

    Calculator(double x, double y, char op)
    {
        a = x;
        b = y;
        operation = op;
    }

    double calculate()
    {
        switch (operation)
        {
        case '+':
            return a + b;

        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0)
            {
                cout << "Error:Division by zero" << endl;
                return 0;
            }
            return a / b;

        default:
            cout << "Invalid opertion!" << endl;
            return 0;
        }
    }
};

int main()
{
    double a, b;
    char op;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;

    cout << "Select Operation( Addition, Subtraction, Multiplication, Division):";
    cin >> op;

    Calculator calc(a, b, op);

    double value = calc.calculate();
    cout << "Value: " << value << endl;

    return 0;
}