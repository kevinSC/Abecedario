//Librerias
#include <iostream>
#include <string>

//Namespace
using namespace std;

int main (){
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int xaxis;
    int yaxis;
    string letter;
    cout << "Ingresa el numero de caracteres que deseas ver horizontalmente:\n";
    cin >> xaxis;
    xaxis = 20;
    cout << "Ingresa el numero de caracteres que deseas ver verticalmente:\n";
    cin >> yaxis;
    cout << "Ingresa La letra limite:" << endl;
    cin >> letter;
    size_t pos = letters.find(letter) + 1;
    letters = letters.substr(0, pos);
    string changin = letters;
    int white = 1;
    bool rev = false;
    for (int j = 0; j < yaxis; j++){
        int limit = 0;
        string spaces = "";
        for (int i = 0; i < (pos - white); i++)
            spaces += " ";
        changin = changin.substr(0, (white)) + spaces;
        for (int i = 0; i < xaxis; i++){
            if (limit == pos + 1){
                string auxiliar = "";
                for (auto rit=changin.crbegin(); rit!=changin.crend(); rit++)
                     auxiliar += *rit;
                changin = auxiliar;
                limit = 1;
            }
            cout << changin[limit];
            limit ++;
        }
        cout << "\n";
        if (rev)
            white --;
        else
            white ++;
        if (white == pos)
            rev = true;
        if (white == 1)
            rev = false;
        changin = letters;
    }
    return 0;
}