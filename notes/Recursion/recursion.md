 
# Recursion

Recursion is a way in programming where a function calls itself to solve a smaller version of a problem. This keeps happening until a simple case (called the base case) is reached that can be solved directly.

---

## 🔹 Types of Function Calls

- **Direct Recursion**: A function calls itself.
- **Indirect Recursion**: A function calls another function, and eventually the original function gets called again.

---

## 🔹 Where Recursion is Commonly Used

- Tree and graph traversal
- Backtracking problems (like Sudoku, N-Queens)
- Divide and Conquer algorithms (like Merge Sort, Quick Sort)
- Exploring all possibilities (like generating subsets or permutations)

---

## 🔹 Components of a Recursive Function

Every recursive function usually has three main parts:

1. **Base Case** – This is the condition that stops the recursion.
2. **Processing** – The part of the function that does some task.
3. **Recursive Call** – The function calls itself with updated parameters.

---

## 🔹 Recursive Call Stack

Each recursive call gets added to the call stack (like stacking plates). When the base case is reached, the calls start returning one by one in reverse order.

This is important because deep recursion without a proper base case can lead to **stack overflow**.

---

## 🔹 Head and Tail Recursion

### Head Recursion

The recursive call happens **before** any processing.

```cpp
void print(int n) {
    if (n == 0) return;
    print(n - 1);      // recursive call first
    cout << n << " ";  // processing after
}
```
### Tail Recursion

The processing happens before the recursive call.

```cpp
void print(int n) {
    if (n == 0) return;
    cout << n << " ";  // processing first
    print(n - 1);      // recursive call after
}
```

### Head vs Tail Recursion – Comparison

| Feature         | Head Recursion    | Tail Recursion               |
| --------------- | ----------------- | ---------------------------- |
| Call Position   | Before processing | After processing             |
| Stack Usage     | Full stack used   | Can be optimized by compiler |
| Loop Conversion | Hard to convert   | Easy to convert              |
