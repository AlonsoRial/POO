#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anyo;

public:
	Fecha() {};
	Fecha(int anyo, int mes, int dia) {};

	int get_dia();
	int get_mes();
	int get_anyo();
	void set_dia(int nuevo_dia);
	void set_mes(int nuevo_mes);
	void set_anyo(int nuevo_anyo);

	std::string get_fecha();

	~Fecha() {};

};

