/*
Input: key = 2 , arr = [10, 20, 30, 40, 50]
Output: 30
Explanation: The value of arr[2] is 30 .

Input: key = 4 , arr = [10, 20, 30, 40, 50, 60, 70]
Output: 50
Explanation: The value of the arr[4] is 50 .
*/

//method 1
class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        return ( key >= 0 && key < arr.size()) ? arr[key] : -1;
    }
};

//method 2
class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        if(key>=0 && key<arr.size())
        {
            return arr[key];
        }
    }
};

//since it is directly using the index to print no need for loop

//using for loop
class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
           if (i == key) {
              return arr[i];
           }
}

    }
};
