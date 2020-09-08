// Calculates the <length> amount of numbers that are divisable by <num>
// Returns a list of all of the numbers.
std::vector<int> displayAllDivisibles(int num, int length) {
	std::vector<int> returnArray;

	int temp = num;

	for (int i = 0; i < length; i++) {
		returnArray.push_back(temp);
		temp = temp + num;
	}

	return returnArray;
}

// Returns Array containing only the words that have length defined by the <len> argument
std::vector<std::string> fixedSizeWords(std::vector<std::string> arr, int len) {
	std::vector<std::string> returnArray;
	for(auto str : arr) if(str.length() == len) {returnArray.push_back(str);}
	return returnArray;
}

// Returns array of all the even numbers from the argument array
std::vector<int> noOdds(std::vector<int> arr) {
  std::vector<int> evens;
	for(int i : arr){
    if(i % 2 == 0) evens.push_back(i);
  }
  
  return evens;
}