#include "BMI.h"
#include <string>
float BMI::getheight(){
	return height;
}
float BMI::getweight(){
	return weight;
}
void BMI::setheight(float h){
	height = h;
}
void BMI::setweight(float w){
	weight = w;
}
float BMI::getBMI(){
	BMI = weight*10000/height/height;
	return BMI;
}
string BMI::getCategory(){
	string category;
	float tmp = getBMI();
		if(tmp < 15.0) category = "Very severely underweight";
                else if(tmp < 16.0) category = "Severely underweight";
                else if(tmp < 18.5) category = "Underweight";
                else if(tmp < 25.0) category = "Normal";
                else if(tmp < 30.0) category = "Overweight";
                else if(tmp < 35.0) category = "Obese Class I (Moderately obese)";
                else if(tmp < 40.0) category = "Obese Class II (Severely obese)";
                else category = "Obese Class III (Very severely obese)";
	return category;
}

