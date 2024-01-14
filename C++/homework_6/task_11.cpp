#include <iostream>
#include <string>

using namespace std;

int countVowels() {
    string vowels = "eyuioaEYUIOAàóîûèýÿþ¸åÀÓÎÛÈÝßÞ¨Å";
    int count = 0;
    string str;


    cin >> str;

    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
