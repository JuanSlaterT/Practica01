//Creado por Juan Diego Arevalo Bernal
//Examen 1
//Compara.cpp y ejecutable compara

#include<iostream>
using namespace std;
int main(){

	float x,y;
	cout<<"ingrese X"<<endl;
	cin>>x;
	cout<<"ingrese Y"<<endl;
	cin>>y;
	if(x==y){
          cout<<"X es igual a Y"<<endl;
	}else{
          if(x<y){
            cout<<"X es menor que Y"<<endl;
	    
	  }else{
            cout<<"Y es menor que X"<<endl;
	  }
	}
	return 0;


}
