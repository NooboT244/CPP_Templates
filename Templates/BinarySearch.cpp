
// TC:O(logn)
///sort is needed use sort STL :- sort(v.begin(),v.end());

/*from a long/large data set, it easyly check if one element exists or not:
# for binary_search u must do sort first*/

bool binarySearch(const vector<long long> &v, const long long &n)
{
    for (int i = 0, j = v.size() - 1; i <= j;)
    {
        int mid = ((i + j) / 2);
        if (v[mid] > n)
        {
            j = (mid - 1);
        }
        else if (v[mid] < n)
        {
            i = (mid + 1);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

/* * Finds the position (index) of the **first element that is LARGER** than 'kye'.
 * * NOTE: This function requires the input vector 'v' to be **already sorted**.
 * * Example:
 * If v = [7, 7, 7, 7, 9, 10, 14] (Indices 0, 1, 2, 3, 4, 5, 6)
 * key = 7, 
 * It returns index 4 (where the '9' is).
 */
int custom_upper_bound(const vector<long long> &v, long long key)
{
    int l, r;
    for (l = 0, r = (v.size() - 1); l <= r;)
    {
        int mid = (l + r) / 2;
        if (v[mid] > key)
        {
            r = (mid - 1);
        }
        else
        {
            l = (mid + 1);
        }
    }
    return l;
}

/* * Assumes the vector 'v' is sorted.
 * * Performs a binary search to find the index of the **first element** * * that is **greater than or equal to** 'kye'.
 * * This is equivalent to std::lower_bound.
 * * * Example:
 * v: [7, 7, 7, 7, 9, 10, 14] (Indices 0, 1, 2, 3, 4, 5, 6)
 * Key: 7
 * Returns: 0 (The index of the first '7').
 */
int custom_lower_bound(const vector<long long> &v, long long key)
{
    int l, r;
    for (l = 0, r = (v.size() - 1); l <= r;)
    {
        int mid = (l + r) / 2;
        if (v[mid] >= key)
        {
            r = (mid - 1);
        }
        else
        {
            l = (mid + 1);
        }
    }
    return l;
}



