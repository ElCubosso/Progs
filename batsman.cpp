#include <iostream>
#include <string>

using namespace std;

class batsman  { 
	int bcode;
	string bname;
	int innings, noout, runs;
	float batavg;
	void calcavg()  {
		batavg=(runs/(innings-noout))
	}
public:
	void readdata()  {
		cin>bcode;
		cin>bname;
		cin>innings;
		cin>noout;
		cin>runs;
		calcavg();
	}
	void displaydata()  {
		cout<<bcode<<bname<<innings<<noout<<runs<<batavg;
	}

};

int main()  {
	batsman test;
	test.readdata();
	test.displaydata();
}