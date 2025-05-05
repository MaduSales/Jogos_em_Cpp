#include <iostream>
#include <cstdlib>  
#include <ctime> 

using namespace std;

int main()
{
    int conjuntoNumeros[6] = {};
    int numerosSorteados, numeroPalpite;
    bool repete = false, jaEscolhido = false;
    
    srand(time(0));
    
    
     for(int i = 0; i < 6; i++){
         repete = false;
         numerosSorteados = rand() % 60 + 1;
         
         for(int j = 0; j < 6; j++){
             if(numerosSorteados == conjuntoNumeros[j]){
                 repete = true;
                 break;
             }
         }
         
         if(repete == true){
             i--;
         }
         else{
             conjuntoNumeros[i] = numerosSorteados;
         }
       
        
     }
     
     cout << "Seja bem vindo à Mega-Sena! Escolha um número de 1 a 60 para começar o seu palpite: " << endl;
     for (int i = 0; i < 6; i++){
         
         do {
             jaEscolhido = false;
             cout << "\nDigite o " << i + 1 << "º palpite: ";
             cin >> numeroPalpite;
             
             if (numeroPalpite < 1 || numeroPalpite > 60){
                 cout << "\nInválido, tente de novo!";
                 cin >> numeroPalpite;
                 continue;
             }
         
         
         for (int j = 0; j < i; j++){
             if (conjuntoNumeros[j] == numeroPalpite){
                 jaEscolhido = true;
                 cout << "\nOps! Você já digitou esse número... Tente de novo!";
                 break;
             } 
             
             if(jaEscolhido == true) {
                i--;  
            }
            else {
                conjuntoNumeros[i] = numeroPalpite; 
            }
             
             
         }
         
     }
     
     
     

    return 0;
}
