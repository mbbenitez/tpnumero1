//Maria Belen Benitez Insaurralde
//Trabajo Practico N°1
//15-04-2015

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()

{

    int a,b;
	  double c,d,suma1,suma2,resta1,resta2,division1,division2,multiplicacion1,multiplicacion2,resto1,resto2;
	  bool igual = true, distinto= true, mayor= true, menor= true, mayorigual= true, menorigual= true, logico1= true, logico2= true;
	  char nombre [70], apellido [15];
	
	
    cout<<"Ingrese su Nombre: ";
    cin>>nombre;
    
    cout<<"Ingrese su Apellido: ";
    cin>>apellido;
	
    cout<<"Ingrese el valor a: ";
    cin>>a;

    cout<<"Ingrese el valor b: ";
    cin>>b;
    
    cout<<"Ingrese el valor c: ";
    cin>>c;

    cout<<"Ingrese el valor d: ";
    cin>>d;

    strcat(nombre, apellido);
    
    suma1= a+b;
    suma2 = c+d;
    resta1 = a-b;
    resta2 = c-d;
    division1= a/b;
    division2 = c/d;
    multiplicacion1 = a*b;
    multiplicacion2 = c*d;
    resto1 = a%b;

    
    igual = resto1 == division1;
    distinto = division1 != division2; 
    mayor = resta1 > resta2 ;
    menor = suma1 < suma2 ;
    mayorigual = division1 >= resto1 ;
    menorigual = multiplicacion1 <= multiplicacion2;
    
  cout <<"\n\n\t\tHola "<<nombre; 
	cout <<"\n\t\tde acuerdo a los valores que ingresaste,"<<endl;
	cout <<" \t\tpodemos concluir que:"<< endl;
  cout << boolalpha;  	
	cout <<"\n\n\t1)El resto de a,b es IGUAL a la division de a,b?:->> "<<igual<<endl;
	cout <<"\n\n\t2)La division de a,b es DISTINTO de la division de c,d?:->> "<<distinto<<endl;
	cout <<"\n\n\t3)La resta entre a,b es MAYOR de la resta entre c,d?:->> "<<mayor<<endl;
	cout <<"\n\n\t4)La suma entre a,b es MENOR de la suma entre c,d?:->> "<<menor<<endl;
	cout <<"\n\n\t5)La multiplicacion entre a,b es MENOR E IGUAL";
	cout <<"\n\tde la multiplicacion entre c,d?:->> "<<menorigual<<endl;
	cout <<"\n\n\t6)La division entre a,b es MAYOR E IGUAL";
	cout <<"\n\tde la division entre c,d?:->> "<<mayorigual<<endl;
	cout <<"\n\n\tSi el punto 1) es: ->> "<<igual;
	cout <<"\n\tentonces el valor opuesto del valor logico sera:->> "<< !igual <<endl;
	
	
return 0;

}
