# Contributing Guidelines

## How to Add a New Problem

### Step 1: Choose the Right Category
Place your problem in the appropriate category folder:
- `Arrays/` - Array manipulation problems
- `Strings/` - String processing problems
- `Matrix/` - 2D array problems
- `Searching/` - Binary search, linear search
- `Sorting/` - Sorting algorithms
- `Hashing/` - HashMap, HashSet problems
- `LinkedList/` - Linked list operations
- `Stack_Queue/` - Stack and queue problems
- `Tree/` - Binary tree, BST problems
- `Graph/` - Graph algorithms
- `Dynamic_Programming/` - DP problems
- `Backtracking/` - Backtracking algorithms
- `Greedy/` - Greedy algorithms

### Step 2: Create Problem Folder
Create a folder with a descriptive name (use underscores for spaces):
```bash
mkdir Category_Name/Problem_Name
```

### Step 3: Use the Template
Copy the `TEMPLATE.md` to your problem folder:
```bash
cp TEMPLATE.md Category_Name/Problem_Name/README.md
```

### Step 4: Fill in Problem Details
Edit the `README.md` with:
- Clear problem statement
- Examples with explanations
- Constraints
- All approaches with complexity analysis
- Comparison table
- Key learnings

### Step 5: Add Solution Files
Create solution files for each approach:
- `approach1_[descriptive_name].cpp` (e.g., `approach1_brute_force.cpp`)
- `approach2_[descriptive_name].cpp` (e.g., `approach2_optimized.cpp`)
- `approach3_[descriptive_name].cpp` (e.g., `approach3_optimal.cpp`)

### Step 6: Code Structure
Each solution file should include:
```cpp
#include <iostream>
#include <vector>
using namespace std;

/**
 * Approach X: [Name]
 * Time Complexity: O(?)
 * Space Complexity: O(?)
 * 
 * Algorithm:
 * 1. Step 1
 * 2. Step 2
 */

// Your solution function here

int main() {
    // Test cases here
    return 0;
}
```

### Step 7: Test Your Code
- Ensure all approaches compile and run correctly
- Test with multiple test cases including edge cases
- Verify complexity claims

## Best Practices

### Naming Conventions
- Use descriptive folder names: `Second_Largest_Element`, not `Problem1`
- Use clear file names: `approach1_sorting.cpp`, not `sol1.cpp`

### Code Quality
- Write clean, readable code
- Add comments for complex logic
- Follow consistent indentation (4 spaces)
- Include header comments with complexity analysis

### Documentation
- Write clear problem statements
- Provide multiple examples
- Explain the intuition behind each approach
- Compare approaches objectively

### Multiple Approaches
Try to include:
1. **Brute Force**: Easiest to understand
2. **Optimized**: Improved time/space complexity
3. **Optimal**: Best possible solution
4. **Alternative**: Different algorithmic paradigm (if applicable)

## Language Support
Primary language: **C++**

Additional languages welcome:
- Python (`.py` extension)
- Java (`.java` extension)

Use the same naming convention: `approach1_brute_force.py`

## Commit Messages
Use clear, descriptive commit messages:
- ✅ "Add Second Largest Element problem with 3 approaches"
- ✅ "Add optimized solution for Kadane's Algorithm"
- ❌ "Update"
- ❌ "Fix"

## Questions?
Feel free to open an issue for clarification!
