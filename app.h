#ifndef APP_H
#define APP_H

//
// App.h
//
//  Created on: 01/10/2021
//      Author: Angel Rico
//

#include "Product.h"
#include "graph.h"
#include "sorts.h"
#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <list>
#include <fstream>
#include <sstream>
using namespace std;

/**
 * App: main structure
 * @file: app.h
 * @author: Angel Rico
 */
class App{
    private:
        void loadListProducto(vector<Product*>&);
		void loadGrafo(Graph<Product*>&);

        vector<Product*> productos;
		Graph<Product*> recomendaciones;

        int menuMain();
		void opcion1();
		void opcion2();
		void opcion3();
		void listaProducto();
		bool validaOpcion(int op,int inf, int sup);
    public:
        App(){}
        ~App();
        void start();
};


/**
 * @brief destructor
 */
App::~App(){}


void App::start(){
    loadListProducto(productos);
	recomendaciones.setNumNodes(productos.size());
	loadGrafo(recomendaciones);

	int op = 0;
	do{
		op = menuMain();
		switch (op){
		case 1:
			/*
			CASO DE PRUEBA:
			*******************************************
							MENU:
			*******************************************
			1. Lista productos
			2. Generar recomendacion
			3. Ordenar por numero de conexi├│n
			4. Salir
			*******************************************

			Opci├│n: 1

					ID      Nombre          Precio
			1.-     01      bigMac          65.5
			2.-     02      McPollo         55
			3.-     03      McDoble         93.5
			4.-     04      Deluxe          130.5
			5.-     05      HambQueso       50.5
			6.-     06      CBO             114.5
			7.-     07      Crispy          78.5
			8.-     08      McNifica        68.5
			9.-     09      CuartoDLibra    76
			*/
			listaProducto();
			break;
		case 2:
			/*
			CASO DE PRUEBA:
			*******************************************
							MENU:
			*******************************************
			1. Lista productos
			2. Generar recomendacion
			3. Ordenar por numero de conexi├│n
			4. Salir
			*******************************************

			Opci├│n: 2

					ID      Nombre          Precio
			1.-     01      bigMac          65.5
			2.-     02      McPollo         55
			3.-     03      McDoble         93.5
			4.-     04      Deluxe          130.5
			5.-     05      HambQueso       50.5
			6.-     06      CBO             114.5
			7.-     07      Crispy          78.5
			8.-     08      McNifica        68.5
			9.-     09      CuartoDLibra    76

			Numero:1

			Recomendaciones para bigMac
			-> McNifica
			-> McDoble
			-> CuartoDLibra
			-> Crispy
			*/
			opcion2();
			break;
		case 3:
			/*
			CASO DE PRUEBA:
			*******************************************
							MENU:
			*******************************************
			1. Lista productos
			2. Generar recomendacion
			3. Ordenar por numero de conexi├│n
			4. Salir
			*******************************************

			Opci├│n: 3

			ID      Nombre          Precio   NumConect
			05      HambQueso       50.5    0
			02      McPollo         55      1
			07      Crispy          78.5    2
			09      CuartoDLibra    76      3
			01      bigMac          65.5    4
			08      McNifica        68.5    5
			03      McDoble         93.5    6
			04      Deluxe          130.5   7
			06      CBO             114.5   8
			*/
			opcion3();
			break;
		default:
			cout << "\n              ¡¡¡ADIOS!!\n";
			break;
		}

	} while(op != 4);

}

int App::menuMain(){
	bool ban = true;
    int op=0; 

    while (ban){
        cout << "\n*******************************************";
        cout << "\n                MENU:\n";
        cout << "*******************************************\n";
        cout << "1. Lista productos\n";
        cout << "2. Generar recomendacion \n";
		cout << "3. Ordenar por numero de conexión \n";
        cout << "4. Salir \n";
        cout << "*******************************************\n";
        
        cout << "\nOpción: "; cin>>op;
        ban = validaOpcion(op,1,4);
    } 

    return op;
}

bool App::validaOpcion(int op,int inf, int sup){
    bool ban = true;
    if ((op>=inf)&&(op<=sup)){
        ban = false;
    }else{
        cout << "\n   ¡¡¡Introduce una opción valida!!! \n";
    }
    return ban;
}

void App::listaProducto(){
	cout << "\n\tID\tNombre\t\tPrecio";
	vector<Product*>::iterator it;
	int i=1;
	for(it = productos.begin(); it != productos.end(); ++it){
		cout << "\n" << i << ".- \t" << (*it)->printLista();
		i++;
	}	
}

void App::opcion2(){
	listaProducto();
	int i, index = 1;
	cout << "\n\nNumero:"; cin >> i;
	vector<Product*>::iterator it = productos.begin();
	while (i != index){
		++it;
		index++;
	}
	cout << recomendaciones.printAdjList(*it);
}

void App::loadListProducto(vector<Product*> &l){
	string line;
	ifstream file;

	file.open("examplesProducts.csv");
	getline(file, line);

	string id, name;
    int numConection;
    float price;

	while (getline(file, line)){
		stringstream ss(line);
		ss >> id >> name >> numConection >> price;
		l.push_back(new Product(id, name, numConection, price));
	}
}

void App::loadGrafo(Graph<Product*> &g){

	vector<Product*> p(productos);
	Sorts<Product*> sorts;
	sorts.ordenaMerge(p);
	for(int (i) = 0; i < p.size(); i++){
		
		if( i < (p.size()-1)){
			g.addEdgeAdjList(p[i],p[i+1]);
			if (i < (p.size()-2) )	g.addEdgeAdjList(p[i],p[i+2]);
		}
		if (i != 0){
			g.addEdgeAdjList(p[i],p[i-1]);
			if (i != 1)	g.addEdgeAdjList(p[i],p[i-2]);
		}
	
	}

}

void App::opcion3(){
	set<int> Set;
	for (auto item: productos){
		Set.insert(item->value());
	}
	cout << "\nID\tNombre\t\tPrecio\t NumConect"<<endl;
	set<int>::iterator itr;
	for(itr = Set.begin(); itr!=Set.end();itr++){
		for (auto item2: productos){
			if((item2->value())==*itr){
				cout << item2->printLista()<<"\t"<<item2->value()<<endl;
			}
		}
	}
}

#endif