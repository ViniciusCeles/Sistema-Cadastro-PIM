#include <iostream>
#include <fstream> // Para manipulação de arquivos

using namespace std;

int main() {
    string nomeprod, codprod, categprod, marcaprod, precoprod, codcateg;
    string resposta;

    while (true) {
        cout << "Realizar um novo cadastro? (s/n): ";
        getline(cin, resposta);
        if (resposta == "n") {
            break;
        }

        // Solicita informações ao usuário
        cout << "Digite Nome do produto: ";
        getline(cin, nomeprod);

        cout << "Digite o Codigo do produto: ";
        getline(cin, codprod);

        cout << "Digite a Categoria do produto: ";
        getline(cin, categprod);
        
        cout << "Digite a Marca do produto: ";
        getline(cin, marcaprod);
        
        cout << "Digite o Preco do produto: ";
        getline(cin, precoprod); 

        cout << "Digite o Codigo categoria: ";
        getline(cin, codcateg); 

        cout << "Deseja confirmar o cadastro? (s/n): ";
        getline(cin, resposta);
        if (resposta == "n") {
            continue;
        }

        // Abre o arquivo para escrita
        ofstream arquivo("maladireta.txt", ios::app);

        // Verifica se o arquivo foi aberto corretamente
        if (arquivo.is_open()) {
            // Escreve as informações no arquivo
            arquivo << "Nome do Produto: " << nomeprod << endl;
            arquivo << "Codigo Produto: " << codprod << endl;
            arquivo << "Categoria Produto: " << categprod << endl;
            arquivo << "Marca Produto: " << marcaprod << endl;
            arquivo << "Preco Produto: " << precoprod << endl;
            arquivo << "Codigo Categoria: " << codcateg << endl;

            // Fecha o arquivo
            arquivo.close();

            cout << "As informacoes foram gravadas no arquivo maladireta.txt" << endl;
        } else {
            // Se houver um erro ao abrir o arquivo
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    return 0;
}

