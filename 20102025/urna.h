#pragma once
class urna
{
private:
	int bolas[100];
	int descartadas[100];

	int final = 99;
	int final_discard = 0;

	void hacer_shuffle();

public:
	urna();

	int sacar_bola();

	bool meter_bola(int bola);

	void meter_todas();
	

	~urna();

};

