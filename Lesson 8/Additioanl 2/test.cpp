#include <iostream>
#include <string>

using namespace std;



class tea {
private:
	int price;
	string name;
	

public:
	tea() : price(0), name("tea1") {}; //t2
	tea(int p, string n) : price(p), name(n) {}; //t1

	~tea() {};

	void steam();

	void setPrice(int p) { price = p; }
	void setName(string n) { name = n; }

	int getPrice() { return price; }
	string getName() { return name; }

};

void tea::steam()
{
	cout << "boiling" << endl;
	cout << endl;
}

int main()
{
	tea t1(200, "teapot2000"), t2;
	cout << "t1: " << endl;
	cout << "Price: " << t1.getPrice() << endl;
	cout << "t2 price" << t2.getPrice() << endl;
	return 0;
}