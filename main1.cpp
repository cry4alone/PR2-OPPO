#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Menu {
	string name;
	double price;
	string time;
};

int main() {
	vector <Menu> all;
	ifstream in;

	in.open("input.txt");

	if (!in.is_open()) {
		cout << "Opening file error" << endl;
		return 0;
	}

	int i = 0;

	Menu Node;
	while (!in.eof()) {
		string str;
		in >> str;

		if (i == 0) {
			Node.name = str;
		}
		if (i == 1) {
			Node.price = stod(str);
		}
		if (i == 2) {
			Node.time = str;
			i = -1;

			all.push_back(Node);
		}
		i++;

	}

	for (int i = 0; i < all.size(); i++)
	{
		cout << all[i].name << " " << all[i].price << " " << all[i].time << endl;
	}




	return 0;
}