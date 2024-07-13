#include<iostream>
using namespace std;

int main(){
	int c=0,n,ms;
	struct FECHA{
		int dia;
		int mes;
		int ano;
	};
	struct PERSONA{
		char nombre[20];
		FECHA nacimiento;
	}prs[100];
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>prs[i].nombre;
		cin>>prs[i].nacimiento.dia;
		cin>>prs[i].nacimiento.mes;
		cin>>prs[i].nacimiento.ano;		
	}
	
	do{
		cin>>ms;
		if(ms!=0){
			for(int i=0;i<n;i++){
				if(ms==prs[i].nacimiento.mes){
					cout<<prs[i].nombre;
					cout<<prs[i].nacimiento.dia;
					cout<<prs[i].nacimiento.mes;
					cout<<prs[i].nacimiento.ano;
					c++;		
				}
			}
			if(c==0){
				cout<<"No hay coincidencias"<<endl;
			}	
		}
	}while(ms!=0);
	return 0;
}