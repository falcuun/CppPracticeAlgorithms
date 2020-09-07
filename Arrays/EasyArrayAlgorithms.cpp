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