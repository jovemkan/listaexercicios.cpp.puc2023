#include <iostream>

using namespace std;

int menu(){
	
	cout<<"1 - Ler vetor A"<<endl;
	cout<<"2 - Ler vetor B"<<endl;
	cout<<"3 - A U B"<<endl;
	cout<<"4 - A ∩ B"<<endl;
	cout<<"5 - A - B"<<endl;
	cout<<"6 - B - A"<<endl;
	cout<<"7 - Descobrir de A é subconjunto de B"<<endl;
	cout<<"8 - Descobrir de B é subconjunto de A"<<endl;
	cout<<"9 - Descobrir se A e B são conjuntos identicos"<<endl;
	cout<<"10 - Descobrir se A e B são conjuntos disjuntos"<<endl;
	cout<<"11 - Calcular o produto escalar entre A e B"<<endl;
	cout<<"12 - Determinar um conjunto formado  pelos  membros  que  compõem  a maior  sub-cadeia  ordenada  de forma crescente em A"<<endl;
	cout<<"0 - Sair"<<endl;
	int op;
	cin>>op;
	return op;
}

int main(){
	
	bool achou;
	const int MAX = 30;
	int op, a[MAX], b[MAX], c[MAX+MAX];
	op = menu();
	while(op!=0){
		switch(op){
			case 1:
			cout<<"Digite os valores do Vetor A:"<<endl;
			for(int i=0; i<MAX; i++){
				cout<<"A["<<i<<"]:";
				cin>>a[i];
				}
				break;

			case 2:
			for(int i=0; i<MAX; i++){
				cout<<"B["<<i<<"]:";
				cin>>b[i];
				}
				break;

			case 3:
			for (int i = 0; i < MAX; i++){
				cout<<a[i]<<", ";
				}
			for (int i = 0; i < MAX; i++){//vetor A
				achou = false;
				for (int j = 0; j < MAX; j++){//vetor B
					if (a[i] == a[j]){
						achou = true;
						break;
						}
						if (!achou){
						cout<<b[i]<<", ";
						}
					}
				}
				break;

				case 4:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			int intersecao[MAX];
    			int tamanhoIntersecao = 0;

				cout << "Digite os elementos do primeiro conjunto:" << endl;
    			for (int i = 0; i < MAX; i++) {
        			cin >> conjuntoA[i];
    			}
				cout << "Digite os elementos do segundo conjunto:" << endl;
    			for (int i = 0; i < MAX; i++) {
        			cin >> conjuntoB[i];
    			}

				for (int i = 0; i < MAX; i++) {
        		for (int j = 0; j < MAX; j++) {
            	if (conjuntoA[i] == conjuntoB[j]) {
                	intersecao[tamanhoIntersecao] = conjuntoA[i];
                	tamanhoIntersecao++;
                	break;
            			}
        			}
    			}
				cout << "A interseção dos conjuntos A e B é: ";
    			for (int i = 0; i < tamanhoIntersecao; i++) {
        			cout << intersecao[i] << " ";
    			}
    			cout << endl;

				break;

				case 5:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			int Dif[MAX];
    			int tamanhoDif = 0;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
        			cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
        			cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    bool pertence = true;

    			    for (int j = 0; j < MAX; j++) {
    			        if (conjuntoA[i] == conjuntoB[j]) {
    			            pertence = false;
    			            break;
    			        }
    			    }

    			    if (pertence) {
    			        Dif[tamanhoDif] = conjuntoA[i];
    			        tamanhoDif++;
    			    }
    			}

    			cout << "A diferença entre os conjuntos A e B é: ";
    			for (int i = 0; i < tamanhoDif; i++) {
    			    cout << Dif[i] << " ";
    			}
    			cout << endl;
				break;

				case 6:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			int DIF[MAX];
    			int tamanhoDIF = 0;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    bool pertence = false;

    		    for (int j = 0; j < MAX; j++) {
    		        if (conjuntoB[i] == conjuntoA[j]) {
    		            pertence = true;
    		            break;
        			    }
        			}

        			if (!pertence) {
        			    DIF[tamanhoDIF] = conjuntoB[i];
        			    tamanhoDIF++;
        				}
    				}

    			cout << "A diferença entre os conjuntos B e A é: ";
    			for (int i = 0; i < tamanhoDIF; i++) {
    			    cout << DIF[i] << " ";
    			}
    			cout << endl;
				break;

				case 7:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			bool subconjunto = true;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    bool encontrado = false;

    			    for (int j = 0; j < MAX; j++) {
    			        if (conjuntoA[i] == conjuntoB[j]) {
    			            encontrado = true;
    			            break;
    			        }
    			    }

    			    if (!encontrado) {
    			        subconjunto = false;
    			        break;
    			    }
    			}

    			if (subconjunto) {
    			    cout << "O conjunto A é subconjunto do conjunto B." << endl;
    			} else {
    			    cout << "O conjunto A não é subconjunto do conjunto B." << endl;
    			}
				break;

				case 8:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			bool subconjunto = true;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    bool encontrado = false;

    			    for (int j = 0; j < MAX; j++) {
    			        if (conjuntoB[i] == conjuntoA[j]) {
    			            encontrado = true;
    			            break;
    			        }
    			    }

    			    if (!encontrado) {
    			        subconjunto = false;
    			        break;
    			    }
    			}

    			if (subconjunto) {
    			    cout << "O conjunto B é um subconjunto do conjunto A." << endl;
    			} else {
    			    cout << "O conjunto B não é um subconjunto do conjunto A." << endl;
    			}
				break;

				case 9:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			bool identicos = true;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
			        cin >> conjuntoB[i];
			    }

			    for (int i = 0; i < MAX; i++) {
			        bool encontradoA = false;
			        bool encontradoB = false;

			        for (int j = 0; j < MAX; j++) {
			            if (conjuntoA[i] == conjuntoB[j]) {
			                encontradoA = true;
			            }

			            if (conjuntoB[i] == conjuntoA[j]) {
            			    encontradoB = true;
        			    }
        			}

        			if (!encontradoA || !encontradoB) {
        			    identicos = false;
        			    break;
        			}
    			}

    			if (identicos) {
    			    cout << "Os conjuntos A e B são idênticos." << endl;
    			} else {
    			    cout << "Os conjuntos A e B não são idênticos." << endl;
    			}
				break;

				case 10:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			bool disjuntos = true;

    			cout << "Digite os elementos do conjunto A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do conjunto B:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    for (int j = 0; j < MAX; j++) {
    			        if (conjuntoA[i] == conjuntoB[j]) {
    			            disjuntos = false;
    			            break;
    			        }
    			    }

    			    if (!disjuntos) {
    			        break;
    			    }
    			}

    			if (disjuntos) {
    			    cout << "Os conjuntos A e B são disjuntos." << endl;
    			} else {
    			    cout << "Os conjuntos A e B não são disjuntos." << endl;
    			}
				break;

				case 11:
				int conjuntoA[MAX];
    			int conjuntoB[MAX];
    			int produtoEscalar = 0;

    			cout << "Digite os elementos do vetor A:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoA[i];
    			}

    			cout << "Digite os elementos do vetor B:" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conjuntoB[i];
    			}

    			for (int i = 0; i < MAX; i++) {
    			    produtoEscalar += conjuntoA[i] * conjuntoB[i];
    			}

    			cout << "O produto escalar entre A e B é: " << produtoEscalar << endl;
				break;

				case 12:
				int conj[MAX];
    			cout << "Digite os elementos do vetor A (tamanho " << MAX << "):" << endl;
    			for (int i = 0; i < MAX; i++) {
    			    cin >> conj[i];
    			}

    			int inicio = 0;
    			int maiorTamanho = 1;
    			int tamanhoAtual = 1;
    			int indiceAtual = 1;

    			while (indiceAtual < MAX) {
        			if (conj[indiceAtual] > conj[indiceAtual - 1]) {
        			    tamanhoAtual++;
        			} else {
        			    if (tamanhoAtual > maiorTamanho) {
        			        maiorTamanho = tamanhoAtual;
        			        inicio = indiceAtual - maiorTamanho;
        			    }
        			    tamanhoAtual = 1;
        			}
        			indiceAtual++;
    			}

    			if (tamanhoAtual > maiorTamanho) {
    			    maiorTamanho = tamanhoAtual;
    			    inicio = indiceAtual - maiorTamanho;
    			}

    			cout << "O conjunto formado pela maior subcadeia crescente é: ";
    			for (int i = inicio; i < inicio + maiorTamanho; i++) {
    			    cout << conj[i] << " ";
    			}
    			cout << endl;
				break;
				
		}
		op = menu();
			}
	
	return 0;
}
