#include<iostream>

using namespace std;

int main() {
  int arr[]={3,7,1,6,3,3,9,10,10,3,2,1,0,45,12,54,7,7,6};
  int len = sizeof(arr) / sizeof(arr[0]);
  int count = 1;
  //sorting the array
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";
  cout << endl;
  for (int i = 1; i < len; i++) {
    while (i < len - 1 && arr[i] == arr[i + 1]) {
      i++;
    }
    count++;
  }
  cout << "The number of distinct elements in the array = " << count;
  return 0;
}
