#include <iostream>
#include <string>

class maringo
{
	public:
		std::string admNo;
		std::string stdClass; //student class
		std::string schoolName;
		std::string location;

		void welcome();
		void school();
		void religious();
};

void maringo::welcome()
{
	system("clear");
	std::cout << "\t\t|-----------------------------------------------|" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|     WELCOME TO MARINGO SPORTS CLUB SYSTEM     |" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|-----------------------------------------------|" << "\n";
	std::cout << "\t\t|\t Where are you registering from?:       |" << "\n"; 
	std::cout << "\t\t|-----------------------------------------------|" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|\t\t 1) School      	        |" << "\n"; 
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|\t\t 2) Religious Center            |" << "\n"; 
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|\t\t 3) Individual                  |" << "\n"; 
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|-----------------------------------------------|" << "\n\n\n";

}

void maringo::school()
{
	//system("clear");
	char pay;
	std::cout << "\t Have you paid ksh 500 (Y) for yes and (N) for no: ";
	std::cin >> pay;
	if (pay == 'Y' || pay == 'y') {
		std::cout << "\t Kindly fill the following details: \n";
		std::cout << "\t\t\t\t\tSchool name: ";
		std::cin >> schoolName;
		std::cout << "\t\t\t\t\tAdm No: ";
		std::cin >> admNo;
		std::cout << "\t\t\t\t\tClass: ";
		std::cin >> stdClass; 
		std::cout << "\t Thankyou!! You can now continue to the main registration";
	}
	else if (pay == 'N' || pay == 'n') {
		std::cout << "Kindly pay the registration fee!!!!";
	}
	else {
		std::cout << "You have entered wrong choice!";
	}


}
void maringo::religious()
{

	//system("clear");
	char pay;
	std::cout << "\t Have you paid ksh 500 (Y) for yes and (N) for no: ";
	std::cin >> pay;
	if (pay == 'Y' || pay == 'y') {
		std::cout << "\t Kindly fill the following details: \n";
		std::cout << "\t\t\t\t\t Religious center: ";
		std::cin >> schoolName;
		std::cout << "\t\t\t\t\t Location: ";
		std::cin >> location;
		std::cout << "\t Thankyou!! You can now continue to the main registration";
	}
	else if (pay == 'N' || pay == 'n') {
		std::cout << "Kindly pay the registration fee!!!!";
	}
	else {
		std::cout << "You have entered wrong choice!";
	}



}


int main()
{
	maringo mar;
	mar.welcome();
	//mar.school();
	mar.religious();
}
