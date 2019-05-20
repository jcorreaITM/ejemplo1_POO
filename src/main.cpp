#include<iostream>
#include"pizza.h"
#include"pollo.h"
#include<vector>

using namespace std;

int main()
{
	RestauPizza *piccolo = new RestauPizza;  //Declarando un objeto de la clase RestauPizza
	vector<string>opciones;
	opciones.push_back("Aceitunas");
	opciones.push_back("Pimenton");
	opciones.push_back("Pepperoni");
	opciones.push_back("Chorizo");
	piccolo->prepararMenu(opciones, 2);
	cout<<piccolo->entregarPedido()<<endl;
	
	RestauPollo *mario = new RestauPollo;
	vector<string>ops;
	ops.push_back("Ensalada");
	ops.push_back("Coca-Cola");
	ops.push_back("Salsa");
	mario->prepararMenu(ops, 1);
	cout<<mario->entregarPedido()<<endl;
	
	delete piccolo;  //Liberando la memoria reservada con el operador new
	delete mario;
	
	
	return 0;
}