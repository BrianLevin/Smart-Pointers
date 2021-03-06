#include <iostream>
#include <memory> // manages dynamic memory
#include <vector>

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num); // loop through elements

int main () {
// unique= pointer that manages a raw pointer
std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr; // vec pointer is an object // creates object on the stack
vec_ptr = make();// call the function make to make the pointer

 std::cout << "How many data points do you want to enter: ";
  int num;
    std::cin >> num;
 fill(*vec_ptr, num); // dereferance vec pointer when call fill

return 0;
}