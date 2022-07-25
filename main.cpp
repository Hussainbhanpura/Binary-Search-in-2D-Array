#include <iostream>
using namespace std;

int search(int arr[][],int target){
  int r = 0;
  int c = arr.length() -1;
 while (r < arr.length && c>=0){
  if (arr[r][c] == target) {
    return [r,c];
  }
  else if (arr[r][c] < target){
    c--;
  }
  else {
    r++;
  }
}
  return {-1,-1};
}
int main() {
int arr [4][4] ={
  {10,20,30,40},
  {15,25,35,45},
  {28,29,37,49},
  {33,34,38,50}
};
  cout <<search(arr,45) << endl;
}