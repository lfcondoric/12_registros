#include<iostream>
using namespace std;
int main(){
	int m=0,s=0,n;
	struct PERSONA{
		char nombre[20];
		int dni;
		int edad;
	}persona[100];
	
	cout<<"Ingrese la cantidad de personas que desea registar: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"INGRESE LOS DATOS DE LA PERSONA "<<i+1<<": "<<endl;
		cout<<"ingrese el nombre de la persona: ";cin>>persona[i].nombre;
		cout<<"ingrese el DNI de la persona: ";cin>>persona[i].dni;
		cout<<"ingrese la edad de la persona: ";cin>>persona[i].edad;cout<<endl;
		s+=persona[i].edad;
		if(persona[i].edad>50){
			m++;
		}
	}
	cout<<"El promedio de edades es: "<<s/n<<endl;
	cout<<"La cantidad de personas con edad mayor a 50 anos es: "<<m<<endl;
	for(int i=0;i<n;i++){
		cout<<"lOS DATOS DE LA PERSONA "<<i+1<<endl;
		cout<<"Su nombre es: "<<persona[i].nombre<<endl;
		cout<<"Su DNI es: "<<persona[i].dni<<endl;
		cout<<"Su edad es: "<<persona[i].edad<<endl;
	}

	return 0;
}