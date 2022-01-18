# include <iostream>
# include <limits>

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
	 sum = 0.0, mean = 0.0;
	 
	for( int i=0; i < MAX; i++ ){
		if ( dataset[i] < smallest ){
			smallest = dataset[i];
		}
		if ( dataset[i] > largest ){
			largest = dataset[i];
		}
		sum += dataset[i];
	}
	
	mean = sum / MAX;
	
	std::cout << "\nSMALLEST\tLARGEST \tMEAN" << std::endl;
	std::cout << smallest << "\t\t" << largest << "\t\t" << mean << std::endl;
	 
	return 0;
}

