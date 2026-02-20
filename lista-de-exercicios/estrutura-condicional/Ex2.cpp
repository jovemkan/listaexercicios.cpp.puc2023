#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int numero;

cin>>numero;

if (((numero % 5)==0) && ((numero % 3)==0)){
    cout<<"O NUMERO E DIVISIVEL\n";
}
else{
    cout<<"O NUMERO NAO E DIVISIVEL\n";
}
return 0;
}
