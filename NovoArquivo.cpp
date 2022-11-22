#include <iostream>
using namespace std;
int main(){
	int op, mes;
	double salario, novosal,ferias, decter;
	
	do {
		cout << "Menu de Opcoes" << endl;
		cout << "1. Novo Salario" << endl;
		cout << "2. Ferias " << endl;
		cout << "3. Decimo Terceiro" << endl;
		cout << "4. Sair" << endl;
		cout << "Opcao: "; 
		cin >> op; 
		switch(op)
		{
			case 1:
				   cout << "Insira o salario: "; 
				   cin >> salario;
				   if(salario > 0) {
					   if(salario < 1100) {
						   novosal = salario*1.15;
					   }else if(salario >= 1100 && salario <= 2750){
						   novosal = salario*1.10;
					   }else
					   {
						 novosal = salario*1.05; 
					   }
					   cout << "Novo Salario: " << novosal << endl;
				   }else{
					   cout << "Salario Invalido!" << endl; 
				   }	   	
			break;
			case 2:
				cout << "Insira o salario: "; 
   	   	   	    cin >> salario;
   	   	   	    ferias = salario +(salario / 3);
				cout << "Total das Ferias: " << ferias << endl;  
			break;
			case 3:
				cout << "Insira o salario: "; 
   	   	   	    cin >> salario;
   	   	   	    cout << "Insira a quantidade de meses trabalhado: "; 
   	   	   	    cin >> mes; 
   	   	   	    if(mes > 12)
   	   	   	    	cout << "Quantidade de Meses Invalida." << endl;
   	   	   	    else{
   	   	   	    	decter = (salario*mes)/12;
					cout << "Valor do Decimo Terceiro: " << decter << endl;  
				}
 	    	break;
			default:
				if(op != 4)
					cout << "Opcao invalida" << endl;
			break;
		}		
	} while(op != 4);
	return 0; 
}
	