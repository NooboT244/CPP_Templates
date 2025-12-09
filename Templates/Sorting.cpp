/*this is a selection sort algorithm*/
//TC = O(n^2)

void selection_sort(vector<int> &v, char flag)
{
    if (flag != 'g' && flag != 's')
    {
        throw invalid_argument("flag must be 'g' or 's'");
    }

    for (int i = 0; i < v.size(); i++)
    {
        int sii = i;
        for (int j = (i + 1); j < v.size(); j++)
        {
            if (flag == 's' && v[sii] > v[j])
            {
                sii = j;
            }
            else if (flag == 'g' && v[sii] < v[j])
            {
                sii = j;
            }
        }

        if (sii != i)
        {
            v[i] += v[sii];
            v[sii] = v[i] - v[sii];
            v[i] -= v[sii];
        }
    }
}
