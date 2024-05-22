#include <bits/stdc++.h>

using namespace std;

vector<int> v;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    // Min Heap
    while (cur_idx != 0) // time complexity log(n)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = parent_idx;
    }
}

void delete_Min_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1]; // assign 0 index form input value
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ase
            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }

        else if (v[left_idx] <= v[last_idx])
        {
            // left ase
            if (v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }

        else if (v[right_idx] <= v[last_idx])
        {
            // Right ase
            if (v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }

        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    // Total time complexity n(log(n))
    for (int i = 0; i < n; i++) // time complexity n
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    print_heap(v);

    delete_Min_heap(v);
    print_heap(v);

    delete_Min_heap(v);
    print_heap(v);

    return 0;
}