#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float nota1,nota2,nota3,media;
	cout<<"Digite as 3 notas do aluno";
	cin>>nota1>>nota2>>nota3;
	
	media = (nota1+nota2+nota3)/3;
	
	if(media>=6){
		cout<<"Aprovado com média";
	}
	else{
		cout<<"Reprovado com média";
	
	}
	cout<<media<<endl;
	return 0;
	}
