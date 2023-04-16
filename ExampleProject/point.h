#pragma once
class Point {
public:
	int x;
	int y;

	Point() :x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	Point operator+(Point point) {
		int a = x + point.x;
		int b = y + point.y;
		return Point{ a, b };
	}

	Point operator-(Point point) {
		int a = x - point.x;
		int b = y - point.y;
		return Point{ a, b };
	}

	Point operator*(int value) {
		int a = x * value;
		int b = y * value;
		return Point{ a, b };

	}

	string convert() {
		string msg = "[Point: ";
		msg += "x = " + to_string(x);
		msg += ", y = " + to_string(y) + "]";
		return msg;
	}
};
