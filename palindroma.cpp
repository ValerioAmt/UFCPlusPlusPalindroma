#include <iostream>
#include <string>
 
using namespace std;
 
bool palindroma(string parola){
    bool risultato = true;
    
    int k = parola.length()-1;
 
    for(int i=0;i<parola.length();i++){
        cout << parola[i] << " == " << parola[k] << endl;
         
             if(parola[i] == parola[k]){ 
                k--;
             }
             else {
                k--;
                risultato = false;
             }
             
             
    }
    cout << parola << endl;
 
    return risultato;
 
}
 
int main()
{   
    string parola = "valerio";
    
    int a = 10;
    if(palindroma(parola)){
        cout << "La parola è palindroma" << endl;
    }
    else{
        cout << "La parola non è palindroma" << endl;
    }
}