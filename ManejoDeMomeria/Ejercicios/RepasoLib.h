#pragma once
#include <memory_resource>
#include <compare>
#include <initializer_list>

namespace repaso {
	//applies f(x) = 2*x to the int param p
	int f1(int p) {
		return  p = p * 2;
		//1:00
	}

	//returns f(x) = 2+x to the value pointed by param p, changing the initial value of p
	int f2(int* p) {
		return *p = 2 + *p;
		//1:00
	}

	//applies f(x) = ++x to the value x pointed by param p, leaving the result in the address pointed to by p
	void f3(int* p){
		*p == ++p;
		//0:30
	};

	//returns f(x) = x-1 to the value x pointed by param p, leaving the result in the address pointed to by p
	int f4(int* p) {
		return *p= *p - 1;
		//1:30
	};

	//returns f(x) = x-1 to the value x pointed by param p, not changing the initial value of p
	int f5(int* p) {
		return *p - 1;
		//1:30
	};

	//returns a pointer to the param p, dead pointer
	int* f6(int p) 
	{
		return delete p;
		/0:10
	};

	//invokes f5 and applies f(x) = ++x to the value x pointed by param p, undefined value
	int f7(int p) 
	{
		int x = f5(p);

		return ++x;
		//2:00
	};

	//Arrays
	//find element in array, if the element is not present will return -1
	int f8(int e, int arr[], int len) {
		
		bool encontrado = false;

		for (int i = 0; i < len; i++)
		{
			if (arr[i] == e) 
			{
				encontrado = true;
			}
		}
		
		if (!encontrado) return -1;
		//2:30

	};

	//change element in array
	void f9(int e, int arr[], int len, int e_new)
	{

		bool encontrado = false;

		for (int i = 0; i < len; i++)
		{
			if (arr[i] == e)
			{
				arr[i] = e_new;
			}
		}
		//0:30
	};

	//delete element in array, changing the lenght of the array
	void f10(int e, int arr[], int len) 
	{

		for (int i = 0; i < len; i++)
		{
			if (arr[i] == e)
			{
				delete e;
				len--;
			}
		}
		//3:00
	};

	//reverse array
	void f11(int arr[], int len) 
	{
		int arr_auxi[];

		int contador = 0;

		for (int i = len - 1; i >= 0; i--)
		{
			arr_auxi[contador] = arr[i];
			contador++;
		}
		//3:30
	};

	//Ve in arr.2e
	void f12(int arr[], int len) {
	
		for (int i = 0; i < len; i++) 
		{
			 arr[i] * 2;

		}
	}; // 1:17

	//Ve in arr.if even(e) then e++ else e--
	void f13(int arr[], int len) 
	{
		for (size_t i = 0; i < len; i++)
		{
			if (arr[i]%2==0)
			{
				arr[i]++;
			}
			else 
			{
				arr[i]--;
			}
		}

		//2:40;
	};

	//sum(Ve in arr)
	int f14(int arr[], int len);
	{
		int x = 0;
		for (int i = 0; i < len; i++)
		{
			x += arr[i];
			
		}
		return x;

		//2:00
	}

	//avg(Ve in arr)
	float f15(int arr[], int len) {
		
		float x;

		for (int i = 0; i < len; i++)
		{
			x += arr[i];
		}

		return x / len;

		//0:45;
	};

	//Vectors
	//find element in vector, if the element is not present will return -1
	int f16(int e, std::vector<int>& v) {
		
		bool encontrado = false;

		for (int i = 0; i < v.size(); i++)
		{
			if (v.at(i) == e) 
			{
				encontrado = true;
			}
		}

		if (encontrado) 
		{
			return -1;
		}
		else {
			return 0;
		}
		//2:04
	};

	//change element in vector, note the type that is a reference of vector, so it gets passed as reference, not value or pointer!
	void f17_ref(int e, std::vector<int>& v, int e_new) 
	{
		for (int i = 0; i < v.sice(); i++)
		{
			if (v.at(i) == e) 
			{
				v.at(i) = e_new;
			}
		}
		
		//5:58
	};
	void f17_val(int e, std::vector<int> v, int e_new) //value, so it will not change the original vector
	{
		for (int i = 0; i < v.sice(); i++)
		{
			if (v.at(i) == e)
			{
				v.at(i) = e_new;
			}
		}
		//4:57

	}; 
	void f17_p(int e, std::vector<int>* v, int e_new) //pointer
	{
		for (int i = 0; i < *v.sice(); i++)
		{
			if (*v.at(i) == e)
			{
				*v.at(i) = e_new;
			}
		}
		//0:20
	}; 

	//delete element in vector, changing the lenght of the vector
	void f18(int e, std::vector<int>& v) 
	{
		v.erase(v.begin() + e);
		//7:00
	};

	//reverse vector
	void f19(std::vector<int>& v) 
	{
		std::vector<int> auxi;

		for (int i = 0; i < v.sice(); i++)
		{
			auxi.at(i) = v.at(i);
		}

		v.clear();

		int contador = 0;

		for (int i = auxi.sice() - 1; i >= 0; i--)
		{

			v.at(contador) = auxi.at(i);
			contador++;
		}
		//5:05
		
	};

	//Ve in arr.2e
	void f20(std::vector<int>& v)
	{
		for (size_t i = 0; i < v.sice(); i++)
		{
			v.at(i) = v.at(i) * 2;
			

		}

		//2:11
	};

	//Ve in arr.if even(e) then e++ else e--
	void f21(std::vector<int>& v) 
	{
		for (int i = 0; i < v.sice(); i++)
		{
			if (v.at(i)%2==0) 
			{
				v.at(i) += 1;
			}
			else 
			{
				v.at(i) -= 1;
			}
		}

		//1:55
	};

	//sum(Ve in arr)
	int f22(std::vector<int>& v)
	{
		int x = 0;
		for (size_t i = 0; i < v.sice(); i++)
		{
			x += v.at(i);

		}
		return x;

		//1:29
	};

	//avg(Ve in arr)
	float f23(std::vector<int>& v) 
	{
		float sum = 0;

		for (int i = 0; i < v.sice(); i++)
		{
			sum += v.at(i);
		}

		return sum / v.sice();

		//0:50
	};

}