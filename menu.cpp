#include <iostream>
#include <math.h>

using namespace std;

void dec(){

    int binario, tamanho=0, num, num1=0, dec=0;
    cout<<"insira um numero binario:\n";
    cin >> binario;
    num=binario;
    while(num>0){
        num /= 10;
        tamanho++;
    }
    int v[50];//v[tamanho]

    for(int i=0; i<tamanho; i++){
        int exp=tamanho-(i+1);

        v[i]=binario/pow(10, exp)-num1;
        num1 = v[i]*10+num1*10;
        if(v[i]!=0 && v[i]!=1){
            cout<<"este valor e invalido"<< endl;
            break;
        }
        dec=v[i]*pow(2,exp)+dec;
    }
    cout<<dec<<endl;
}

void bin(){
    int x, resto, quef, i=0, num,tamanho=0,bina=1,y=0;
    cout << "insira um numero decimal\n";
    cin >> x;
    num=x;
    while(num>1){
        num /= 2;
        tamanho++;
    }
    int v[50];//v[tamanho]
    do{
            quef=x/2;
            resto=x%2;
            x=quef;
            v[i]=resto;
            i++;
    } while(quef>1);
    v[i]= quef;
    for(;i>=0;i--){
        bina=v[i]*pow(10,tamanho-y)+bina;
        y++;
    }
    cout<<bina<<endl;
}

int main(){
    int opc;
    inicio:
    cout<<"insira uma opcao:\n1-decimal para binario\n2-binario para decimal\n3-sair\n";
    cin>>opc;
    switch (opc){
        case 1:
        dec();
        cin.get();
        goto inicio;
        case 2:
        bin();
        cin.get();
        goto inicio;
        case 3:
            break;
        default:
        cout<<"numero invalido"<<endl;
        goto inicio;
    }
}