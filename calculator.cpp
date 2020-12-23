#include <iostream>
#include <string>
using namespace std;

int main () {
	
	//takes user input for numbers to be calculated
	
	int num1,num2;
	char opp;
	int a = 0;
	
	std::cout<< "please enter a number ";
	cin >> num1;
	
	std::cout<< "please enter an operator ";
	cin >> opp;
	
	std::cout<< "please enter another number ";
	cin >> num2;
		
	//calculates an answer based on user inputs 
	
	if (opp == '+'){
		a += num1 + num2;
		
	}
	else if (opp == '-'){
		a += num1 - num2;
				
	}
	else if (opp == '*'){
		a += num1 * num2;
	
	}
	else if (opp == '/'){
		a += num1 / num2;
	
	}
	else{ std::cout<< "sorry something went wrong";}
	
	cout << a;
	
}


