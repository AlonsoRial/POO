// TestTest.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <gtest/gtest.h>
#include <RepasoLib.h>
#include <format> // for std::format, for pretty printing



#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
//struct BankAccount {
//    int balance;
//    BankAccount() { balance = 0; };
//    explicit BankAccount(const int balance) : balance{balance} {};
//};

//TEST(AccountTest, BankAccountStartsEmpty) {
//    BankAccount ba;
//    EXPECT_EQ(0, ba.balance);
//}

std::vector<int>* arrToVector(int arr[], int len) {
    std::vector<int>* v = new std::vector<int>();
    for (int i = 0; i < len; i++)
        v->push_back(arr[i]);

    return v;
}

template<class T>
void printVector(std::vector<T> v) {
    std::cout << '[';
    for (const auto& e : v) {
        std::cout << e << ",";
    }
    std::cout << ']' << std::endl;
}

//applies f(x) = 2*x to the int param p
TEST(RepasoTests, f1_test) {
    EXPECT_EQ(repaso::f1(2), 4);
    EXPECT_EQ(repaso::f1(3), 6);
    EXPECT_EQ(repaso::f1(4), 8);
    EXPECT_EQ(repaso::f1(5), 10);
    EXPECT_EQ(repaso::f1(6), 12);
}

//returns f(x) = 2+x to the value pointed by param p, changing the initial value of p
TEST(RepasoTests, f2_test) {
    int x = 2;
    int res = repaso::f2(&x);
    EXPECT_EQ(res, x);
    EXPECT_EQ(res, 4);
    x = 3;
    res = repaso::f2(&x);
    EXPECT_EQ(res, x);
    EXPECT_EQ(res, 5);
    x = 4;
    res = repaso::f2(&x);
    EXPECT_EQ(res, x);
    EXPECT_EQ(res, 6);
    x = 5;
    res = repaso::f2(&x);
    EXPECT_EQ(res, x);
    EXPECT_EQ(res, 7);
    x = 6;
    res = repaso::f2(&x);
    EXPECT_EQ(res, x);
    EXPECT_EQ(res, 8);
}

//applies f(x) = ++x to the value x pointed by param p, leaving the result in the address pointed to by p
TEST(RepasoTests, f3_test) {
    int x = -1;
    repaso::f3(&x);
    EXPECT_EQ(x, 0);
    x = 3;
    repaso::f3(&x);
    EXPECT_EQ(x, 4);
    x = 27;
    repaso::f3(&x);
    EXPECT_EQ(x, 28);
}

//returns f(x) = x-1 to the value x pointed by param p, leaving the result in the address pointed to by p
TEST(RepasoTests, f4_test) {
    int x = -1;
    EXPECT_EQ(repaso::f4(&x), -2);
    x = 3;
    EXPECT_EQ(repaso::f4(&x), 2);
    x = 29;
    EXPECT_EQ(repaso::f4(&x), 28);
}

//returns f(x) = x-1 to the value x pointed by param p, not changing the initial value of p
TEST(RepasoTests, f5_test) {
    int x = -1;
    EXPECT_EQ(repaso::f5(&x), -2);
    EXPECT_EQ(x, -1);
    x = 3;
    EXPECT_EQ(repaso::f5(&x), 2);
    EXPECT_EQ(x, 3);
    x = 29;
    EXPECT_EQ(repaso::f5(&x), 28);
    EXPECT_EQ(x, 29);
}

//TEST(RepasoTests, f6_test) {
//    int x = 0;
//    EXPECT_EQ(repaso::f6(x), &x); // will not happen, let them scratch their heads so they investigate
//}
//
//TEST(RepasoTests, f7_test) {
//    int x = 0;
//    EXPECT_EQ(repaso::f7(x), 1); //undefined, based in f6
//}

//find element in array, if the element is not present will return -1
TEST(RepasoTests, f8_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f8(3,arr,len), 3);
    EXPECT_EQ(repaso::f8(0, arr, len), 0);
    EXPECT_EQ(repaso::f8(9, arr, len), 9);
    EXPECT_EQ(repaso::f8(123, arr, len), -1);
}

//change element in array
TEST(RepasoTests, f9_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    repaso::f9(3, arr, len, -3);
    EXPECT_EQ(arr[3], -3);
    repaso::f9(0, arr, len, 1000);
    EXPECT_EQ(arr[0], 1000);
    repaso::f9(9, arr, len, -9);
    EXPECT_EQ(arr[len-1], -9);

    std::vector<int>* v_exp = arrToVector(arr, std::ssize(arr));
    //arr_aux.assign(arr, arr + std::ssize(arr)); // soft copy array into vector (really just assigning pointers) using std::ssize, although unnecessary
    repaso::f9(123, arr, len, -123);
    std::vector<int>* v_res = arrToVector(arr, std::ssize(arr));
    //arr_aux_mod.assign(arr, arr + std::ssize(arr));
    EXPECT_EQ(*v_exp, *v_res); //compares data, not pointers!, because == is overloaded for vectors using 'distance' and 'equal' underneath
}

//delete element in array, shifting all elements after it towards the beginning of the array, leaving last position to INFINITY
TEST(RepasoTests, f10_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    int expected[len] = { 0,1,2,4,5,6,7,8,9,static_cast<int>INFINITY};
    std::vector<int>* v_exp = arrToVector(expected, std::ssize(arr));
    repaso::f10(3, arr, len);
    std::vector<int>* v_res = arrToVector(arr, std::ssize(arr));
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[len-1], static_cast<int>INFINITY);
    //printVector(*v_res);
    //printVector(*v_exp);
    EXPECT_EQ(*v_exp,*v_res); //compares with == which is overloaded for vectors and compares element by element
}

//reverse array
TEST(RepasoTests, f11_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    int expected[len] = { 9,8,7,6,5,4,3,2,1,0 };
    std::vector<int>* v_exp = arrToVector(expected, std::ssize(arr));
    repaso::f11(arr, len);
    std::vector<int>* v_res = arrToVector(arr, std::ssize(arr));
    //printVector(*v_res);
    //printVector(*v_exp);
    EXPECT_EQ(*v_exp, *v_res);
}

//Vx in arr, apply function f(x) = 2*x
TEST(RepasoTests, f12_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    int expected[len] = {0,2,4,6,8,10,12,14,16,18};
    std::vector<int>* v_exp = arrToVector(expected, std::ssize(arr));
    repaso::f12(arr, len);
    std::vector<int>* v_res = arrToVector(arr, std::ssize(arr));
    //printVector(*v_res);
    //printVector(*v_exp);
    EXPECT_EQ(*v_exp, *v_res);
}

//Vx in arr apply function f(x) = if even(x) then x++ else x--
TEST(RepasoTests, f13_test) {
    const int len = 10;
    int arr[len] =      { 0,1,2,3,4,5,6,7,8,9 };
    int expected[len] = { 1,0,3,2,5,4,7,6,9,8 };
    std::vector<int>* v_exp = arrToVector(expected, std::ssize(arr));
    repaso::f13(arr, len);
    std::vector<int>* v_res = arrToVector(arr, std::ssize(arr));
    //printVector(*v_res);
    //printVector(*v_exp);
    EXPECT_EQ(*v_exp, *v_res);
}

//sum(Ve in arr)
TEST(RepasoTests, f14_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f14(arr, len), 45);
}

//avg(Ve in arr)
TEST(RepasoTests, f15_test) {
    const int len = 10;
    int arr[len] = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f15(arr, len), 4.5);
}

//Vectors
//find element in vector, if the element is not present will return -1
TEST(RepasoTests, f16_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f16(3,v), 3);
    EXPECT_EQ(repaso::f16(0,v), 0);
    EXPECT_EQ(repaso::f16(9,v), 9);
    EXPECT_EQ(repaso::f16(123,v), -1);
}

//change element in vector
TEST(RepasoTests, f17_test) {
    //reference
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    repaso::f17_ref(3,v, -3);
    //printVector(v);
    EXPECT_EQ(v[3], -3);
    repaso::f17_ref(0,v, 1000);
    EXPECT_EQ(v[0], 1000);
    repaso::f17_ref(9,v, -9);
    EXPECT_EQ(v[v.size() - 1], -9);
    std::vector<int> v_exp;
    std::copy(v.begin(), v.end(), std::back_inserter(v_exp));
    repaso::f17_ref(123,v, -123);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
    v.clear();
    v_exp.clear();

    //value
    std::vector<int>*v_p = new std::vector<int> { 0,1,2,3,4,5,6,7,8,9 };
    v = *v_p;
    repaso::f17_val(3, v, -3);
    //printVector(v);
    EXPECT_EQ(v[3], 3);
    repaso::f17_val(0, v, 1000);
    EXPECT_EQ(v[0], 0);
    repaso::f17_val(9, v, -9);
    EXPECT_EQ(v[v.size() - 1], 9);
    //std::vector<int> v_exp;
    std::copy(v.begin(), v.end(), std::back_inserter(v_exp));
    repaso::f17_ref(123, v, -123);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
    v.clear();
    v_exp.clear();

    //pointer
    v_p = new std::vector<int>{ 0,1,2,3,4,5,6,7,8,9 };
    v = *v_p;
    repaso::f17_p(3, &v, -3);
    //printVector(v);
    EXPECT_EQ(v[3], -3);
    repaso::f17_p(0, &v, 1000);
    EXPECT_EQ(v[0], 1000);
    repaso::f17_p(9, &v, -9);
    EXPECT_EQ(v[v.size() - 1], -9);
    //std::vector<int> v_exp;
    std::copy(v.begin(), v.end(), std::back_inserter(v_exp));
    repaso::f17_p(123, &v, -123);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
    v.clear();
    v_exp.clear();

    /*int a = 3;
    int b = 4;
    int& p = a;
    p = b;
    int& q = p;
    int& r = q;*/
}

//delete element in vector, changing the lenght of the vector
TEST(RepasoTests, f18_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<int> v_exp = { 0,1,2,4,5,6,7,8,9 };
    repaso::f18(3,v);
    EXPECT_EQ(v[3], 4);
    EXPECT_EQ(v.size(), 9);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
}

//reverse vector
TEST(RepasoTests, f19_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<int> v_exp = { 9,8,7,6,5,4,3,2,1,0 };
    repaso::f19(v);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
}


//Ve in arr.2e
TEST(RepasoTests, f20_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<int> v_exp = { 0,2,4,6,8,10,12,14,16,18 };
    repaso::f20(v);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
}

//Ve in arr.if even(e) then e++ else e--
TEST(RepasoTests, f21_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<int> v_exp = { 1,0,3,2,5,4,7,6,9,8 };
    repaso::f21(v);
    //printVector(v);
    //printVector(v_exp);
    EXPECT_EQ(v_exp, v);
}

//sum(Ve in arr)
TEST(RepasoTests, f22_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f22(v), 45);
}

//avg(Ve in arr)
TEST(RepasoTests, f23_test) {
    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    EXPECT_EQ(repaso::f23(v), 4.5);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
