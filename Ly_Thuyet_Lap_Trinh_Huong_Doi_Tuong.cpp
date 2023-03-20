#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

// class 
// thuoc tinh: attribute
// Phuong thuc: method, behavior
// Constructor : Ham khoi tao
// Destructor : Ham huy
//-Encapsulation : Dong goi
//-Access modifier : 
//+ Private
//+ Public
//+ Protected

//class TenClass{
//	//Thuoc tinh va phuong thuc 
//	
//};

class Sinh_vien{
	private:
		string id, ten , ns ;
		double gpa;
	public: 
		Sinh_vien(); // Constructor 
		void xinchao();
		void dihoc();
		~Sinh_vien(); // Ham huy 
};

// Imlementation

Sinh_vien::Sinh_vien(){
	cout << " Ham duoc khoi tao !!! " << endl;
}

Sinh_vien::~Sinh_vien(){
	cout << "Doi tuong duoc huy tai day \n";
}

void Sinh_vien::xinchao(){
	cout << " Hello " <<endl;
}
void Sinh_vien::dihoc(){
	cout << " Lo Lai " <<endl;
}

int main(){
	Sinh_vien x;
	
	x.dihoc();
	x.xinchao();

return 0;
}

