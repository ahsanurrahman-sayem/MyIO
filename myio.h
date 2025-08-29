#include <iostream>
using namespace std;

template<typename T>
void print(T t) { 
	cout << t << endl; 
}

template<typename T, typename... Args>
	void print(T t, Args... args) { 
		cout << t << " "; print(args...); 
	}