#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<std::string> webAddresses;

    // Input the doubly linked list until "end" is encountered
    std::string address;
    while (std::cin >> address && address != "end") {
        webAddresses.push_back(address);
    }

    // Number of queries
    int Q;
    std::cin >> Q;

    // Iterator to keep track of the current position in the list
    auto currentPos = webAddresses.begin();

    for (int i = 0; i < Q; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "visit") {
            std::string addressToVisit;
            std::cin >> addressToVisit;

            // Find the address in the list
            auto it = std::find(webAddresses.begin(), webAddresses.end(), addressToVisit);

            if (it != webAddresses.end()) {
                // Move the current position to the visited address
                currentPos = it;
                std::cout << *currentPos << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "next") {
            // Move to the next address if available
            if (std::next(currentPos) != webAddresses.end()) {
                ++currentPos;
                std::cout << *currentPos << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "prev") {
            // Move to the previous address if available
            if (currentPos != webAddresses.begin()) {
                --currentPos;
                std::cout << *currentPos << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        }
    }

    return 0;
}
