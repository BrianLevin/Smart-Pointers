#include <iostream>
#include <memory> // manages dynamic memory
#include <vector>

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(); // create unique pointer that points to the vector
void fill(std::vector<std::shared_ptr<Test>> &vec, int num); // loop through elements
void display(const std::vector<std::shared_ptr<Test>>&vec);  // displaying what ever is in the fector



void fill(std::vector<std::shared_ptr<Test>> &vec, int num)  { // loop through vector
    int temp;
    for (int i=1; i<=num; ++i) {
        std::cout << "Enter data point [" << i << "] : ";
        std::cin >> temp;
//        std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
//        vec.push_back(ptr);
        vec.push_back(std::make_shared<Test>(temp)); // created shared pointer
        
    }
}

int main () {
// unique= pointer that manages a raw pointer
std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr; // vec pointer is an object // creates object on the stack
vec_ptr = make();// call the function make to make the pointer

 std::cout << "How many data points do you want to enter: ";
  int num;
    std::cin >> num;
 fill(*vec_ptr, num); // dereferance vec pointer when call fill

  display(*vec_ptr);// dererenceing vector

return 0;
}