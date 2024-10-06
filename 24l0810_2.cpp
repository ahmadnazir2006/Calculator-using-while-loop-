#include <iostream>
using namespace std;
int main() {
	//declaring variables
	double number=0;
	double numb1, numb2;
	
	//using while loop
		while (number!=4) {
			cout << "Menu\n" << "Add=1\n" << "Divide=2\n" << "Magnitude=3\n" << "Exit=4\n";
			cout << "Enter a function according to number\n";
			cin >> number;
			//number is used for add divide magnitude exit functions
			//for exiting the program
			if (number == 4) {

				cout << "Exiting the program\n";
			}
			//add function
			else if (number == 1) {
				cout << "You selected Add\n";
				cout << "Enter your First number\n";
				cin >> numb1;
				cout << "Enter your Second number\n";
				cin >> numb2;
				cout << "Result: " << numb1 + numb2 << endl;

			}
			//divison function
			else if (number == 2) {
				cout << "You selected Divide\n";

				cout << "Enter your First number\n";
				cin >> numb1;
				cout << "Enter your Second number\n";
				cin >> numb2;
				if (numb2 == 0) {
					cout << "Does not exist(infinity)\n";
				}
				else {
					cout << "Result: " << numb1 / numb2 << endl;
				}
			}

			//magnitude function
			else if (number == 3) {
				cout << "You selected Magnitude\n";

				cout << "Enter your number\n";
				cin >> numb1;
				if (numb1 >= 0) {
					cout << "Magnitude of the number is: " << numb1 << endl;

				}
				else
				{
					cout << "Magnitude of the number is: " << -numb1 << endl;
				}
			}
			//for anyother button pressed
			else {
				cout << "Invalid Operator\n";
				return 0;
			}
				
			
			system("pause");
			system("cls");

		}
		
		
				return 0;
			}
		
		
			

		
	
	
