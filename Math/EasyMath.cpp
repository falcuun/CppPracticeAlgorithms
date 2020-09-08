// Calculates the amount of times a number needs to be multiplied by itself to get to the given powered Value
// It will return the integer representing the number that the base needs to be powered by
int solveForExp(int base, int poweredValue) {
	int counter = 0;
	while (poweredValue >= base) {
		++counter;
		poweredValue = poweredValue / base;
	}
	return counter;
}

// Calculates the absolute sum of numbers given in the list 
// Returns the integer value of all the numbers summed up 
int getAbsSum(std::vector<int> arr) {
	int sum = 0;
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] < 0){
			arr[i] = -arr[i];
		}
		sum += arr[i];
	}
	return sum;
}