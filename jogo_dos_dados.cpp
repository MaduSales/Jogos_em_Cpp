#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolarDado(){

    return (rand() % 6) + 1;
}

void calcularFrequenciaDosDados(int numDeLancamentos){
    
    int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;
    for(int i = 0; i < numDeLancamentos; i++){
    
        int resultado = rolarDado();
        
        switch(resultado){
            case 1 : freq1++; break;
            case 2 : freq2++; break;
            case 3 : freq3++; break;
            case 4 : freq4++; break;
            case 5 : freq5++; break;
            case 6 : freq6++; break;
        }
        
    }
    
    cout << "Agora, após rolar um dado " << numDeLancamentos << " vezes, veja quantas vezes cada número foi sorteado: \n";
        cout << "Número 1: " << freq1 << " vezes. \n";
        cout << "Número 2: " << freq2 << " vezes. \n";
        cout << "Número 3: " << freq3 << " vezes. \n";
        cout << "Número 4: " << freq4 << " vezes. \n";
        cout << "Número 5: " << freq5 << " vezes. \n";
        cout << "Número 6: " << freq6 << " vezes. \n";
        cout << endl;
    
}

int main()
{
    srand(time(0));
    
    // Caso o dado role 100 vezes: 
    calcularFrequenciaDosDados(100);
    
    // Caso o dado role 1000 vezes: 
    calcularFrequenciaDosDados(1000);    
       
    // Caso o dado role 1 milhão de vezes:
    calcularFrequenciaDosDados(1000000);
    

    return 0;
}
