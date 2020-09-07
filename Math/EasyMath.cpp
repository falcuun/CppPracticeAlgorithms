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