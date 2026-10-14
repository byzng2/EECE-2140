#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int choice;
    do {
        //Displays the menu
        cout << "1: Decode a message \n";
        cout << "2: Help / Instructions \n";
        cout << "0: Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            // Executes the portion of the code that the user chooses.
            case 1: {
                int count;
                cout << "How many numbers are in the secret sequence? ";
                cin >> count;

                while (count <= 0) {
                    cout << "Error: Length must be greater than 0." << endl; // Error message for invalid inputs.
                    cout << "How many numbers are in the secret sequence? "; 
                    cin >> count;
                }

                string decodedMessage = "";

                for (int i = 0; i < count; ++i) {
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
                break;
            }

            case 2: {
                cout << "Instructions: \n";
                cout << "Numbers 1 through 26 correspond to letters A through Z.\n";
                cout << "Any number outside this range decodes to '?'." << endl;
                break;
            }

            case 0: {
                cout << "Exiting the program." << endl;
                break;
            }

            default: {
                cout << "Invalid Option. Please try again." << endl;
                break;
            }
        }

    } while (choice != 0);

    return 0;
}
