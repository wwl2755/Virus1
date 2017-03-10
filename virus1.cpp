#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]){
	char buffer[256];
	fstream ifile;
	ofstream inFile;
	inFile.open(argv[1]);
	ifile.open("helper.txt");
	while(!ifile.eof()){ifile.getline(buffer,256,'\n');inFile<<buffer<<"\n";}
	inFile.close();
	ifile.close();
}

