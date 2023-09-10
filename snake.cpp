#include <iostream>
#include <Windows.h>
#include <deque>
#include <vector>
#include <utility>

using namespace std;

struct Point {
	int col, row;
};

enum class Direction {
	right, up, left, down
};

Point operator+(Point p, Direction d) {
	switch (d) {
	case Direction::right:
		return Point{ p.col + 1, p.row };
	case Direction::up:
		return Point{ p.col, p.row + 1 };
	case Direction::left:
		return Point{ p.col - 1, p.row };
	case Direction::down:
		return Point{ p.col, p.row - 1 };
	}
}

struct Snake {
	deque<Point> body;
	Direction direction;

	Snake() {
		body = deque<Point>{ {0, 0} };
		direction = Direction::right;
	}

	void move(Direction new_direction) {

	}
};

struct Apple : Point{};

struct Screen {
	int cols, rows;
	Snake snake;
	vector<Apple> apples;

	Screen(int cols = 10, int rows = 10)
		: cols(cols), rows(rows), snake(), apples() {}



};
