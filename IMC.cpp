#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float height, wheight, imc;

float getIMC (float height, float weight){
    height/=100;
    imc=weight/pow(height,2);
    return imc;
}

int main(){
    int ppl;
    char sex;
    string name[ppl]={};
    cout<<"Cantidad de personas a analizar: ";
    cin>>ppl; 

    for(int i=0; i<ppl; i++){
        cout<<"\nIntroduzca Nombre: ";
        cin>>name[i];
        cout<<"Introduzca la altura: ";
        cin>>height;
        cout<<"Introduzca el peso: ";
        cin>>wheight;
        cout<<"Introduzca el sexo: ";
        cin>>sex;
        
        getIMC(height,wheight);

        if(sex='m'){    
            if(imc < 20){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Delgadez severa"<<endl;
            }else if(imc >=20 && imc <=24.9){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Peso Normal"<<endl;
            }else if(imc >=25 && imc <=29.9){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Leve, Grado 1"<<endl;
            }else if(imc >=30 && imc <=40){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Severa, Grado 2"<<endl;
            }else if(imc > 40){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Muy Severa, Grado 3"<<endl;
            }
        }else if(sex='f'){
            if(imc < 20){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Delgadez severa"<<endl;
            }else if(imc >=20 && imc <=23.9){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Peso Normal"<<endl;
            }else if(imc >=24 && imc <=28.9){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Leve, Grado 1"<<endl;
            }else if(imc >=29 && imc <=37){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Severa, Grado 2"<<endl;
            }else if(imc > 37){
            cout<<i+1<<"--"<<" "<<name[i]<<" "<<imc<<" "<<"Obesidad Muy Severa, Grado 3"<<endl;
            }
        }
    }
getch();1q
return 0;
}