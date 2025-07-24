# Include-Exclude (Pick/Not Pick) Approach

The Include-Exclude method is a basic recursive technique used to explore all possible combinations or subsets by making a choice at each step — either include the current element or exclude it.

## Concept

At each index of the array:
- **Include** the current element and move to the next index.
- **Exclude** the current element and move to the next index.

This continues until we reach the end of the array. It creates a binary recursion tree where each level represents a choice for one element.

## Base Case

The base case usually checks if we have reached the end of the array (i.e., index == size of array). At this point, we can print or store the current result (subset, sum, etc.).

## Time Complexity

- For an array of size `n`, the total number of recursive calls is `2^n` because each element has two choices.
- Space complexity depends on the size of the temporary list or call stack.

## Applications

- Subset generation (power set)
- Subset sum problems
- Combination sum
- 0/1 Knapsack
- Partitioning arrays
- Finding all valid combinations under constraints

## Code Example (Subset Generation in C++)

```cpp
void solve(int index, vector<int>& arr, vector<int>& temp) {
    if(index == arr.size()) {
        // Process or store the subset
        return;
    }

    // Include current element
    temp.push_back(arr[index]);
    solve(index + 1, arr, temp);
    temp.pop_back();

    // Exclude current element
    solve(index + 1, arr, temp);
}
```
## Notes

- This approach is useful when we need to explore all possible combinations of a set.

- It is often the first step toward more optimized solutions using memoization or dynamic programming.

- It is also helpful in backtracking problems where we explore all possibilities and undo choices after each step.