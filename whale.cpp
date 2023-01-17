#include <iostream>
#include <vector>
#include <string>
 
int main() {
  std::string input = "a whale of a deal!";
  
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> results;

  for (int i = 0; i < input.size(); i++) {
     //std::cout << input[i] << "\n"; 
    for (int x = 0; x < vowels.size(); x++) {
      //std::cout << vowels[x]; 
      if (input[i] == vowels[x]) {
        results.push_back (input[i]);
        //std::cout << input[i];  
      }
    } 
    if (input[i] == 'e') {
          results.push_back (input[i]);         
    }
    if (input[i] == 'u') {
          results.push_back (input[i]);
    }
  }
  for (int k = 0; k < results.size(); k++) {
  std::cout << results[k];
  }
} 