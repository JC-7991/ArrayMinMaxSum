#include <bits/stdc++.h>

int minSum(int A[], int n){

  int min_val =* std::min_element(A, A + n);
  return (min_val * (n - 1));

}

int maxSum(int A[], int n){

  int max_val =* std::max_element(A, A + n);
  return (max_val * (n - 1));

}

int main(){

  int A[] = {3, 6, 2, 8, 7, 5};
  int n = sizeof(A) / sizeof (A[0]);

  std::cout << minSum(A, n);
  std::cout << "\n";
  std::cout << maxSum(A, n);
  
  return 0;

}