#include <string>
using namespace std;

string alphabetWar(string fight) {
    int leftScore = 0;
    int rightScore = 0;

    for (char c : fight) {
        switch (c) {
            case 'w':
                leftScore += 4;
                break;
            case 'p':
                leftScore += 3;
                break;
            case 'b':
                leftScore += 2;
                break;
            case 's':
                leftScore += 1;
                break;
            case 'm':
                rightScore += 4;
                break;
            case 'q':
                rightScore += 3;
                break;
            case 'd':
                rightScore += 2;
                break;
            case 'z':
                rightScore += 1;
                break;
        }
    }

    if (leftScore > rightScore) {
        return "Left side wins!";
    } else if (rightScore > leftScore) {
        return "Right side wins!";
    } else {
        return "Let's fight again!";
    }
}
