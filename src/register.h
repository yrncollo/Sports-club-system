#include <iostream>
#include <string>
#include <sys/types.h>


struct registert
{

		std::string fullName;
		std::string gender;
		std::string nextOfKin;
		std::string dOB;
		std::string contact;
		std::string subCounty;
		std::string games;
		int age;
		int weight;
		int height;
		std::string specialNeeds;
};


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
		void registration();
};

inline void maringo::welcome()
{
	system("clear");
	std::cout << "\t\t|-----------------------------------------------|" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|     WELCOME TO MARINGO SPORTS CLUB SYSTEM     |" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t| Maringo offers the following games:           |" << "\n"; 
	std::cout << "\t\t| \t 1) Swimming \t 2) Hockey              |" << "\n"; 
	std::cout << "\t\t| \t 3) Lawn tennis  4) Table tennis        |" << "\n"; 
	std::cout << "\t\t| \t 5) Darts \t 6) Badminton           |" << "\n"; 
	std::cout << "\t\t| \t 7) Volleyball \t 8) Basketball          |" << "\n"; 
	std::cout << "\t\t| \t 9) Netball \t 10) Football           |" << "\n"; 
	std::cout << "\t\t| \t 11) Baseball \t 12) Rugby              |" << "\n"; 
	std::cout << "\t\t| \t 13) Pool \t 14) Chess              |" << "\n"; 
	std::cout << "\t\t| \t 15) Draft                              |" << "\n"; 
	std::cout << "\t\t|-----------------------------------------------|" << "\n\n"; 
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

inline void maringo::school()
{
	//system("clear");
	maringo mar;
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
		std::cout << "\t Thankyou!! You can now continue to the main registration \n";
		mar.registration();
	}
	else if (pay == 'N' || pay == 'n') {
		std::cout << "Kindly pay the registration fee!!!!";
	}
	else {
		std::cout << "You have entered wrong choice!";
	}


}
inline void maringo::religious()
{

	//system("clear");
	maringo mar;
	char pay;
	std::cout << "\t Have you paid ksh 500 (Y) for yes and (N) for no: ";
	std::cin >> pay;
	if (pay == 'Y' || pay == 'y') {
		std::cout << "\t Kindly fill the following details: \n";
		std::cout << "\t\t\t\t\t Religious center: ";
		std::cin >> schoolName;
		std::cout << "\t\t\t\t\t Location: ";
		std::cin >> location;
		std::cout << "\t Thankyou!! You can now continue to the main registration \n";
		mar.registration();
	}
	else if (pay == 'N' || pay == 'n') {
		std::cout << "Kindly pay the registration fee!!!!";
	}
	else {
		std::cout << "You have entered wrong choice!";
	}



}

inline void maringo::registration()
{

	registert *ptr, reg; //Create a pointer variable *ptr and normal variable reg of type registert.
	ptr = &reg; //Store the address of variable reg in our pointer variable.
	std::cout << "\n Fill the form bellow: \n";
	std::cout << "\tFull name: ";
	std::cin >> (*ptr).fullName;
	std::cout << "\tGender: ";
	std::cin >> (*ptr).gender ;
	std::cout << "\tNext of kin: ";
	std::cin >> (*ptr).nextOfKin ;
	std::cout << "\tDate of birth: ";
	std::cin >> (*ptr).dOB ;
	std::cout << "\tContact: ";
	std::cin >> (*ptr).contact ;
	std::cout << "\tSub county: ";
	std::cin >> (*ptr).subCounty ;
	std::cout << "\tGames: ";
	std::cin >> (*ptr).games ;
	std::cout << "\tAge: ";
	std::cin >> (*ptr).age ;
	std::cout << "\tWeight: ";
	std::cin >> (*ptr).weight ;
	std::cout << "\tHeight: ";
	std::cin >> (*ptr).height ;
	std::cout << "\tSpecial needs: ";
	std::cin >> (*ptr).specialNeeds ;
	if ((*ptr).age >= 12 && (*ptr).age <= 17) {
		std::cout << "Enrolled to the minor group";
	}
	else if ((*ptr).age >= 18 && (*ptr).age <= 25) {
		std::cout << "Enrolled to the middle group";
	
	}
	else if ((*ptr).age >= 26 && (*ptr).age <= 35) {
		std::cout << "Enrolled to the senior group";
	}
	else {
		std::cout << "You are not eligible";
	}
}

