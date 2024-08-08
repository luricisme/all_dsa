#include "utils.h"

//Left or Right Positioned Array
//https://www.geeksforgeeks.org/problems/left-or-right-positioned-array5757/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#if 0
#endif

//Type of array
//https://www.geeksforgeeks.org/problems/type-of-array4605/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#if 0
#endif

//Operating an array
//https://www.geeksforgeeks.org/problems/operating-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#if 1
class Solution {
public:
    bool searchEle(vector<int>& arr, int x) {
        // code here
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                return true;
            }
        }
        return false;
    }

    void insertEle(vector<int>& arr, int y, int yi) {
        // code here
        arr.insert(arr.begin() + yi, y);
    }

    void deleteEle(vector<int>& arr, int z) {
        // code here
        int idx{-1};
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == z)
            {
                idx = i;
                break;
            }
        }
        if (idx != -1)
        {
            arr.erase(arr.begin() + idx);
        }
    }
};

int main()
{
    Solution t;
    vector<int> arr = { 1, 2, 3, 4 };
    t.insertEle(arr, 5, 0);

    t.deleteEle(arr, 5);

    cout << t.searchEle(arr, 1) << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

#endif
