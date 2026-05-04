#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);

    // Store simple excuse templates in a vector
    vector<string> excuses = {
        "{name}'s computer crashed right before saving.",
        "The internet was down at {name}'s house.",
        "The printer ran out of ink while printing {name}'s work.",
        "{name} accidentally deleted the assignment file.",
        "{name} forgot to bring the USB drive to class.",
        "The file got corrupted on {name}'s laptop.",
        "{name} misunderstood the deadline for this task.",
        "Power went out while {name} was working.",
        "{name} was not feeling well yesterday.",
        "{name} left the assignment at home on the desk."
    };

    // Seed the random number generator
    srand(time(0));
    int index = rand() % excuses.size();
    string selected = excuses[index];

    // Find and replace the {name} placeholder
    size_t pos = selected.find("{name}");
    if (pos != string.npos) {
        selected.replace(pos, 6, name);
    }

    cout << "\n--- GENERATED EXCUSE ---" << endl;
    cout << selected << endl;

    return 0;
}