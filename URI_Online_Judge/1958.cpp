#include <stdio.h>
#include <sstream>

using namespace std;

int main()
{
    long double X;
	
    scanf("%LE", &X);
    stringstream teste;
	teste << X;
	string agora = teste.str();
    if(X>=0 && agora[0] != '-') printf("+");
    printf("%.4LE\n", X);
    return 0;
}