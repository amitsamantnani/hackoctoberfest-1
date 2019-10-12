#include<iostream>
#include<conio.h>

int main(void)
{
	int birthmonth, birthyear;
	int currentmonth, currentyear;
	int agey, agem;

	std::cout << "\n\n\t\t\tRaje's Age Calculator\n\n";
  
	std::cout << "Enter your birth year(Eg: 1989):";
	std::cin >> birthyear;
	
	std::cout << "Enter your birth month(Eg: 7):";
	std::cin >> birthmonth;
	//Check whether month = [1...12]
	if (birthmonth < 1 || birthmonth > 12) {
		std::cout << "Invalid intput! Month should be between 1 and 12.";
		return 0;
	}

	std::cout << "\nEnter the current year(Eg: 2010):";
	std::cin >> currentyear;
	if (birthyear > currentyear) {
		std::cout << "Invalid input! Current year must be more than birth year.";
		return 0;
	}


	std::cout << "Enter the current month(Eg: 7):";
	std::cin >> currentmonth;
	//Check whether month = [1...12]
	if (birthmonth < 1 || birthmonth > 12) {
		std::cout << "Invalid input! Month should be inbetween 1 and 12.";
		return 0;
	}

 	//Calculating age
	if (birthmonth > currentmonth && birthyear >= currentyear) {
		std::cout << "Invalid input! Current date must be more than birth date.";
		return 0;
	}
	else if (birthmonth > currentmonth) {
		//birthmonth > currentmonth => age is one year less than the difference
		agey = currentyear - birthyear - 1;
		agem = 12 - (birthmonth - currentmonth);
	}
	else {
		agey = currentyear - birthyear;
		agem = currentmonth - birthmonth;
	}

	std::cout << "\n\t\tYour Age is: " << agey << " years and " << agem << " months.";
	//getch();
}
