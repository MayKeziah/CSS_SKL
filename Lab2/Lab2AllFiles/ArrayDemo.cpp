/*
 * ArrayDemo
 *
 * Created by Rob Nash
 *
 * Modified by Yang Peng on 01/09/18
 */

#include <iostream>
using namespace std;

// Forward declarations.
void display(int *data, int size);
void bubble(int *data, int size);
void swap(int *idx1, int *idx2);
int linearSearch(int *data, int size, int target);


int main(int argc, const char * argv[])
{
  const int SIZE = 7;
  // These are auto variables.
//  int set[] = {1,4,3,2,5,9,8}; // Size implicit
//  int set2[] = {30, 23, 25, 19, 100, 12, 7};
  // How does it look like in JAVA?
  // int[] myArray = new int[3];
  // int[] myArray = {1, 2, 3};
  // int[] myArray = new int[] {1, 2, 3};
  int *set = new int[SIZE] {1,4,3,2,5,9,8};
  int *set2 = new int[SIZE] {30, 23, 25, 19, 100, 12, 7};

  // You have to pass the size in; a C++ array is just a dumb block of
  // storage; no size information is carried with it and no bounds
  // checking is done.
  display(set, SIZE);
  bubble(set, SIZE);
  display(set, SIZE);
  cout << "Search \"Set\" for 10: " << linearSearch(set, SIZE, 10) << endl;
  cout << "Search \"Set\" for  9:  " << linearSearch(set, SIZE, 9) << endl;

  delete[] set;
  delete[] set2;
  set, set2 = nullptr; // so that they cannot be referenced again by mistake.
  return 0;
}

void display(int *data, int size) {
  for(int i = 0; i < size; i++) {
    cout << data[i] << ",";
  }
  cout << std::endl;
}
//I think that the original version of bubble is better for two reasons:
// 1) It is more intuitive to read (for some people).
// 2) It may be a safer way to move through memory.
void bubble(int *data, int size) {
  for(int i = 0; i < size; i++) {
    for(int k = 0; k < size - 1 - i; k++) {
      if(*(data + k) < *(data + k + 1)) {
		  swap(*(data + k), *(data + k + 1));
      }
    }
  }
}

void swap(int *idx1, int *idx2) {
  int temp = *idx1;
  *idx1 = *idx2;
  *idx2 = temp;
}

int linearSearch(int *data, int size, int target){
    for (int i = 0; i < size; ++i){
        if (data[i] == target){
            return i;
        }
    } return -1;
}