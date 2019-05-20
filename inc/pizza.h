#ifndef PIZZA_H
#define PIZZA_H

#include "restaurante.h"  //Se debe incluir esta clase para realizar la herencia
#include<vector>
#include<string>

using namespace std;

class RestauPizza: public Restaurante  //Herencia publica de la clase Restaurante
{
	public:
	RestauPizza();
	~RestauPizza();
	void prepararMenu(vector<string>opciones, int cantidad);  //Metodo virtual puro, por tanto la clase es abstracta
	float calcularCuenta();
	string entregarPedido();
};

#endif


