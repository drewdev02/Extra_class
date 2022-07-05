#include<iostream>
#include<cmath>
#include<string>
using namespace std;
// estuctura persona
struct persona{
    string name;
    float height;
    float weight;
    char sex;
    float imc;
}persona1;
//funcion para calcular el imc
float getIMC (float height, float weight){
    height/=100;
    persona1.imc=weight/pow(height,2);
    return persona1.imc;
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

void principal(){
    int ppl;
    cout<<"Cantidad de personas a analizar: ";//introducir el numero de personas a evaluar
    cin>>ppl;
    float arrayImc[ppl];
    //iteracion de todas las personas a evaluar
    for(int i=0; i<ppl; i++){
        cout<<"Nombre de la persona: ";
        cin>>persona1.name;
        cout<<"Introduzca la altura: ";
        cin>>persona1.height;
        cout<<"Introduzca el peso: ";
        cin>>persona1.weight;
        cout<<"Introduzca el sexo: ";
        cin>>persona1.sex;
        getIMC(persona1.height,persona1.weight);
        arrayImc[i]=persona1.imc;
        cout.precision(2);
        cout<<i+1<<" ---> "<<persona1.name<<" Su imc es: "<<persona1.imc<<" "<<getState(persona1.imc,persona1.sex)<<endl;
    }

        int suma=0;
        for (int i = 0; i < ppl; i++) {
            suma+=arrayImc[i];
        }
        float promedio=suma/ppl;
        cout<<"el  imc promedio es: "<<promedio<<endl;
        int contador=0;
        for(int i=0;i<ppl;i++){
            if(arrayImc[i]>promedio){
                contador++;
            }
        }
        cout<<"el numero de personas con un imc mayor al promedio es: "<<contador<<endl;



}
int main(){
    principal();





return 0;
}