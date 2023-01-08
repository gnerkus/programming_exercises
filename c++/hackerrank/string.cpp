/*
Input:
abcd
ef

Output:
4 2
abcdef
ebcd af
*/
void stringLengths(std::string first, std::string second) {
	std::string::size_type firstSize = first.size();
	std::string::size_type secondSize = second.size();

	std::cout << firstSize << " " << secondSize << '\n';
	std::cout << first + second << '\n';

	auto firstFirst = first[0];
	auto secondFirst = second[0];

	first[0] = secondFirst;
	second[0] = firstFirst;

	std::cout << first << " " << second << std::endl;
}

std::vector<int> parseInts(string str) {
	std::vector<int> resultVector;
	std::stringstream strStream(str);
	char ch;
	int readInteger;

	// strStream >> readInteger returns a istream& not the integer read
	while(strStream >> readInteger) {
		resultVector.push_back(readInteger);
		strStream >> ch;
	}

	return resultVector;
}