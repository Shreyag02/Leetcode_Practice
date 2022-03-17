class Solution {
  public:
    int findNumbers(vector < int > & nums) {

      int count = 0;

      for (int num: nums) {

        int length = 0;

        while (num) {
          num /= 10;
          length += 1;
        }
        if (length % 2 == 0) count += 1;

      }
      return count;
    }
};