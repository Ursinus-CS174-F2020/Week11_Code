#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("tweets.txt");
    if (file.is_open()) {
        string line;
        while(getline(file, line)) {
            
        }
    }

}
