#include <iostream>
#include <vector>

#include "Tracy.hpp"

void do_stuff() {
  ZoneScoped;
  //std::vector<int> test {0};
  while(1) {
    for(int i = 0; i < 10000; i++) {
        std::cout << "Test";
      }
  }
}

int main() {
  std::cout << "Running do_stuff forevert" << std::endl;
  do_stuff();
}