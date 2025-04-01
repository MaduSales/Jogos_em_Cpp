#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PEDRA = 0;
const int PAPEL = 1;
const int TESOURA = 2;

int geraNumero(){
    return rand() % 3;
}

void compararEscolhas(int escolhaUsuario, int escolhaMaquina){
    
     switch(escolhaUsuario){
         case PEDRA: 
         cout << "\nVocê escolheu Pedra!\n";
         break;
         
         case PAPEL:
         cout << "\nVocê escolheu Papel!\n";
         break;
         
         case TESOURA:
         cout << "\nVocê escolheu Tesoura!\n";
         break;
         
         default:
         cout << "\nInválido.";
     }
    
    switch(escolhaMaquina){
         case PEDRA: 
         cout << "\nA máquina escolheu Pedra!\n";
         break;
         
         case PAPEL:
         cout << "\nA máquina escolheu Papel!\n";
         break;
         
         case TESOURA:
         cout << "\nA máquina escolheu Tesoura!\n";
         break;
         
         default:
         cout << "\nInválido.";
     }
}

void jogoPedraPapelTesoura(int escolhaUsuario, int escolhaMaquina, int& pontosUsuario, int& pontosMaquina){
    if(escolhaUsuario == escolhaMaquina){
        cout << "\nNinguém pontuou!\n";
    }
    else if ((escolhaUsuario == PEDRA && escolhaMaquina == TESOURA) ||
    (escolhaUsuario == PAPEL && escolhaMaquina == PEDRA) || 
    (escolhaUsuario == TESOURA && escolhaMaquina == PAPEL)){
        pontosUsuario++;
        cout << "\nVocê ganhou! Parabéns!\n";
    } 
    else {
        pontosMaquina++;
        cout << "\nQue pena... talvez na próxima\n";
    }
    
}

void exibirPlacar(int pontosUsuario, int pontosMaquina){
    cout << "\nPlacar: " << pontosUsuario << "(usuário)" << " x " << pontosMaquina << "(máquina)" << endl;
    cout << endl;
}

int main()
{
    srand(time(0));
    int pontosUsuario = 0, pontosMaquina = 0, escolhaUsuario, escolhaMaquina, querJogar;
    
    do {
         cout << "=== Seja bem-vindo(a) ao jogo Pedra, Papel, Tesoura! ===\n\n";
            cout << "Escolha 0 (Pedra), 1  (Papel) ou 2 (Tesoura): ";
            cin >> escolhaUsuario;
            
        
        while (escolhaUsuario < PEDRA || escolhaUsuario > TESOURA){
            cout << "Número inválido. Escolha entre 0 (Pedra), 1  (Papel) ou 2 (Tesoura).\n";
            cin >> escolhaUsuario;
        }
        
    int escolhaMaquina = geraNumero();
    
    compararEscolhas(escolhaUsuario, escolhaMaquina);
    jogoPedraPapelTesoura(escolhaUsuario, escolhaMaquina, pontosUsuario, pontosMaquina);
    
    exibirPlacar(pontosUsuario, pontosMaquina);
    
    cout << "Você gostaria de jogar novamente? Digite 1 para sim ou qualquer tecla para sair: ";
    cin >> querJogar;
    
    cout << endl;
    cout << endl;
    } while (querJogar == 1);
    
    cout << "Obrigada por jogar!";
    
    
    return 0;
}
