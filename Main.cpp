#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int i, idadeMi, idadeMa, pesoMi, pesoMa, alturaMi, alturaMa, carismaP, romanceP, talentoP, belezaP, carisma, talento, romance, beleza, autoestima, quantidade;

    cout << "Bem vindo ao Minas simulator, o melhor simulador de relacionamentos do mercado." << endl;
    cout << "Com quantas minas deseja testar sua sorte?" << endl;
    cin >> quantidade;
    cout << "Iremos perguntar suas preferências e você irá reponder de acordo!" << endl;
    cout << "Qual a idade minima que você aceita?" << endl;
    cin >> idadeMi;
    cout << "Agora qual a idade máxima?" << endl;
    cin >> idadeMa;
    cout << "Qual o peso mínimo que você aceita?" << endl;
    cin >> pesoMi;
    cout << "Qual o peso máximo que você aceita?" << endl;
    cin >> pesoMa;
    cout << "Qual a altura mínima que você aceita?" << endl;
    cin >> alturaMi;
    cout << "Qual a altura máxima que você aceita?" << endl;
    cin >> alturaMa;
    cout << "Agora perguntas sobre a personalidade de sua parceira na impressão inicial, todas devem ser respondida de 1 a 5 inclusive, sendo esse o seu requisito minimo nesse fator." << endl; 
    cout << "Quanto carisma você quer de seu parceiro?" << endl;
    cin >> carismaP;
    cout << "Quanto talento você quer de seu parceiro?" << endl;
    cin >> talentoP;
    cout << "Quanto romance você quer de seu parceiro?" << endl;
    cin >> romanceP;
    cout << "Quanto beleza você quer de seu parceiro?" << endl;
    cin >> belezaP;
    cout << "Agora sobre você!" << endl;
    cout << "Quão carismatico você se considera?" << endl;
    cin >> carisma;
    cout << "Quão talentoso você se considera?" << endl;
    cin >> talento;
    cout << "Quão romantico você se considera?" << endl;
    cin >> romance;
    cout << "Quão bonito você se considera?" << endl;
    cin >> beleza;
    cout << "Agora de 0 a 10 inclusive, de uma nota a sua auto estima, sendo 10 o valor máximo." << endl;
    cin >> autoestima;
    if (autoestima > 8)
    {
        carisma--;
        talento--;
        romance--;
        beleza--;
    }
    else if (autoestima <4)
    {
        carisma++;
        talento++;
        romance++;
        beleza++;
    }
    int tempo = clock();
    cout << "Gerando resultados..." << endl;
    cout << endl;
    while (clock() - tempo < 5000)
    {
    }
    for (i=1;i<=quantidade;i++)
    {
        int idade = (rand() % (90 - 16 + 1)) + 16, peso = (rand() % (120 - 30 + 1)) + 30, altura = (rand() % (195 - 140 + 1)) + 140;
        int carismaPf =(rand() % (5 - 1 + 1)) + 1, talentoPf = (rand() % (5 - 1 + 1)) + 1, romancePf = (rand() % (5 - 1 + 1)) + 1, belezaPf = (rand() % (5 - 1 + 1)) + 1;
        int carismaf =(rand() % (5 - 1 + 1)) + 1, talentof = (rand() % (5 - 1 + 1)) + 1, romancef = (rand() % (5 - 1 + 1)) + 1, belezaf = (rand() % (5 - 1 + 1)) + 1;
        cout << "Mina numero " + to_string(i) << endl;
        cout << "Idade: " +  to_string(idade) << endl;
        cout << "Peso: " + to_string(peso) << endl;
        cout << "Altura: " + to_string(altura) << endl;
        cout << "Carisma: " + to_string(carismaPf) << endl;
        cout << "Talento: " + to_string(talentoPf) << endl;
        cout << "Romance: " + to_string(romancePf) << endl;
        cout << "Beleza: " + to_string(belezaPf) << endl;
        cout << endl;

        if (idade < idadeMi || idade > idadeMa || peso < pesoMi || peso > pesoMa || altura < alturaMi || altura > alturaMa || carismaPf < carismaP || talentoPf < talentoP || romancePf < romanceP || belezaPf < belezaP)
        {
            cout << "Ela nao e a mina que você estava procurando" << endl;
        }
        else if (carisma < carismaf || talento < talentof || romance < romancef || beleza < belezaf)
        {
            cout << "Voce nao atendeu as expectativas da mina." << endl;
        }
        else 
        {
            cout << "Parabéns você achou seu par!" << endl;
            return 0;
        }
        cout << endl;
    }
    
    cout << "Você não achou nenhum par na sua procura." << endl;

    return 0;
}