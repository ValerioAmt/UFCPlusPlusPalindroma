#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    ofstream scrivo("testi/output.txt"); //istruzione per aprire in SCRITTURRA
    ifstream leggo("testi/testo.txt"); //istruzione per aprire in LETTURA
 
 
 
    // leggo il file
    string riga;
    while (getline(leggo, riga)) //TRUCCHETTO PER LEGGERE 1 RIGA ALLA VOLTA
    {
        scrivo << riga << endl;
    }
 
    // chiudo il file
    scrivo.close();
    leggo.close();
}