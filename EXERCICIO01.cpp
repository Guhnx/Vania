#include <iostream>
using namespace std;
int main(){
	int	vector[8];
	for(int i = 0; i < 8; i++){
		cout << "insira um valor: ";
		cin >> vector[i];
	}
	for(int i = 7; i >= 0; i--){
		cout << vector[i] << endl; 
	}
	return 0;
}
