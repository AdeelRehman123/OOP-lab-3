#include <iostream>
using namespace std;

class Glass {
public:
    int LiquidLevel;

    Glass() : LiquidLevel(200) {}

    void Drink(int milliliters) {
        LiquidLevel -= milliliters;
        if (LiquidLevel < 100) {
            Refill();
        }
    }

    void Refill() {
        LiquidLevel = 200;
        cout << "The glass has been refilled to 200 milliliters." << endl;
    }
};

int main() {

    Glass glass;

    int milliliters;

    while (true) {
        cout << "Enter the amount of liquid drunk (in milliliters) or -1 to quit: ";
        cin >> milliliters;

        if (milliliters == -1) {
            break;
        }

        glass.Drink(milliliters);
        cout << "Current liquid level: " << glass.LiquidLevel << " milliliters" << endl;
    }

    return 0;
}
