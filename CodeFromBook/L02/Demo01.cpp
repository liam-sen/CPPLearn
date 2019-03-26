#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>


using namespace std;

void numConv(){
    int number;
	cout << "Enter a decimal number: ";
	cin >> number;
	cout << "value in octal:" << oct
	     << number << endl;
	cout << "value in dec:" << dec
	     << number << endl;
	cout << "value in hex:" << hex
	     << number << endl;
}

void callSystemCmd(){
    system("echo %cd%");
}

void scopy(){
    ifstream in("../L02/input.txt");
    ofstream out("../L02/output.txt");
    string line;
    while(getline(in, line)){
		cout << line << endl;
		if(line == "input"){
			out << "output" << "\n";
		}else{
			out << line << "\n";
		}
    }
}

void fileVector(){
	vector<string> v;
	ifstream in("../L02/input.txt");
	string line;
	while (getline(in, line)){
		v.push_back(line);
	}
	for (int i = 0; i < v.size(); i++) {
		cin >> "";
		cout << i << ":" << v[i] << endl;
	}
}

void getWord(){
	vector<string> words;
	ifstream in("../L02/input.txt");
	string word;
	while (in >> word){
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}
}


int main(){
	getWord();
    return 0;
}