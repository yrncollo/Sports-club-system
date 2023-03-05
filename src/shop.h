#include <iostream>
#include <string>
#include <sys/types.h>
#include <iomanip>






class shop
{
	public:
		std::string receipt;
		float total_price = 0;


		void items();
		void recipt(); // This is not a typo but...


};
inline void shop::items()
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
	do {
        std::cout << "Enter the number of the item you would like to purchase (1-8), or 0 to finish: ";
        std::cin >> choice;
        
        if (choice > 0 && choice <= 8) {
            total_price += prices[choice-1];
	    receipt += items[choice-1] + ": Ksh " + std::to_string(prices[choice-1]) + "\n";
            std::cout << items[choice-1] << " added to cart. Current total: ksh " << total_price << "\n";
        } else if (choice != 0) {
            std::cout << "Invalid choice. Please enter a number between 1 and 8, or 0 to finish.\n"  ;
        }
    } while (choice != 0);

}


inline void shop::recipt()
{
	std::stringstream ss;
    	ss << std::fixed << std::setprecision(2) << total_price;
	receipt += "Total: Ksh " + ss.str()  + "\n";
	std::cout << "Thank you for shopping with us. Your total is Ksh " << std::fixed << std::setprecision(2) << total_price << std::endl;
	std::cout << receipt << std::endl;


}

