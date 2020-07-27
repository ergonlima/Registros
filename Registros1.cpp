#include<iostream>

using namespace std;

struct animal
{
    string raca,tipo;
    int idade;
};
int main()
{
    animal A[10];
    int maior,menor;
    int aux=0,aux2=0;
    int an=0,av=0;
    for(int i=0;i<=9;i++)
    {
        cout<<"tipo: ";
        getline(cin,A[i].tipo);
        cin.sync();

        cout<<"raca: ";
        getline(cin,A[i].raca);
        cin.sync();

        cout<<"idade: ";
        cin>>A[i].idade;
        cin.sync();

        if(A[i].tipo=="gato")
        {
            aux=aux+1;
        }
        else if(A[i].tipo=="cachorro")
        {
            aux2=aux2+1;
        }
        maior=A[av].idade;
        menor=A[an].idade;

        if(A[i].idade>maior)
        {
            maior=A[i].idade;
            av=i;
        }
        else if(A[i].idade<menor)
        {
            menor=A[i].idade;
            an=i;
        }




    }
    cout<<endl<<endl<<endl;
    cout<<"quantidade de cachorros: "<<aux2<<endl;
    cout<<"quantidade de gatos: "<<aux<<endl;
    cout<<endl<<endl<<endl;
    cout<<"  mais velho  "<<endl;
    cout<<"tipo: "<<A[av].tipo<<endl;
    cout<<"raca: "<<A[av].raca<<endl;
    cout<<"idade: "<<A[av].idade<<endl;
    cout<<endl<<endl<<endl;
    cout<<"  mais novo  "<<endl;
    cout<<"tipo: "<<A[an].tipo<<endl;
    cout<<"raca: "<<A[an].raca<<endl;
    cout<<"idade: "<<A[an].idade<<endl;






}
