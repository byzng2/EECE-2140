#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int x;
    cout << "How many numbers are in the secret sequence? ";
    cin >> x;

    string decodedMessage = "";
    
    for (int i = 0; i < x; ++i) {
        int num;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num;
        if (num >= 1 && num <= 26) {
            decodedMessage += char('A' + num - 1);
        } else {
            decodedMessage += '?'; // Placeholder for invalid numbers
        }
    }
    cout << "Decoded message: " << decodedMessage << endl;
    return 0;
}
