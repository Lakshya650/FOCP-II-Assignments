#include <iostream>
#include <vector>
#include <string>
#include <random>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::vector<std::string> roasts = {
        "Hey {name}, your code is so messy even ChatGPT asked for a union.",
        "{name}, I've seen faster sort algorithms in a deck of cards shuffled by a toddler.",
        "{name}, your commits have more red flags than a minefield.",
        "Is that a bug or a feature? Oh wait, it's just {name}'s daily contribution.",
        "{name}'s coding style is like a horror movie: you know where it's going, but you're too scared to watch.",
        "Hey {name}, your variable naming is the reason why legacy code exists.",
        "{name}, your projects have more dependencies than a high-maintenance relationship.",
        "{name}, I'm not saying your code is bad, but even the IDE is crying.",
        "{name}, you put the 'pro' in 'procrastination' and the 'error' in 'programming'.",
        "If crashes were currency, {name} would be the richest person on Earth."
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, roasts.size() - 1);

    std::string roast = roasts[dis(gen)];

    size_t pos = 0;
    while ((pos = roast.find("{name}", pos)) != std::string::npos) {
        roast.replace(pos, 6, name);
        pos += name.length();
    }

    std::cout << "\n[AI ROAST]: " << roast << std::endl;
    return 0;
}