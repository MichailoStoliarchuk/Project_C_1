//Завдання 1

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int z = 0;
    int b = 0;
    char str[100];
    char word[100];

    cout << "Enter sentence " << endl;
    cin.getline(str, 100);

    cout << "Enter word " << endl;
    cin >> word;

    for (int j = 0; word[j] != '\0'; j++) {
        z++;
    }

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == word[0]) {

            int k = 0;

            while (word[k] != '\0' && str[i + k] == word[k]) {
                k++;
            }
            if (word[k] == '\0') {

                if (str[i + k] == ' ') {
                    b++;
                }
                else if (str[i + k] == '\0') {
                    b++;
                }
            }
        }
    }

    cout << "Words " << b << endl;

    return 0;
}