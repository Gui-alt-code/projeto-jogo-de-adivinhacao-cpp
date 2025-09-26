#include <iostream>   // Biblioteca para entrada e saída (cout, cin)
#include <cstdlib>    // Biblioteca para funções como rand() e abs()
#include <ctime>      // Biblioteca para usar o tempo atual (time())

using namespace std;  // Para não precisar usar std:: antes de cout, cin, etc.

int main() { 
    // Mensagem de boas-vindas
    cout <<"**************************************" << endl;
    cout <<"* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout <<"**************************************" << endl;

    // Pergunta o nível de dificuldade
    cout <<"Escolha o seu nível de dificuldade: "<< endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)?" << endl;

    char dificuldade;
    cin >> dificuldade;  // Lê a dificuldade escolhida

    int numero_de_tentativas;

    // Define o número de tentativas baseado na dificuldade
    if(dificuldade == 'F') {
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M') {
        numero_de_tentativas = 10;
    }
    else {
        numero_de_tentativas = 5;
    }

    // Gera um número aleatório entre 0 e 99
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios
    const int NUMERO_SECRETO = rand() % 100; // Número a ser adivinhado
    
    bool nao_acertou = true; // Flag para saber se o jogador ainda não acertou
    int tentativas = 0; // Contador de tentativas

    double pontos = 1000.0; // Pontuação inicial do jogador

    // Loop das tentativas
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
        int chute;
        cout << "Tentativa número " << tentativas << endl;
        cout << "Qual seu chute? " << endl;
        cin >> chute; // Lê o chute do jogador

        // Calcula os pontos perdidos com base na diferença entre o chute e o número secreto
        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor de seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        // Verifica se acertou ou dá dicas
        if(acertou) {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false; // Marca que o jogador acertou
            break; // Sai do loop
        }
        else if(maior) {
            cout << "Seu chute foi maior que o número secreto!" << endl;   
        }
        else {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }

    // Mensagem final
    cout << "Fim de jogo!" << endl;

    if(nao_acertou) {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else {
        cout << "Você acertou o número secreto em " << tentativas << " tentativa(s)" << endl;
        cout.precision(2); // Define o número de casas decimais
        cout << fixed;     // Fixa o número de casas
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
}
