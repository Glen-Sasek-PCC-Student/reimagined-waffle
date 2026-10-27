// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>
#include <iomanip> // for setw()
#include <cctype> 
using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  const int MIN = 0;
  const int MAX = 127;
  const int FIELD_WIDTH = 20;
  
  cout << setw(FIELD_WIDTH) << left << "DECIMAL" << right << "CHARACTER" << endl; 
  int i = MIN;
  while(i <= MAX) 
  {
    char c = static_cast<char>(i);
    if(isprint(c)) {
      cout << setw(FIELD_WIDTH) << left << i << right << c << endl;
    } 
    i = i + 1;
  }


  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
