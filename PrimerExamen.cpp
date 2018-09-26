#include<iostream> 
#include<conio.h> 
using namespace std; 
int arreglo[]={}; 
int *p;  
int main(){
	p=&arreglo[0]; 
	//imprimir arreglo 
 for(int i=0;i<6;i++)
 {cout<<"\n Ingrese a["<<i<<"]=";
  cin>>arreglo[*p];
 }
 for(int i=0;i<6;i++)
 {cout<<"\n a["<<*p<<"]="<<arreglo[i];
 }
  getch();
	return 0;
}
# PrimerExamen
