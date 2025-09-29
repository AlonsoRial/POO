/*
* Crea una función que reciba dos enteros mediante paso por referencia. 
La función tiene que intercambiar los valores de los datos recibidos.
*/
#include <iostream>
void my_swap(int& a, int& b); // Paso por referencia
void my_swap1(int a, int b); // Paso por valor (se realiza copia)
void my_swap2(int* a, int* b); // Paso por referencia
int main()
{
    int x = 3, y = 7;
    my_swap(x, y);
    std::cout << x << " " << y << "\n";
    my_swap1(x, y);
    std::cout << x << " " << y << "\n";
    my_swap2(&x, &y);
    std::cout << x << " " << y << "\n";    
    int* ptr_x = &x;
    int* ptr_y = &y;
    my_swap(*ptr_x, *ptr_y);
    std::cout << *ptr_x << " " << *ptr_y << "\n";
    my_swap1(*ptr_x, *ptr_y);
    std::cout << *ptr_x << " " << *ptr_y << "\n";
    my_swap2(ptr_x, ptr_y);
    std::cout << *ptr_x << " " << *ptr_y << "\n";
    //Crea un array de enteros con los elementos del 1 al 5. 
    int a[]={ 1,2,3,4,5 };
    //  Crea un puntero p que apunte al array
    int* p = a; 
    //un puntero q que apunte al array más 5
    int* q = a + 5;
    //Suma los elementos del array avanzando p hasta q mediante un bucle.
    int sum = 0;
    for (; p != q; ++p)
        sum += *p;
    //  Imprime la suma total.
    std::cout << sum << "\n";

    for (int i = 0; i < 5; i++) {
        sum += *(p+i);
    }
}
void my_swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void my_swap1(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void my_swap2(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}