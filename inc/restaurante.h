#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include<vector>
#include<string>

using namespace std;

class Restaurante
{
	protected: //Para que estas variables sean privadas pero se puedan heredar sin problema
	string nombre;  //Nombre del restaurante
	string menu_principal;  //Menu principal que ofrece
	vector<string> acompaniantes;  //Acompanantes del menu principal
	float precio_menuprin; //Precio del menu principal
	int cant_pedido; //Cantidad de pedidos
	
	public:
	Restaurante();
	~Restaurante();
	virtual void prepararMenu(vector<string>opciones, int cantidad) = 0;  //Metodo virtual puro, por tanto la clase es abstracta
	virtual float calcularCuenta() = 0;
	void setPrecioMenu(float _precio);
	virtual string entregarPedido();
};

#endif