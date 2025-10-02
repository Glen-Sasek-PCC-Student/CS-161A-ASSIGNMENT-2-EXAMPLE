// ------------- FILE HEADER -------------
// Author ✅:
// Assignment ✅:
// Date ✅:
// Citations:

// ------------- ZYBOOKS SCORES -------------
// Chapter ✅:
// Participation ✅:
// Challenge ✅:
// Labs ✅:

// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional):

// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅:
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name:

// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:
// (Optional) Additional tests count:

// ------------- CODE -------------
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes (if any)

// RUN AND TEST:
// g++ main.cpp && ./a.out <<< '12' && rm ./a.out

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char *argv[])
{
  int oreos = 0;

  double servings = 0.0;
  double calories = 0.0;

  const int OREOS_PER_SERVING = 5;
  const int CALORIES_PER_SERVING = 160;
  
  cout << "Welcome to the Oreo Calculator!" << endl;
  cout << "Enter the number of Oreos eaten: ";
  cin >> oreos;
  servings = static_cast<double>(oreos) / OREOS_PER_SERVING;
  calories = servings * CALORIES_PER_SERVING; 
  cout << endl;

  cout << fixed << setprecision(1);

  cout << oreos << " Oreos equals " << servings << " servings!" << endl;
  cout << "You consumed " << calories << " calories." << endl;
  cout << "Keep eating Oreos!" << endl;

  return 0;
}

// Function implementations (if any)

// ------------- DESIGN -------------
/*
Program Name:

Program Description:

Design:
A. INPUT
int oreos = 0;

B. OUTPUT
double servings = 0.0;
double calories = 0.0;

C. CALCULATIONS
const int OREOS_PER_SERVING = 5;
const int CALORIES_PER_SERVING = 160;

servings = static_cast<double>(oreos) / OREOS_PER_SERVING;
calories = servings * CALORIES_PER_SERVING;

D. LOGIC and ALGORITHMS
MESSAGE "Welcome to the Oreo Calculator!"
PROMPT "Enter the number of Oreos eaten: "
INPUT oreos
CALCULATE

DATA oreos
LABEL "Oreos equals"

DATA servings
LABEL "servings!"

MESSAGE "You consumed "
DATA calories
LABEL "calories."

MESSAGE "Keep eating Oreos!"


SAMPLE RUNS
Welcome to the Oreo Calculator!
Enter the number of Oreos eaten: 12
12 Oreos equals 2.4 servings!
You consumed 384.0 calories.
Keep eating Oreos!


Welcome to the Oreo Calculator!
Enter the number of Oreos eaten: 3
3 Oreos equals 0.6 servings!
You consumed 96.0 calories.
Keep eating Oreos!

*/
