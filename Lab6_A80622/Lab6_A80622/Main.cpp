#include "stdafx.h"
#include "ArbolBinario.h"
#include "Lista.h"
#include "Pila.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

int _tmain(int argc, _TCHAR* argv[]){

	Pila a, b, c, d;
	string names[] =
	{ "Faby", "Mati", "Kari", "Caro", "Rapu", "Naty", "Guly", "Pelu", "Joha", "Bora" };

	for (int i = 0; i < 5; i++){
		a.push(new ElementoInt(100 + i));
		b.push(new ElementoIntInt((i * 10), (i * 20)));
		c.push(new ElementoDouble((rand() % 100 + 100) / 3.5));
		d.push(new ElementoPersona(new Persona((rand() % 100 + 100), names[rand() % 9])));
	}
	cout << "Pilas originales: " << endl;
	cout << "Pila de ElementoInt: " << a << endl;
	cout << "Pila de ElementoIntInt: " << b << endl;
	cout << "Pila de ElementoDouble: " << c << endl;
	cout << "Pila de ElementoPersona: " << d << "\n" << endl;

	Elemento * verPrimerInt = a.peek();
	Elemento * removerPrimerInt = a.pop();

	Elemento * verPrimerIntInt = b.peek();
	Elemento * removerPrimerIntInt = b.pop();

	Elemento * verPrimerDouble = c.peek();
	Elemento * removerPrimerDouble = c.pop();

	Elemento * verPrimerPersona = d.peek();
	Elemento * removerPrimerPersona = d.pop();

	cout << "Pilas moodificadas: " << endl;
	cout << "Pila de ElementoInt: " << a << endl;
	cout << "Pila de ElementoIntInt: " << b << endl;
	cout << "Pila de ElementoDouble: " << c << endl;
	cout << "Pila de ElementoPersona: " << d << "\n" << endl;

	system("pause");
	return 0;
}


