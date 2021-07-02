#include <Rcpp.h>
using namespace Rcpp;

//' Pass matrix by reference and edit the first row.
//' @param x Integer matrix
//' @param row Index of row to modify
//' @param y value to add
//' @export
// [[Rcpp::export]]
void add_to_row_first(IntegerMatrix x, int row, int y) {
  for(int j = 0; j < x.ncol(); j++){
    x(row, j) = x(row, j) + y;
  }
}

//' Pass matrix by reference and edit the first column.
//' @param x Integer matrix
//' @param col Index of col to modify
//' @param y value to add
//' @export
// [[Rcpp::export]]
void add_to_col_first(IntegerMatrix x, int col, int y) {
  for(int j = 0; j < x.nrow(); j++){
    x(j, col) = x(j, col) + y;
  }
}


