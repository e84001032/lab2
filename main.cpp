#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main(){
	float h,w;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	while(inFile >> h >> w){
		if(h==0) break;
		BMI bmi;
		bmi.setheight(h);
		bmi.setweight(w);
		outFile << fixed << setprecision(3) << bmi.getBMI() << "\t" 
		<< bmi.getCategory() << endl;
	}
	return 0;
}
