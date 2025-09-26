# 🎯 Jogo de Adivinhação

# 📋 Descrição:

Este é um jogo simples de adivinhação desenvolvido em C++. O objetivo do jogo é adivinhar um número secreto gerado aleatoriamente pelo computador. O jogador tem um número limitado de tentativas para acertar o número.

# 💻 Ferramentas e Tecnologias Utilizadas:

*   **Linguagem C++:** A linguagem de programação principal utilizada no desenvolvimento do jogo.
*   **g++:** Compilador usado para transformar códigos C++ em programas executáveis.
*   **Editor de Texto/IDE:** Utilizado para escrever e editar o código (ex: VSCode, Code::Blocks, etc.).

**Bibliotecas padrão utilizadas:**

* iostream: Para entrada e saída de dados
* cstdlib: Para geração de números aleatórios (rand(), srand())
* ctime: Para obter o tempo atual (time()) e inicializar a semente do gerador de números

## 📢 Funcionalidades:

* 🔢 Geração de número secreto aleatório.
* 🎯 Controle do número de tentativas.
* 📈 Feedback ao jogador (palpite alto ou baixo).
* 🏆 Mensagens de vitória ou derrota.

# ✅ Pré-requisitos:

Você precisa de um compilador C++ instalado, como o g++.

# 🔧 Como Testar o Código:

1) Em primeiro lugar, abra o Prompt de Comando de seu computador e certifique-se que está na pasta do projeto, por meio do seguinte código:




   `C:\Users\SeuUsuario>cd "C:\Users\guilh\OneDrive\Área de Trabalho\Jogo-de-adivinhacao-C++"`




   Exemplo do código acima em meu Prompt de Comando:





   `C:\Users\guilh>cd "C:\Users\guilh\OneDrive\Área de Trabalho\Jogo-de-adivinhacao-C++"`




2) Após isso, compile o código por meio do comando a seguir:




   `g++ jogo_de_adivinhacao.cpp -o jogo_de_adivinhacao`




    Exemplo do código acima em meu Prompt de Comando:




    `C:\Users\guilh\OneDrive\Área de Trabalho\Jogo-de-adivinhacao-C++>g++ jogo_de_adivinhacao.cpp -o jogo_de_adivinhacao`




4) Posteriormente, digite o código a seguir no terminal e aproveite o jogo!




    `jogo_de_adivinhacao`



    Exemplo do código acima em meu Prompt de Comando:



     `C:\Users\guilh\OneDrive\Área de Trabalho\Jogo-de-adivinhacao-C++>jogo_de_adivinhacao`



# 🎮 Jogando:

# Regras do jogo:

1. **🧩 Escolha a dificuldade**
   
   Logo ao iniciar o jogo, você deverá escolher o nível de dificuldade digitando uma das seguintes opções:

* F → Fácil (15 tentativas)
* M → Médio (10 tentativas)
* D → Difícil (5 tentativas)

2. **🎲 Número Secreto**

* O programa sorteia um número secreto entre 0 e 99, de forma aleatória, usando a função rand().

3.  **🎯 Chutando o Número:**

* A cada rodada, você deve digitar um número (seu chute), e o programa informará se:

* Seu chute foi maior que o número secreto.

* Ou se você acertou!

4. **🧮 Pontuação**

* Você começa com 1000 pontos.

* A cada erro, você perde pontos com base na distância entre o seu chute e o número secreto.

* Quanto mais próximo do número correto, menos pontos você perde

5. **Fim do jogo**

5.1 **O jogo termina quando:**

* Você acerta o número secreto dentro do limite de tentativas.

* Ou você esgota todas as tentativas sem acertar.

5.2 **Ao final, o programa informa:**

* Se você venceu ou perdeu.

* Quantas tentativas foram usadas.

* Sua pontuação final.

# 📄 Licença

Este projeto é de livre uso para fins educacionais. Sinta-se à vontade para modificar, adaptar ou expandir!
