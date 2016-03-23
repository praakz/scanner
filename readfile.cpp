#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main(){
	string line;
	ifstream myfile("test.txt");
	
	if(myfile.is_open())
	{
		while(getline(myfile, line))
		{
			for(int i=1;i<strlen(line);i++;){
				if line(i-1) == '\n'{
					cout<<c<<endl;
				}
			}
			//cout << line << endl;
		}
		
	//string fuck = "fuck";
	//for(char& c : fuck){
//		cout<<c<<endl;
//	} 
//	cout<<fuck[0]<<"\n";
//	string tab ="\n";
//	cout<<tab[0];
//	bool out = tab[0] == '\n';
//	cout<<out;
	}

	else
		std::cout << "Unable to read file." << endl;
		
	return 0;
}
