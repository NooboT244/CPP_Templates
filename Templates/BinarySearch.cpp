
// TC:O(logn)

/*from a long data set it easyly check is one element exist or not:*/

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
