#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <unistd.h>
#include <time.h>
using namespace std;
int main(){
int op,seg,min,fin;
seg = 0;
min=0;
fin=0;
    cout<<"Elija una de las opciones del menu: "<<endl;
    cout<<" 1-Plato del dia \n 2-Recomendacion del cheff \n 3-Pizza Napolitana "<<endl;
    cin>> op ;
	if(op==1) {
		min=3;
	while (fin==0){
		system("cls");
			cout <<"                 Contador" <<endl;
			 cout <<"                  00:" <<min <<":" << seg<<endl;
			 sleep(1);
			  if (seg==0){
			 min--;
			 seg=60;
			  }
			  seg--;
			  if (seg==0 && min==0){
			 system("cls");
			 fin=1;
			 cout <<"                 Contador" <<endl;
			 cout <<"                  00:00:00" <<endl;
			 cout <<"Su pedido ha sido entregado" <<endl;
			 
			  }
			 }
      	}
	else if (op==2) {
			min=5;
	while (fin==0){
		system("cls");
			cout <<"                 Contador" <<endl;
			 cout <<"                  00:" <<min <<":" << seg<<endl;
			 sleep(1);
			  if (seg==0){
			 min--;
			 seg=60;
			  }
			  seg--;
			  if (seg==0 && min==0){
			 system("cls");
			 fin=1;
			 cout <<"                 Contador" <<endl;
			 cout <<"                  00:00:00" <<endl;
			 cout <<"Su pedido ha sido entregado" <<endl;
			 
			  }
			 }
		}	
	
    else if (op==3) {
    	min=2;
	while (fin==0){
		system("cls");
			cout <<"                 Contador" <<endl;
			 cout <<"                  00:" <<min <<":" << seg<<endl;
			 sleep(1);
			  if (seg==0){
			 min--;
			 seg=60;
			  }
			  seg--;
			  if (seg==0 && min==0){
			 system("cls");
			 fin=1;
			 cout <<"                 Contador" <<endl;
			 cout <<"                  00:00:00" <<endl;
			 cout <<"Su pedido ha sido entregado" <<endl;
			 
			  }
			 }
    }
     
     else {
      	cout <<"La opcion es invalida "<<endl;	
    }
    
     return 0;
    }
