// Counts the number of Syllables in a word, divided by the "-" sign
// Returns the number of Syllables as an integer
int numberSyllables(std::string word) {
	int countSyl = 0;
	if (word == "") {
		return countSyl;
	}
	countSyl = 1;
	while (word.find("-") != std::string::npos) {
		++countSyl;
		word.erase(word.begin() + word.find("-"));
	}
	return countSyl;
}

// Displays the amount of words in a sentence.
int countWords(std::string str) {
	return std::count(str.begin(), str.end(), ' ') + 1;
}
