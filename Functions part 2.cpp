#include <iostream> 

// Get input from the user 
void getInput(double& currentPrice, double& OneYearAgo, double& TwoYearsAgo) {
	std::cout << "Enter the current price: ";
	std::cin >> currentPrice; 
	std::cout << "Enter the price one year ago: "; 
	std::cin >> OneYearAgo;
	std::cout << "Enter the price two years ago: ";
	std::cin >> TwoYearsAgo;
}

// Calculate the inflation rates 
void calcRates(double currentPrice, double OneYearAgo, double TwoYearsAgo, double& inflationRate1, double& inflationRate2) {
	inflationRate1 = ((currentPrice - OneYearAgo) / OneYearAgo) *100;
	inflationRate2 = ((OneYearAgo - TwoYearsAgo) / TwoYearsAgo) * 100;
}

// Output the results 
void outputResult(double inflationRate1, double inflationRate2) { 
	std::cout << "Innflation rate for the first year: " << inflationRate1 << " %" << std::endl;
	std::cout << "Inflation rate for the second year: " << inflationRate2 << " %" << std::endl;  

	if (inflationRate1 < inflationRate2) {
		std::cout << "The inflation trend is increasing." << std::endl;
	}
	else if (inflationRate1 > inflationRate2) {
		std::cout << " The inflation trend is decreasing." << std::endl;
	}
	else {
		std::cout << "The inflation rates are equal." << std::endl;
	}
}
// Create the main function
int main() {
	double currentPrice, OneYearAgo, TwoYearsAgo, inflationRate1, inflationRate2; 

	getInput(currentPrice, OneYearAgo, TwoYearsAgo);
	calcRates(currentPrice, OneYearAgo, TwoYearsAgo, inflationRate1, inflationRate2);
	outputResult(inflationRate1, inflationRate2); 

	return 0;
}