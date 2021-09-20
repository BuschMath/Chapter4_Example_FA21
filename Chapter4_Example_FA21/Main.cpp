#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string data;
	string data2;
	string idata3;
	string data4;
	string inputFileName = "C:/Users/busch/OneDrive - Iowa Central Community College/Classes/C++/Presentations/Ch4Examples/ExampleInputFile.dat";
	string outputFileName = "ExampleOutputFile.dat";
	ifstream inFile;
	ofstream outFile;

	inFile.open(inputFileName);		// Assumes input file is in the project folder
	outFile.open(outputFileName, ios::app);		// Places output file in the project folder

	//getline(inFile, data);
	inFile >> data >> idata3 >> data2 >> data4;
	outFile << data << data2 << idata3 << data4;

	cout << data << " " << data2 << " " << idata3 << " " << data4 << endl;

	inFile.close();
	outFile.close();

	return 0;
}