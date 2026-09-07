#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Selectionsort{
  public:
void selection_sort(vector <int> & arr) {
    int n = arr.size();
  for(int i = 0 ;i <=n ; i++){
     int mini = i;
     for(int j = i+1 ; j<n ; j++) {
       
       if (arr[mini]> arr[j]) 
       { mini = j;
        
       
     } 
     }
      swap(arr[i], arr[mini]);
  
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
  cout << "Before Using Selection Sort:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    Selectionsort sorter;
    sorter.selection_sort(arr);

    return 0;
}



