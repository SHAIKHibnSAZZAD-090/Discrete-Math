#include <iostream>

using namespace std;

int main()
{
    char message[100], ch, message2[100];
    int i, key,key2;
    cout << "Enter a message to encrypt: ";
    cin.getline(message, 100);
    cout << "Enter key: ";
    cin >> key;
    for (i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    for (i = 0; message[i] != '\0'; ++i)
    {
        message2[i] = message[i];
    }
    cout << "\nEncrypted message: " << message << endl;
    cout<<"\nThe message we will decryt: "<<message2<<endl;
    cout << "Enter key2: ";
    cin >> key2;
    for (i = 0; message2[i] != '\0'; ++i)
    {
        ch = message2[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            message2[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if (ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message2[i] = ch;
        }
    }
    cout << "\nDecrypted message: " << message2<<endl;
    return 0;
}
