#include<iostream>
using namespace std;

class car{
	public:
	int year;
	string model,company;


};

int main(){
	car c1,c2,c3;
	c1.company="Maruti Suzuki India";
	c1.model="Alto 800";
	c1.year=2021 ;

	c2.company="Tata Motors Ltd";
	c2.model="Nexon";
	c2.year=2020 ;

	c3.company="Honda Cars India Ltd.";
	c3.model="Honda City";
	c3.year= 2020;

	 cout << c1.company << " " << c1.model << " " << c1.year <<endl;
 	 cout << c2.company << " " << c2.model << " " << c2.year <<endl;
	 cout << c3.company << " " << c3.model << " " << c3.year <<endl;

	return 0;
}
