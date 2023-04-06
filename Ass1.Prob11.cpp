

#include <iostream>
#include <cmath>

using namespace std;

// Declare struct type point in 3-D space
struct point {
    double x;
    double y;
    double z;
};

// Function to calculate the distance between two points
double distance(point p1, point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

// Function to find the index of the point of minimum distance from the origin
int minDistance(point points[], int n) {
    int minIndex = 0;
    double minDist = distance(points[0], { 0, 0, 0 });  // initial distance from origin

    // Traverse through all points and find the minimum distance from origin
    for (int i = 1; i < n; i++) {
        double dist = distance(points[i], { 0, 0, 0 });
        if (dist < minDist) {
            minDist = dist;
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    // Test the minDistance function with sample inputs
    point points[] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {-1, -2, -3} };
    int n = sizeof(points) / sizeof(points[0]);

    int minIndex = minDistance(points, n);
    cout << "The point of minimum distance from the origin is at index " << minIndex << endl;

    return 0;
}

