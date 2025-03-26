#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int Par = 0;
const int Impar = 1;

int geraNumero(){
    return rand() % 11;
}

void jogoParImpar(int escolha, int numUsuario, int& pontosUsuario, int& pontosMaquina){
    int numMaquina = geraNumero(), soma;
    
    cout << "O número gerado pela máquina foi: " << numMaquina << endl;
    soma = numMaquina + numUsuario;
    cout << "A conta entre os dois números é " << numMaquina << " + " << numUsuario << " = " << soma << endl;
    cout << endl;
    
    if (soma % 2 == 0 && escolha == Par || soma % 2 != 0 && escolha == Impar){
        pontosUsuario++;
        cout << "PARABÉNS! VOCÊ GANHOU! \n";
        
    }
    else{
        pontosMaquina++;
        cout << "Que pena, não foi dessa vez...\n";
    }
    
}

void exibirPlacar(int pontosUsuario, int pontosMaquina){
    cout << "\nPlacar: " << pontosUsuario << "(usuário)" << " x " << pontosMaquina << "(máquina)" << endl;
    cout << endl;
}


int main()
{
    srand(time(0));
    int numUsuario = 0, pontosUsuario = 0, pontosMaquina = 0, escolha, querJogar;
    
    do {
        cout << "=== Seja bem-vindo(a) ao jogo do ímpar ou par! ===\n";
            cout << endl;
            cout << "Digite 0 para escolher par ou 1 para ímpar: ";
            cin >> escolha;

       while (escolha != 0 && escolha != 1){
            cout << "Número inválido. Escolha 0 ou 1: ";
                cin >> escolha;
        }
        
    cout << "\nAgora digite um número: ";
    cin >> numUsuario;
    
    jogoParImpar(escolha, numUsuario, pontosUsuario, pontosMaquina);
    exibirPlacar(pontosUsuario, pontosMaquina);
    
    cout << "Você gostaria de jogar novamente? Digite 1 para sim ou qualquer tecla para sair: ";
    cin >> querJogar;
  
    } while (querJogar == 1);
    
    cout << "\nObrigada por jogar!";
    
    
    return 0;
}
