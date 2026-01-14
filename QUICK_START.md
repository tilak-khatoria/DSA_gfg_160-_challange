# Quick Reference Guide

## Quick Start

### Adding a New Problem

1. **Navigate to the category folder**:
   ```bash
   cd Arrays/  # or any other category
   ```

2. **Create a problem folder**:
   ```bash
   mkdir Problem_Name
   cd Problem_Name
   ```

3. **Copy the template**:
   ```bash
   cp ../../TEMPLATE.md README.md
   ```

4. **Fill in the problem details** in `README.md`

5. **Create solution files**:
   ```bash
   # Create your approach files
   touch approach1_brute_force.cpp
   touch approach2_optimized.cpp
   touch approach3_optimal.cpp
   ```

6. **Write your solutions** in each file

## Directory Structure

```
Category_Name/
└── Problem_Name/
    ├── README.md              # Problem statement & analysis
    ├── approach1_*.cpp        # Solution 1
    ├── approach2_*.cpp        # Solution 2
    └── approach3_*.cpp        # Solution 3
```

## File Naming Convention

- **Problem folders**: Use `Snake_Case` (e.g., `Second_Largest_Element`)
- **Solution files**: `approach[N]_[description].cpp`
  - `approach1_brute_force.cpp`
  - `approach2_optimized.cpp`
  - `approach3_optimal.cpp`

## Testing Your Solutions

```bash
# Compile
g++ -o test approach1_brute_force.cpp

# Run
./test

# Clean up
rm test
```

## Categories Available

| Category | Description |
|----------|-------------|
| Arrays | Array manipulation problems |
| Strings | String processing |
| Matrix | 2D array problems |
| Searching | Search algorithms |
| Sorting | Sorting algorithms |
| Hashing | HashMap/HashSet problems |
| LinkedList | Linked list operations |
| Stack_Queue | Stack and queue |
| Tree | Tree problems |
| Graph | Graph algorithms |
| Dynamic_Programming | DP problems |
| Backtracking | Backtracking |
| Greedy | Greedy algorithms |

## Example Problem

See `Arrays/Second_Largest_Element/` for a complete example with:
- ✅ Clear problem statement
- ✅ Multiple examples
- ✅ Three different approaches
- ✅ Complexity analysis
- ✅ Comparison table
- ✅ Working C++ code

## Best Practices

1. **Always include**:
   - Problem statement
   - Examples with explanations
   - Constraints
   - Time & space complexity
   - Test cases in code

2. **Write clean code**:
   - Use meaningful variable names
   - Add comments for complex logic
   - Follow consistent formatting

3. **Document well**:
   - Explain the intuition
   - Compare approaches
   - Note key learnings

## Tips

- Start with brute force, then optimize
- Test edge cases thoroughly
- Compare time/space trade-offs
- Learn from multiple approaches

## Need Help?

- Check `CONTRIBUTING.md` for detailed guidelines
- Look at the example in `Arrays/Second_Largest_Element/`
- Open an issue for questions

Happy Coding! 🚀
