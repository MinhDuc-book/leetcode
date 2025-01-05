class Solution {
public:
    int possibleStringCount(string word) {
        int size = word.length();
        int *arr = new int[size];
        int *check = new int [size];
        for (int i = 0; i < size; i = i+1) {
            arr[i] = 0;
            check[i] = 0;
        }
        int total = 0;
        for (int i = 0; i < size; i = i+1) {
            for (int j = i+1; j < size; j = j+1) {
                if (word[i] == word[j]) {
                    check[j] = -10;
                }
                
            }
        }
        for (int i = 0; i < size; i = i+1) {
            int count = 0;
            for (int j = i+1; j < size; j = j+1) {
                if (word[i] == word[j]) {
                    count++;
                }
                
            }
            arr[i] = count;
        }
        
        for (int i = 0; i < size; i = i+1) {
            if (word[i] == word[i+1]) {
                if (check[i] != -10) {
                    total = total + arr[i];
                }
            }
        }
        
        
        return total+1;
    }
};
