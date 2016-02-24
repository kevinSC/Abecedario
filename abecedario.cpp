//Librerias
#include <iostream>
#include <string>

//Namespace
using namespace std;


int main (){
    // variables
        string letters = "abcdefghijklmnopqrstuvwxyz";
        int xaxis;
        int yaxis;
        string letter;
    cout << "Ingresa el numero de caracteres que deseas ver horizontalmente:\n";
    cin >> xaxis;
    cout << "Ingresa el numero de caracteres que deseas ver verticalmente:\n";
    cin >> yaxis;
    cout << "Ingresa La letra limite:" << endl;
    cin >> letter;
    size_t pos = letters.find(letter) + 1;
    letters = letters.substr(0, pos);
    string changin = letters;
    int white = 0;
    bool rev = false;

    cout << changin;
    for (int i = 0; i < yaxis; i++){
        int limit = 0;
        
    }

    return 0;
}

