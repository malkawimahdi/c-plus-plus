#include <iostream>

int main() {

	double Pesos;
	double Reais;
	double Soles;

	double USDollars;
	std::cout << "Please Enter Amount You Have In Pesos: ";
	std::cin >> Pesos;

	std::cout << "Please Enter Amount You Have In Reais: ";
	std::cin >> Reais;

	std::cout << "Please Enter Amount You Have In Soles: ";
	std::cin >> Soles;

	//Conversion Rate on 3rd Decemeber
	//1 Peso to USD = 0.0047
	//1 Brazzilian Real = 0.18 USD
	//1 Sol = 0.25 USD
	double PesosConversion = 0.0047;
	double ReaisConversion = 0.18;
	double SolesConversion = 0.25;
	USDollars = Soles * SolesConversion + Reais * ReaisConversion + Soles * SolesConversion;

	std::cout << "US Dollars: " << "$" << USDollars;
}