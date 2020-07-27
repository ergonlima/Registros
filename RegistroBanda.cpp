#include<iostream>
#include<stdlib.h>

using namespace std;

struct banda
{
    string nomeBanda,tipoMusica;
    int posicao,numInteg;

};
int main()
{
    banda b[5];
    int p,aux;

    for(int i=0;i<=4;i++)
    {
        cout<<"ranking da banda: ";
        cin>>p;
        cin.sync();

        b[p-1].posicao=p;


        cout<<"nome da banda: ";
        getline(cin,b[p-1].nomeBanda);
        cin.sync();



        cout<<"tipo de musica: ";
        getline(cin,b[p-1].tipoMusica);
        cin.sync();



        cout<<"numero de integrantes : ";
        cin>>b[p-1].numInteg;
        cin.sync();


    }
    for(int i=0;i<=4;i++)
    {
        cout<<"|"<<b[i].posicao<<"|"<<b[i].nomeBanda<<"|"<<b[i].tipoMusica<<"|"<<b[i].numInteg<<"|"<<endl;
    }
}
