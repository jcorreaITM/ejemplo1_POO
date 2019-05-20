#include "restaurante.h"

Restaurante::Restaurante()    //Constructor de la clase
{
	nombre = "Restaurante";
	menu_principal = "Menu de la Carta";
	acompaniantes.push_back("Seco");
	acompaniantes.push_back("Sopa");
	acompaniantes.push_back("Jugo");
	precio_menuprin = 7500;
	cant_pedido = 1;
}

Restaurante::~Restaurante()  //Destructor de la clase
{
}

void Restaurante::setPrecioMenu(float _precio)   //Metodo de la clase
{
	precio_menuprin = _precio;
}

string Restaurante::entregarPedido()   //Metodo de la clase
{
	return "Disfrute de su: "+menu_principal+"\r\n"+"Recomiendenos en tripadvisor, somos: "+nombre;
}

