#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	double x1, x2, y1, y2, dist;
	cout<<"Digite uma coordenada A:"<<endl;
	cin>>x1>>y1;
	cout<<"Digite uma coordenada B:"<<endl;
	cin>>x2>>y2;
	
	dist = sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
	
	cout<<"A distância dos dois pontos é de "<<dist<<endl;
	
	return 0;
}
