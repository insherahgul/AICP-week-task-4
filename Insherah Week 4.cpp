#include <iostream>
#include <cmath>
using namespace std;
// My CNIC is **********-6
class Hexagon {
private:
    double side_length;

public:
    int s=6;	//Where is the measurement of one side of length of Hexagon
    int a=120; //where a is the measurement of one angleof Hexagon whoch is equal to 120

    double calcArea() {
        return 1.5 * 1.732 * s;
    }

    double calcPeri() {
        return 6 * s;
    }

    double calcAngleSum() {
        return 6 * a;
    }

    void display() {
        cout << "Hexagon: Area = " << calcArea() << ", Perimeter = " << calcPeri()
                  << ", Sum of Angles = " << calcAngleSum() << endl;
    }
};

class Square {
private:
    int length=6+1;// Where length is the one side length of square
	
public:
//    Square() : side_length(7) {}

    double calcAreaSquare() {
        return length *length;
    }

    double calcPeriSquare() {
        return 4 * length;
    }

    void display() {
    cout << "Square: Area = " << calcAreaSquare() << ", Perimeter = " << calcPeriSquare() <<endl;
    }
};

int main() {
    Hexagon hexagon;
    Square square;

    char user_input;
    while (true) {
        cout << "1. Hexagon\n2. Square\nAny other input to exit\n";
        cout << "Enter your choice: ";
        cin >> user_input;

        if (user_input == '1') {
            hexagon.display();
        } else if (user_input == '2') {
            square.display();
        } else {
            break;
        }
    }

    return 0;
}

