#include <stdio.h>
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void menuYazdir() {
    cout << "\n1. Tamamen buyuk\n";
    cout << "2. Tamamen kucuk\n";
    cout << "3. Buyukse kucuk kucukse buyuk\n";
    cout << "4. Kelimelerin ilk harfini buyuk\n";
    cout << "0. Cikis\n";
    cout << "Yapmak istediginiz islemi seciniz :\n";
}

string buyut(string str) {
    for (auto& i : str) {
        i = toupper(i);
    }
    return str;


}

string kucult(string str) {
    for (auto& i : str) {
        i = tolower(i);
    }
    return str;


}

string bkkb(string str) {
    char buyuk[27] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char kucuk[27] = "qwertyuiopasdfghjklzxcvbnm";

    int i, j;
    string a;
    for (i = 0; i < str.size(); i++) {
        for (j = 0; j < 27; j++) {
            if (str[i] == buyuk[j]) {
                str[i] = tolower(str[i]);
            }
            else if (str[i] == kucuk[j]) {
                str[i] = toupper(str[i]);
            }
        }
    }
    for (int k = 0; k < str.size(); k++) {
        a += str[k];
    }
    return a;
}

string kihb(string str) {
    str[0] = toupper(str[0]);
    string b;
    int i;
    int a = 0;
    for (i = 1; i < str.size(); i++) {
        a++;
        if (str[i] < 91 && str[i]>64) {
            continue;
        }
        if (str[i] == ' ') {
            a = 0;
        }
        if (a == 1) {
            str[i] = toupper(str[i]);
        }
    }
    for (int k = 0; k < str.size(); k++) {
        b += str[k];
    }
    return b;
}

int main() {
    int tercih;
    char a, b;
    string str;
    cout << "Karekter katarı girin :\n";
    getline(cin, str);
    int d = str.size();
    char dizi1[100];
    char dizi2[100];

    menuYazdir();
    cin >> tercih;

    switch (tercih) {
    case 1:

        cout << buyut(str) << endl;
        break;
    case 2:
        cout << kucult(str) << endl;
        break;
    case 3:
        cout << bkkb(str) << endl;
        break;
    case 4:
        cout << kihb(str) << endl;
        break;
    case 0:
        cout << "Sistemden çıkıs yapıldı" << endl;
        cout << endl;
        break;
    default:
        cout << "Hatalı giris!" << endl;
        cout << endl;
    }
    return 0;
}
