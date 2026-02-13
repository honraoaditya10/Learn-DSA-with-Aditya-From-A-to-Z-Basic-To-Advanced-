#include <iostream>
using namespace std;

int main()
{
    // Integer types
    short s = 10;
    int i = 100;
    long l = 100000;
    long long ll = 10000000000;

    // Floating types
    float f = 10.5f;
    double d = 20.123456;
    long double ld = 30.123456789;

    // Character types
    char c = 'A';
    wchar_t wc = L'B';

    // Boolean
    bool b = true;

    // String
    string str = "Aditya";

    cout << "Short: " << s << "\n";
    cout << "Int: " << i << "\n";
    cout << "Long: " << l << "\n";
    cout << "Long Long: " << ll << "\n\n";

    cout << "Float: " << f << "\n";
    cout << "Double: " << d << "\n";
    cout << "Long Double: " << ld << "\n\n";

    cout << "Char: " << c << "\n";
    cout << "Wide Char: " << wc << "\n\n";

    cout << "Bool: " << b << "\n\n";

    cout << "String: " << str << "\n";

    return 0;
}
