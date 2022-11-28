/*
 2022-1_aed1_ed11 - v0.0. - 12 / 06 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : g++ -o 2022-1_aed1_ed11 2022-1_aed1_ed11.cpp
 Windows: g++ -o 2022-1_aed1_ed11 2022-1_aed1_ed11.cpp
 Para executar em terminal (janela de comandos):
 Linux : ./2022-1_aed1_ed11
 Windows: 2022-1_aed1_ed11
*/


#include "io.hpp"
using namespace std;

void method01 (){
int x = IO_readint("Entre com o limite inferior:"); 
int y = IO_readint("Entre com o limite superior:");
int z = IO_readint("Quantidade de numeros que serao gravados:");

ofstream arquivo;
arquivo.open ("DADOS01.TXT");
arquivo << z << endl; 

for(int i=0;i<z;i++){
int random = rand() % (y+1);
if (random<x){
    random += x;
}
arquivo << random << endl;
}
arquivo.close();
}


void method02 () { 
   // int *arranjo = (int*) malloc(n*sizeof (int)); 
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    int maior = 0;
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();


    for (int i = 0; i<n; i++)
    {
        if (maior < arranjo [i])
        {
            maior = arranjo [i];
        }
    }
    cout << "O maior valor encontrado no arranjo foi o " << maior << endl;
    getchar();
    IO_pause("Aperte enter para terminar");
}

void method03 () { 
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();

    int menor = arranjo[0];

    for (int i = 1; i<n; i++)
    {
        if (menor > arranjo [i])
        {
            menor = arranjo [i];
        } 
    }
   cout << "O menor valor encontrado no arranjo foi o "<< menor << endl;
    getchar();
    IO_pause("Aperte enter para terminar");
}
void method04 () { 
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    int resultado = 0;
    for(int i=0; i<n; i++){
        resultado = arranjo[i] + resultado;
        
    }
 cout << "A soma de todos os valores desse arranjo eh "<< resultado << endl;
 getchar();
IO_pause("Aperte enter para terminar");
}

void method05 () { 
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    float media = 0;
    for (int i =0; i<n; i++)
    {
       media = arranjo[i] + media;
    }
    cout << "A media dos valores do arranjo eh " << media/n << endl;
    getchar();
    IO_pause("Aperte enter para terminar");
    

}
void method06 (){
ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();

    bool testezero = true;
    for (int i =0; i<n; i++)
    {
       if (arranjo[i] != 0) {
           testezero = false; 
       }
      
    }
    if (testezero == true){
        cout << "O arranjo eh somente composto por zeros." << endl;
    }
    else{
        cout << "O arranjo nao eh somente composto por zeros." << endl;
    }
    getchar();
    IO_pause("Aperte enter para terminar");

}


void method07 (){
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    bool decrescente = true;
    int i = 0;
    while (decrescente && i < n-1)
    {
       if (arranjo [i] < arranjo [i+1]){
           decrescente = false;
       }
       i = i + 1;
    } 
    if(decrescente){
        cout << "O arranjo esta ordenado em ordem decrescente" << endl; 
    }
    else{
        cout << "O arranjo nao esta ordenado em ordem decrescente" << endl;
    }
    getchar();
    IO_pause("Aperte enter para terminar");

}

void method08(){
ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    bool procura = false;
    int i = 0;
    int x = IO_readint("Qual valor deseja procurar no arranjo? ");
    while (!(procura) && i < n-1)
    {
       if (arranjo [i] == x)
       {
           procura = true;
       }
       i = i + 1;
    } 
    if (procura){
        cout << "\nO valor esta presente no arranjo" << endl;
    }
    else{
        cout << "\nO valor nao esta presente no arranjo" << endl;
    }
    getchar();
    IO_pause("Aperte enter para terminar");
 
}


void method09(){
    ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    int x = IO_readint("Digite o valor que multiplicara o arranjo: ");
    for (int i = 0; i<n ; i++){
        arranjo[i] = arranjo [i] * x;
        }
    for (int i=0; i<n; i++){
        cout << arranjo[i] << endl;
    }
    getchar();
    IO_pause("Aperte enter para terminar");
}

void method10(){
     ifstream arquivo;
    arquivo.open ("DADOS01.TXT");
    int n;
    arquivo >> n;
    int *arranjo = new int[n];
    for (int i = 0; i<n;i++){
     arquivo >> arranjo[i];
    }
    arquivo.close();
    int aux = 0;
    for(int j=0; j<n; j++ ){
    for(int i=0; i<n-1; i++){
        if(arranjo[i]<arranjo[i+1]){
            aux = arranjo[i+1];
            arranjo [i+1] = arranjo[i];
            arranjo[i] = aux;  
        }
    }
    }
    for (int i = 0; i<n; i++){
        cout << arranjo[i] << endl;
    }

    getchar();
    IO_pause("Aperte enter para terminar");
    }












/**
 * Funcao principal
 * @return codigo de encerramento
 */
int main(int argc, char *argv[])
{
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do
    {
        // identificar
        IO_println("ESTUDO DIRIGIDO 11 - Programa - v0.0");

        // ler do teclado
        IO_println("\nOpcoes:");
        IO_println("\n0 - parar");
        IO_println("1 - Exercicio 1");
        IO_println("2 - Exercicio 2");
        IO_println("3 - Exercicio 3");
        IO_println("4 - Exercicio 4");
        IO_println("5 - Exercicio 5");
        IO_println("6 - Exercicio 6");
        IO_println("7 - Exercicio 7");
        IO_println("8 - Exercicio 8");
        IO_println("9 - Exercicio 9");
        IO_println("10 - Exercicio 10");
       

        x = IO_readint("Escolha com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            // method00();
            break;
      case 1:
            method01();
            break;
        case 2:
            method02();
           break;
             case 3:
            method03();
            break;
           case 4:
            method04();
            break;
            case 5:
            method05();
            break;
           case 6:
            method06();
            break;
            case 7:
            method07();
            break;
            case 8:
            method08();
            break;
            case 9:
            method09();
            break;
           case 10:
            method10();
            break;    
        default:
            IO_println("ERRO: Valor invalido.");
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte ENTER para terminar");
    return (0);
}