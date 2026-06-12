#include "Encryption.h"

int main()
{
    Encryption e;

    int choice;
    string text;
    string key;
    int shift;
    char xorKey;

    do
    {
        cout << "\n===== Encryption System =====\n";
        cout << "1. Caesar Encrypt\n";
        cout << "2. Caesar Decrypt\n";
        cout << "3. Atbash Cipher\n";
        cout << "4. XOR Encrypt\n";
        cout << "5. XOR Decrypt\n";
        cout << "6. Vigenere Encrypt\n";
        cout << "7. Vigenere Decrypt\n";
        cout << "8. Reverse String Encryption\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice)
        {
        case 1:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter Shift: ";
            cin >> shift;

            cout << "Encrypted Text: "
                 << e.caesarEncrypt(text, shift) << endl;
            break;

        case 2:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter Shift: ";
            cin >> shift;

            cout << "Decrypted Text: "
                 << e.caesarDecrypt(text, shift) << endl;
            break;

        case 3:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Result: "
                 << e.atbashCipher(text) << endl;
            break;

        case 4:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter XOR Key: ";
            cin >> xorKey;

            cout << "Encrypted Text: "
                 << e.xorEncrypt(text, xorKey) << endl;
            break;

        case 5:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter XOR Key: ";
            cin >> xorKey;

            cout << "Decrypted Text: "
                 << e.xorDecrypt(text, xorKey) << endl;
            break;

        case 6:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter Key: ";
            getline(cin, key);

            cout << "Encrypted Text: "
                 << e.vigenereEncrypt(text, key) << endl;
            break;

        case 7:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Enter Key: ";
            getline(cin, key);

            cout << "Decrypted Text: "
                 << e.vigenereDecrypt(text, key) << endl;
            break;

        case 8:
            cout << "Enter Text: ";
            getline(cin, text);

            cout << "Encrypted Text: "
                 << e.reverseEncrypt(text) << endl;
            break;

        case 0:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 0);

    return 0;
}
