# include <iostream>
# include <vector>
# include <iomanip>
# include <string>

/*
	Name: Hafid Iqbal Malik
	Roll No: CSE-20-LE-67
*/

int main(){
	const int HOT_MIN = 85;
	const int PLESENT_MIN = 60;
	int MAX = 0;
	std::vector<int> hot, plesent, cold;	
	
	std::vector<int> dataset = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78,
		82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
		
	for( int i=0; i < dataset.size(); i++ ){
		if ( dataset[i] <= PLESENT_MIN){
			cold.push_back(dataset[i]);
		} else if ( dataset[i] <= HOT_MIN ){
			plesent.push_back(dataset[i]);
		} else {
			hot.push_back(dataset[i]);
		}
		if ( cold.size() > MAX ){
			MAX = cold.size();
		}
		if ( plesent.size() > MAX ){
			MAX = plesent.size();
		}
		if ( hot.size() > MAX ) {
			MAX = hot.size();
		}
	}
	
	std::cout << std::setw(8) << "HOT DAYS" << std::setw(20) << "PLESENT DAYS" << std::setw(17) << "COLD DAYS" << std::endl;
	
	for( int i=0; i <= MAX; i++ ){		
		std::cout << std::setw(8) << ( i < hot.size() ? std::to_string(hot[i]): "-" ) << std::setw(20) << ( i < plesent.size() ? std::to_string(plesent[i]): "-" ) << std::setw(17) << ( i < cold.size() ? std::to_string(cold[i]): "-" ) << std::endl;
	}
		
	return 0;
}
