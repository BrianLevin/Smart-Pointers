#include <iostream>
#include <memory> // manages dynamic memory
#include <vector>

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();

int main () {
// unique= pointer that manages a raw pointer
std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr; // vec pointer is an object // creates object on the stack
vec_ptr = make();// call the function make to make the pointer


return 0;
}