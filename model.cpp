#include <iostream>
#include <string>

// Practice 13 · Part 2 — Andrew Bennett
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Expense {
  std::string category;
  int amount;
};

void printExpense(const Expense& a) {
  // TODO: print every field on one line, then "\n"
  std::cout << a.category << " " << a.amount << "\n";
}

int main() {
  // TODO: make two records with braces, then print both with your helper
  int N = 2;

  Expense expenseRecord[N] = {
    {"Bills", 150}, {"Groceries", 200}
  };

  for(int i = 0; i < N; i++)
  {
    printExpense(expenseRecord[i]);
  }

  return 0;
}
