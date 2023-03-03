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

void maringo::welcome()
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

void maringo::school()
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
void maringo::religious()
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

void maringo::registration()
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
class shop
{
	public:
		void items();


};
void shop::items()
{
	std::cout << "\t Item \t\t Amount/Per item (ksh)       " << "\n"; 
	std::cout << " (1) \t Bloomer \t\t 250\n";
	std::cout << " (2) \t Games shorts \t\t 750\n";
	std::cout << " (3) \t Hockey stick \t\t 2,00\n";
	std::cout << " (4) \t Socks \t\t\t 350\n";
	std::cout << " (5) \t Sport shoes \t Ranging from 1,000 to 4,000\n";
	std::cout << " (6) \t Track suit \t\t 1,000\n";
	std::cout << " (7) \t T-shirt \t\t 800\n";
	std::cout << " (8)\t Wrapper \t\t 450\n\n";

	std::string items[8] = {"Bloomer", "Games shorts", "Hockey stick", "Socks", "Sport shoes", "Track suit", "T-shirt", "Wrapper"};
	int prices[8] = {250, 750, 2000, 350, 3000, 1000, 800, 450};
	int choice;
	float total_price = 0;
	do {
        std::cout << "Enter the number of the item you would like to purchase (1-8), or 0 to finish: ";
        std::cin >> choice;
        
        if (choice > 0 && choice <= 8) {
            total_price += prices[choice-1];
            std::cout << items[choice-1] << " added to cart. Current total: ksh " << total_price << "\n";
        } else if (choice != 0) {
            std::cout << "Invalid choice. Please enter a number between 1 and 8, or 0 to finish.\n"  ;
        }
    } while (choice != 0);


}

int main()
{
	maringo mar;
	shop sho;
	//mar.welcome();
	//mar.school();
	//mar.religious();
	//mar.registration();
	sho.items();
}
