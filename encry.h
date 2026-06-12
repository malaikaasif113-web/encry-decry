#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <iostream>
#include <string>

using namespace std;

class Encryption
{
public:
    string caesarEncrypt(string text, int shift);
    string caesarDecrypt(string text, int shift);

    string atbashCipher(string text);

    string xorEncrypt(string text, char key);
    string xorDecrypt(string text, char key);

    string vigenereEncrypt(string text, string key);
    string vigenereDecrypt(string text, string key);

    string reverseEncrypt(string text);
};

#endif
