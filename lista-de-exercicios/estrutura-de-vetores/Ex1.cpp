#include <iostream>

using namespace std;

int main(){
	
	const int alunos = 10;
	int aux = 0;
	float nota[alunos], media, soma;
	
	for (int i=1; i<=alunos; i++){
		cout<<"Digite a nota do aluno "<<i<<endl;
		cin>>nota[i];
		soma += nota[i];
		}
		
		media = soma/alunos;
		
		for (int i=1; i<=alunos; i++){
			if(nota[i] > media){
				aux++;
				}
			}
			
		cout<<aux<<" alunos tiveram a nota acima da média!"<<endl;
		
	return 0;
}
