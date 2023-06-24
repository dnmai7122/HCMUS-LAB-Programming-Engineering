#include"Header3,3.h"

int main() {
    stack <int> stos;

    string linia;
    int i = 1;
    while (getline(cin, linia)) 
    {
        if (linia == "*") {
            int b = stos.top();
            stos.pop();
            int a = stos.top();
            stos.pop();
            stos.push(a * b);
        }
        else if (linia == "+") {
            int b = stos.top();
            stos.pop();
            int a = stos.top();
            stos.pop();
            stos.push(a + b);
        }
        else if (linia == "-") {
            int b = stos.top();
            stos.pop();
            int a = stos.top();
            stos.pop();
            stos.push(a - b);
        }
        else if (linia == "/" || linia == "%") {
            int b = stos.top();
            stos.pop();
            int a = stos.top();
            stos.pop();
            int c = a / b;
            stos.push(c);
        }
        else if (linia == "\n") {
            cout << i << ": " << stos.top() << endl;
            stos.pop();
            i++;
        }
        else {
            stos.push(atoi(linia.c_str()));
        }
        
    }
    cout << "Enter String: ";
    string str;
    cin >> str;
    cout << "\nThe result is: ";
    return 0;
}
