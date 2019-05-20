#ifndef POLLITO_H
#define POLLITO_H

#include "restaurante.h"  //Se debe incluir esta clase para realizar la herencia
#include<vector>
#include<string>

using namespace std;

class RestauPollo: public Restaurante  //Herencia publica de la clase Restaurante
{
	public:
	RestauPollo();
	~RestauPollo();
	void prepararMenu(vector<string>opciones, int cantidad);  //Metodo virtual puro, por tanto la clase es abstracta
	float calcularCuenta();
	string entregarPedido();
};

#endif
