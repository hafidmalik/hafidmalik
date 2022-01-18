# include <iostream>
# include <limits>
# include <cmath>
# include <iomanip>

/*
	Name: Hafid Iqbal Malik
	Roll No: CSE-20-LE-67
*/

int main(){
	int MAX;
	std::cout << "Enter total # of elements: " << std::endl;
	std::cin >> MAX;
	float dataset[MAX];
	
	if ( MAX <= 0 ){
		std::cout << "Please enter values greater than zero !";
		std::exit(0);
	}
	
	for ( int i=1; i <= MAX; i++ ){
		std::cout << "Enter element " << i << " : ";
		float current;
		std::cin >> current;
		if ( current >= 0 ){
			dataset[i-1] = current;
		} else {
			std::cout << "Invalid value entered !";
			std::exit(0);
		}
	}
	
	// statitics...
	float smallest = std::numeric_limits<float>::max(),
	 largest = -std::numeric_limits<float>::max(),
	 sum = 0.0, mean = 0.0, squareSum = 0.0,
	 range = 0.0, stdDev = 0.0;
	 
	for( int i=0; i < MAX; i++ ){
		if ( dataset[i] < smallest ){
			smallest = dataset[i];
		}
		if ( dataset[i] > largest ){
			largest = dataset[i];
		}
		sum += dataset[i];
		squareSum += std::pow(dataset[i], 2);
	}
		
	mean = sum / MAX;
	range = largest - smallest;
	stdDev = std::sqrt((squareSum / MAX) - std::pow(mean, 2));
		
	std::cout << std::setw(8) << "\nSMALLEST" << std::setw(12) << "LARGEST" << std::setw(12) << "AVERAGE" << std::setw(12) << "RANGE" << std::endl;
	std::cout << std::setw(8) << smallest << std::setw(12) << largest << std::setw(12) << mean << std::setw(12) << range << std::endl;
	
	return 0;
}
