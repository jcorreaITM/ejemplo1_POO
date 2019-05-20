#include "pollo.h"

RestauPollo::RestauPollo():Restaurante() //Ejecutando el constructor de la clase base
{
	nombre = "Pollo Asado Wario";
	menu_principal = "Pollito Asado";
	acompaniantes.push_back("Papa cocida");
	acompaniantes.push_back("Arepa frita");
	acompaniantes.push_back("Miel");
	precio_menuprin = 21000;
	cant_pedido = 1;
}

RestauPollo::~RestauPollo()  //Destructor de la clase
{
}

void RestauPollo::prepararMenu(vector<string>opciones, int cantidad)
{
	for(int i=0; i<opciones.size(); i++)
		acompaniantes.push_back(opciones.at(i)); 
	
	cant_pedido = cantidad;
}

float RestauPollo::calcularCuenta()
{
	float total = precio_menuprin;
	
	for(int i=0; i<acompaniantes.size(); i++)
		total += 200;
	
	total =  total * cant_pedido;
	
	return total;
}

string RestauPollo::entregarPedido()
{
	return "Disfrute de su: "+menu_principal+"\r\n"+"Costo del pedido: "+std::to_string(RestauPollo::calcularCuenta())+"\r\nRecomiendenos en tripadvisor, somos: "+nombre;
}