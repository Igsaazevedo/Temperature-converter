
=======================================
      CONVERSOR DE TEMPERATURAS
=======================================

🧊 SOBRE O PROJETO

Este é um programa simples em C++ que converte temperaturas entre três escalas:
- Celsius (C)
- Fahrenheit (F)
- Kelvin (K)

Usuários podem escolher a escala de origem e a escala de destino, inserir o valor da temperatura, e o programa realizará a conversão automaticamente.

🛠 FUNCIONALIDADES

✔ Interface no terminal com menu inicial  
✔ Cores e atrasos para melhor experiência visual  
✔ Conversão entre qualquer par das escalas C/F/K  
✔ Validação de entradas com mensagens de erro  
✔ Possibilidade de repetir quantas conversões desejar

🔧 COMO COMPILAR E EXECUTAR

1. Compile o código com um compilador C++ (ex: g++, Dev C++, Code::Blocks):
   Exemplo no terminal:
   g++ -o conversor conversor.cpp

2. Execute o programa:
   ./conversor

⚠ REQUISITOS

- Sistema Windows (usa system("color") e Sleep da Windows.h)
- Compilador C++ compatível

📁 ESTRUTURA DO CÓDIGO

- main() → Inicia o programa
- cabecalho() → Imprime título
- menu() → Permite iniciar ou encerrar
- configura_cor_console() → Define cor do terminal
- conversor() → Onde toda a lógica da conversão acontece

👨‍💻 AUTOR

Desenvolvido por Ítalo Gabriel  
https://github.com/Igsaazevedo

📅 Versão: Maio de 2025
