#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Bubblesort{
  public:
void bubble_sort(vector <int> & arr) {
    int n = arr.size();
  for(int i = n -1 ;i >=0 ; i--){
     for(int j = 0 ; j<=i ; j++) {
       if (arr[j]> arr[j+1])  {
        swap(arr[j], arr[j+1]);
     } 
  }
  }
cout << "After Using Bubble Sort:\n";
for(int num : arr) {
  cout << num << " ";

  }
  cout<<endl;
}
};
int main() {
  vector <int> arr ={31,89,34,78,12,7};
  cout << "Before Using Bubble Sort:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    Bubblesort sorter;
    sorter.bubble_sort(arr);

    return 0;
}

