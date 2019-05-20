#include "pizza.h"

RestauPizza::RestauPizza():Restaurante() //Ejecutando el constructor de la clase base
{
	nombre = "Pizzas Pikkoro Daimao";
	menu_principal = "Pizza de Champinones";
	acompaniantes.push_back("Queso Mozarella");
	acompaniantes.push_back("Champinones");
	acompaniantes.push_back("Albahaca");
	precio_menuprin = 15000;
	cant_pedido = 1;
}

RestauPizza::~RestauPizza()  //Destructor de la clase
{
}

void RestauPizza::prepararMenu(vector<string>opciones, int cantidad)
{
	for(int i=0; i<opciones.size(); i++)
		acompaniantes.push_back(opciones.at(i)); 
	
	cant_pedido = cantidad;
}

float RestauPizza::calcularCuenta()
{
	float total = precio_menuprin;
	
	for(int i=0; i<acompaniantes.size(); i++)
		total += 350;
	
	total =  total * cant_pedido;
	
	return total;
}

string RestauPizza::entregarPedido()
{
	return "Disfrute de su: "+menu_principal+"\r\n"+"Costo del pedido: "+std::to_string(RestauPizza::calcularCuenta())+"\r\nRecomiendenos en tripadvisor, somos: "+nombre;
}