#include <string>
using namespace std;
class BMI{
	public:
		float getheight();
		float getweight();
		void setheight(float h);
		void setweight(float w);
		float getBMI();
		string getCategory();
	private:
		float height,weight,BMI;
};
