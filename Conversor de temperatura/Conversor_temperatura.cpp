#include <iostream>
#include <iomanip> // Controle de casas decimais
#include <cstdlib> // Para habilitar a varíavel system()
#include <windows.h> //Para habilitar a função Sleep
#include <string> //Para habilitar o uso da varíavel String
#include <unordered_map> //Para habilitar o uso da varíavel Unordered_map
using namespace std;

 //Mapa

    unordered_map <char, string> escalaMap = {
        {'1', "Celcius (C)"},
        {'2', "Fahrenheit (F)"},
        {'3', "Kelvin (K)"}
    };

    //Função que retorna o nome da escala

    string obter_nome_escala (char escala) {
        if (escalaMap.count(escala)) {
            return escalaMap[escala];
        }

        else {
            return "\nInvalida";
        }

    }

//Cabecalho do programa

void cabecalho () {

    cout << "======================================" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;  
    cout << "*             CONVERSOR              *" << endl;   
    cout << "*                DE                  *" << endl;
    cout << "*           TEMPERATURAS             *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "======================================" << endl;

}

//Menu

void menu () {

    int iniciar_fechar;

    cout << "\nIniciar programa" << "  -->  [1]" << endl;
    cout << "\nFechar programa" << "   -->  [2]" << endl;
    cin >> iniciar_fechar;
    
    switch (iniciar_fechar)
    {
    case 1:
        cout << "\nO programa ira iniciar em 3 segundos..." << endl;
            
        Sleep(3000); //Faz o programa aguardar 3s para ir para a próxima parte

        system ("cls");
    break;
        
    case 2:
        cout << "\nO programaa ira encerrar em 5 segundos..." << endl;
            
        Sleep(5000); //Faz o programa aguardar 5s para ir para a próxima parte

        exit(0); //Fecha o programa - obs.: Específico para Windows

    break;

    default:

        cout <<"\nOpcao escolhida e invalida, reinicie o programa!" << endl;
        exit(0);

    break;
    }
    
}

//Configura cor do fundo e do texto do CMD

void configura_cor_console() {
    
    system("color 02");  //Fundo preto, Texto verde
    
}

//Conversor

void conversor () {

    char repeticao;

    do {

        //Declaração de váriaveis

        float conversao_final, valor;
        string termos1, termos2;
        char primeira_escala, segunda_escala;
    
        //Texto introdutório
    
        cout << "\nVoce esta utilizando um conversor de escalas de temperaturas!" << endl;
        cout << "\nPara iniciar, escolha quais escalas voce vai utilizar (escolha entre 1/2/3 - segue tabela): \n" << endl;

        //Tabela de escalas
        
        cout << string (27, '-') << endl;

        cout << left << setw(10) << "| Escala" << "   | " << setw(35) << "    Numero |" << endl;
        
        cout << string (27, '-') << endl;

        cout << left << setw (18) << "| Celcius (C)" << setw (40) << "--> [1] |" << endl;
        cout << left << setw (18) << "| Fahrenheit (F)" << setw (40) << "--> [2] |" << endl;
        cout << left << setw (18) << "| Kelvin (K)" << setw (40) << "--> [3] |" << endl; 

        cout << string (27, '-') << endl;
            
        //Entrada de dados

        cout << "\nPrimeira escala: " << endl;
        cin >> primeira_escala;
        cout << "\ne para qual voce quer converter: " << endl;
        cin >> segunda_escala;

        termos1 = obter_nome_escala(primeira_escala);
        termos2 = obter_nome_escala(segunda_escala);

        if (termos1 == "Invalida" && termos2 == "Invalida") {
            cout << "\nUm ou mais escalas que voce escolheu sao invalidas!" << endl;
        }

        else {
            cout << "\nVoce escolheu converter de " << termos1 << " para " << termos2 << "!" << endl;
        }

        
        cout << "\nAgora digite valor que voce deseja converter: " << endl;
        cin >> valor;

        //Definição de váriavel de conversão

        int conversao = 10 * (primeira_escala - '0') + (segunda_escala - '0');

        //Calculos / Saída de Dados

        switch (conversao) {
            
            case 12: 
                // F = (C * 9/5) + 32, Ex: 40ºC = (40 * 9/5) + 32 = 104ºF.
                conversao_final = (valor * 9/5) + 32; 

                cout << "\nA conversao de Celcius para Fahrenheit e equivalente a: " << conversao_final << "° F" << endl;

            break;
        
            case 21:

                // C = (F - 32) * 5/9, Ex: 104ºF = (104 - 32) * 5/9 = 40ºC. 
                conversao_final = (valor - 32) * 5/9;

                cout << "\nA conversao de Fahrenheit para Celcius e equivalente a: " << conversao_final << "° C" << endl;
                
            break;

            case 13:

                // K = C + 273,15, Ex: 20ºC = 20 + 273,15 = 293,15K.  
                conversao_final = valor + 273.15;

                cout << "\nA conversao de Celcius para Kelvin e equivalente a: " << conversao_final << "° K" << endl;
                
            break;

            case 31:

                // C = K - 273,15, Ex: 293,15K = 293,15 - 273,15 = 20ºC.   
                conversao_final = valor - 273.15;

                cout << "\nA conversao de Kelvin para Celcius e equivalente a: " << conversao_final << "° C" << endl;
                
            break;

            case 23:

                // K = (5/9 * (F - 32)) + 273,15, Ex: 77°F = (5/9 * (77 - 32)) + 273,15 = 298,15°K.
                conversao_final = (5/9 * (valor - 32)) + 273.15;

                cout << "\nA conversao de Fahrenheit para Kelvin e equivalente a: " << conversao_final << "° K" << endl;
                
            break;

            case 32:

                // °F = (K − 273,15) × 1,8 + 32, Ex: 77°K = (77 - 273,15) * 1,8 + 32 = -321,07°K.
                conversao_final = (valor - 273.15) * 1.8 + 32;

                cout << "\nA conversao de Kelvin para Fahrenheit e equivalente a: " << conversao_final << "° F" << endl;
                
            break;

            default:
                // Caso que ocorreria na condição de uma escolha invalida

                cout << "\nOs numeros escolhidos foram invalidos!!!" << endl;
            
            break;
        }

        //Caso o usuário queira usar a programação novamente

        cout << "\nDeseja fazer outra conversao? (y ou n): " << endl;
        cin >> repeticao;
        repeticao = tolower (repeticao);

        cout << "\nObrigado por usar o Conversor!" << endl;

        Sleep(2000);

        system ("cls");
    }

    while (repeticao == 'y');

}

int main () {

    configura_cor_console ();
    cabecalho ();
    menu();
    conversor ();

    return 0;
}