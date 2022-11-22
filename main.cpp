#include <iostream>
#include <locale.h>
using namespace std;


struct prova{
    string enunciado;
    string respA;
    string respB;
    string respC;
    string respD;
    string respCorreta;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    prova vetor[5];
    prova p1;
    string enun, respCor;
    int op;
    do{
        cout << "1- Cadastro" << endl;
        cout << "2- Exclusão" << endl;
        cout << "3- Consulta" << endl;
        cout << "4- Sair" << endl;
        cout << "Opcao: ";
        cin >> op;
        switch(op){
            case 1:
                for(int i=0; i<5; i++){
                    cout << "Insira o enunciado da " << i+1 << "º questao: ";
                    cin >> p1.enunciado;
                    cout << "Insira a alternativa A: ";
                    cin >> p1.respA;
                    cout << "Insira a alternativa B: ";
                    cin >> p1.respB;
                    cout << "Insira a alternativa C: ";
                    cin >> p1.respC;
                    cout << "Insira a alternativa D: ";
                    cin >> p1.respD;
                    cout << "Insira qual é a alternativa correta [A] [B] [C] [D]: ";
                    cin >> p1.respCorreta;
                    vetor[i] = p1;
                }
            break;
            
            case 2:
                cout << "Insira o enunciado para exclusao: ";
                cin >> enun;
                for(int i=0; i<5; i++){
                    if(vetor[i].enunciado ==  enun){
                        vetor[i].enunciado = "";
                        vetor[i].respA = "";
                        vetor[i].respB = "";
                        vetor[i].respC = "";
                        vetor[i].respD = "";
                        vetor[i].respCorreta = "";
                        cout << "Excluido com sucesso!" << endl;
                    }
                }
            break;
            
            case 3:
                cout << "Insira a resposta correta para consulta: ";
                cin >> respCor;
                for(int i=0; i<5; i++){
                    if(vetor[i].respCorreta == respCor){
                        cout << "Questao [" << i+1 << "] " << vetor[i].enunciado << endl;
                    }
                }
            break;
            
            default:
                if(op != 4)
                    cout << "Opcao Invalida" << endl; 
            break;
        }
    }while(op != 4);
    return 0;
}
