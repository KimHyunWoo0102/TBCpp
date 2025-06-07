#include<iostream>
#include<fstream>

class Points {
private:
	int m_x;
	int m_y;

public:
	Points(int x = 0, int y = 0) :m_x(x), m_y(y) {}
	
	friend std::ostream& operator<<(std::ostream& os, const Points& points) {
		return os << points.m_x <<" " << points.m_y;
	}
	friend std::istream& operator>>(std::istream& is, Points& points) {
		return is >> points.m_x >> points.m_y;
	}
};


int main() {
	Points p1, p2;
	std::ofstream of("test.txt");
	std::ifstream inf ("test.txt");
	std::cin >> p1 >> p2;
	std::cout << p1 << "\n" << p2 << std::endl;
	
	of << p1 << " " << p2 << std::endl;
	Points p3;
	inf >> p3;

	std::cout << p3;
}