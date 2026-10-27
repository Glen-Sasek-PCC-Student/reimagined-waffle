// ------------- FILE HEADER -------------
// Author ✅:
// Assignment ✅:
// Date ✅:
// Citations:

// ------------- CODE -------------
#include <iostream>
#include <iomanip> // for setw()
#include <bitset>
#include <cctype>
using namespace std;

// Function prototypes (if any)
void print_dec(int n);
void print_bin(int n);
void print_hex(int n);

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main()
{
  const int MIN = 0;
  const int MAX = 127;
  const int COL_1_WIDTH = 7;
  const int COL_2_WIDTH = 3;
  const int COL_3_WIDTH = 9;

  cout << "VERTICAL VIEW" << endl;
  cout << setw(COL_1_WIDTH) << right << "DECIMAL";
  cout << setw(COL_2_WIDTH) << " ";
  cout << setw(COL_3_WIDTH) << left << "CHARACTER" << endl;
  int i = MIN;
  while (i <= MAX)
  {
    char c = static_cast<char>(i);
    if (isprint(c))
    {
      cout << setw(COL_1_WIDTH) << right << i;
      cout << setw(COL_2_WIDTH) << " ";
      cout << setw(COL_3_WIDTH) << left << c << endl;
    }
    i = i + 1;
  }

  cout << "HORIZONTAL VIEW" << endl;
  const int COLS_PER_ROW = 10;
  const int LABEL_WIDTH = 7;
  const int VALUE_WIDTH = 7;
  const char* format_labels[] = {"DEC", "BINARY", "HEX"};
  void (*print_functions[])(int) = {print_dec, print_bin, print_hex};

  i = MIN;
  while (i <= MAX)
  {
    bool any_print = false;
    for(int col = 0; !any_print && col < COLS_PER_ROW; col++) 
    {
      int n = i + col;
      char c = static_cast<char>(n);
      any_print = isprint(c);
    }

    if(!any_print) {
      i = i + COLS_PER_ROW;
      continue;
    }

    cout << setw(LABEL_WIDTH) << left << "CHAR";
    for(int col = 0; col < COLS_PER_ROW; col++) 
    {
      int n = i + col;
      char c = static_cast<char>(n);
      if (isprint(c) && n <= MAX)
      {
        cout << setw(VALUE_WIDTH) << right << c << " ";
      }
    }

    cout << endl;
    for (int format = 0; format < 3; format++)
    {
      cout << setw(LABEL_WIDTH) << left << format_labels[format];
      for(int col = 0; col < COLS_PER_ROW; col++)
      {
        int n = i + col;
        char c = static_cast<char>(n);
        if (isprint(c) && n <= MAX)
        {
          cout << setw(VALUE_WIDTH) << right;
          print_functions[format](n);
          cout << " ";
        }
      }
      cout << endl;
    }
    cout << endl;  

    i = i + COLS_PER_ROW;
  }  


  return 0;
}

// Function implementations (if any)
void print_dec(int n) {
  cout << std::dec << n;
}

void print_bin(int n) {
  cout << bitset<7>(n);
}

void print_hex(int n) {
  cout << std::hex << std::uppercase << n;
}

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
