#include<iostream>
#include<cmath>
#include<string>
using namespace std;
//variables globales
float height, wheight, imc;
//funcion para calcular el imc
float getIMC (float height, float weight){
    height/=100;
    imc=weight/pow(height,2);
    return imc;
}
//funcion para hallar el estado de la persona
string getState(float imc,char sex){
    if(sex=='m'){
        if (imc < 20) {
            return "Delgadez severa";
        } else if (imc >= 20 && imc <= 24.9) {
            return "Peso Normal";
        } else if (imc >= 25 && imc < 29.9) {
            return "Sobrepeso";
        } else if (imc >= 30 && imc < 34.9) {
            return "Obesidad Leve, Grado 1";
        } else if (imc >= 35 && imc <= 40) {
            return "Obesidad Severa, Grado 2";
        } else if (imc > 40) {
            return "Obesidad Muy Severa, Grado 3";
        }
    }else if(sex=='f'){
        if (imc < 20) {
            return "Delgadez severa";
        } else if (imc >= 20 && imc <= 23.9) {
            return "Peso Normal";
        } else if (imc >= 24 && imc < 28.9) {
            return "Sobrepeso";
        } else if (imc >= 29 && imc < 33.9) {
            return "Obesidad Leve, Grado 1";
        } else if (imc >= 34 && imc <= 37) {
            return "Obesidad Severa, Grado 2";
        } else if (imc > 37) {
            return "Obesidad Muy Severa, Grado 3";
        }
    }
}
int main(){
    int ppl;
    char sex;
    string *name = NULL;
    //cuantas personas se van a evaluar
    cout<<"Cantidad de personas a analizar: ";
    cin>>ppl;
    name = new string [ppl];
    int imcArray[ppl];
    //iteracion de todas las personas a evaluar
    for(int i=0; i<ppl; i++){
        cout<<"Nombre de la persona: ";
        cin>>name[i];
        cout<<"Introduzca la altura: ";
        cin>>height;
        cout<<"Introduzca el peso: ";
        cin>>wheight;
        cout<<"Introduzca el sexo: ";
        cin>>sex;
        getIMC(height,wheight);
        imcArray[i]=imc;
        cout.precision(2);
        cout<<i+1<<" ---> "<<name[i]<<" Su imc es: "<<imc<<" "<<getState(imc,sex)<<endl;
        delete [] name;

    }
    /*//mostrar imcArray
    for(int i; i<ppl;i++){
        cout<<imcArray[i]<<" ";
    }*/
return 0;
}