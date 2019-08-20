#include <iostream>
#include <fstream> // clase para leer y escribir archivos
#include <stdlib.h>
using namespace std;

void guardar(string tx);//funcion que escribe en el archivo
string imprimir();//funcion que lee el archivo

int main()
{
	string opc,tex, vis;
	do{
		cout<<"****---****----Menu de opciones----****---****"<<endl;
		cout<<"\t 1. Escribir algo(sin espacios)"<<endl;
		cout<<"\t 2. Leer su archivo"<<endl;
		cout<<"\t 3. Borrar el archivo"<<endl;
		cout<<"\t 4. Salir"<<endl;
		cin>>opc;
		if (opc=="1"){
			cin>>tex;
			guardar(tex);	// se llama a la funcion que abre el archivo y le agrega "tex"
		}
		else if(opc=="2"){
			vis=imprimir(); // se llama a la funcion imprimir que devuelve el contenido del archivo
			cout<<vis<<endl;
			system("pause");
		}
		else if(opc=="3") {
			cout<<"borrando archivo..."<<endl;
			remove("archivo.txt"); // funcion de la libreria fstream para borrar archivos
			system("pause");
		}
		else if(opc!="4"){
		 cout<<"eliga una opcion valida"<<endl;
		 system("pause");
	}
		system("cls");
	}while (opc !="4");
	return 0;
}

void guardar (string tx){
	
	tx= imprimir()+tx;	//se llama la funcion para tener el string del archivo y agregarle el string del parametro
	ofstream file;
	file.open("archivo.txt");	//se abre el archivo para modificarlo
	file << tx<<"\n";			//se modifica el archivo
	file.close();				//se cierra el archivo modificado
}
string imprimir(){
	
	string l;
	string s="";
	ifstream in("archivo.txt");
	while (getline(in,l)){		//la funcion devuelve una linea del archivo, por lo que este ciclo termina cuando ya no halla texto en el archivo
		s=s+l+"\n";
	}
	
	return s;
}
