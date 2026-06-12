#include "Encryption.h"

string Encryption::caesarEncrypt(string text, int shift)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' + shift) % 26) + 'A';
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' + shift) % 26) + 'a';
        }
    }

    return text;
}

string Encryption::caesarDecrypt(string text, int shift)
{
    return caesarEncrypt(text, 26 - shift);
}

string Encryption::atbashCipher(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = 'Z' - (text[i] - 'A');
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = 'z' - (text[i] - 'a');
        }
    }

    return text;
}

string Encryption::xorEncrypt(string text, char key)
{
    for(int i = 0; i < text.length(); i++)
    {
        text[i] = text[i] ^ key;
    }

    return text;
}

string Encryption::xorDecrypt(string text, char key)
{
    return xorEncrypt(text, key);
}

string Encryption::vigenereEncrypt(string text, string key)
{
    int j = 0;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' +
                       (key[j % key.length()] - 'A')) % 26) + 'A';
            j++;
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' +
                       (tolower(key[j % key.length()]) - 'a')) % 26) + 'a';
            j++;
        }
    }

    return text;
}

string Encryption::vigenereDecrypt(string text, string key)
{
    int j = 0;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' -
                       (key[j % key.length()] - 'A') + 26) % 26) + 'A';
            j++;
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' -
                       (tolower(key[j % key.length()]) - 'a') + 26) % 26) + 'a';
            j++;
        }
    }

    return text;
}

string Encryption::reverseEncrypt(string text)
{
    int start = 0;
    int end = text.length() - 1;

    while(start < end)
    {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;

        start++;
        end--;
    }

    return text;
}
