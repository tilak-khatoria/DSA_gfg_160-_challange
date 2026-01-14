# Second Largest Element

## Problem Statement
Given an array of positive integers, find the second largest element in the array. If the second largest element doesn't exist, return -1.

### Example 1:
```
Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element is 35 and second largest is 34.
```

### Example 2:
```
Input: arr[] = [10, 10]
Output: -1
Explanation: All elements are same, so there is no second largest.
```

## Constraints
- 2 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5

---

## Approaches

### Approach 1: Sorting (Brute Force)
**File**: `approach1_sorting.cpp`

**Algorithm**:
1. Sort the array in descending order
2. Traverse from the beginning to find the first element different from the largest

**Time Complexity**: O(n log n) - due to sorting
**Space Complexity**: O(1) - if sorting in place

**Pros**: Simple to implement
**Cons**: Inefficient due to sorting overhead

---

### Approach 2: Two Pass Solution
**File**: `approach2_two_pass.cpp`

**Algorithm**:
1. First pass: Find the largest element
2. Second pass: Find the largest element that is smaller than the first largest

**Time Complexity**: O(n) - two linear scans
**Space Complexity**: O(1)

**Pros**: Better than sorting
**Cons**: Requires two passes through the array

---

### Approach 3: Single Pass (Optimal)
**File**: `approach3_single_pass.cpp`

**Algorithm**:
1. Maintain two variables: first (largest) and second (second largest)
2. Traverse array once, updating both variables appropriately

**Time Complexity**: O(n) - single linear scan
**Space Complexity**: O(1)

**Pros**: Most efficient solution, single pass
**Cons**: Requires careful handling of edge cases

---

## Comparison

| Approach | Time Complexity | Space Complexity | Passes | Best For |
|----------|----------------|------------------|--------|----------|
| Sorting | O(n log n) | O(1) | 1 | Small arrays, simple implementation |
| Two Pass | O(n) | O(1) | 2 | Medium arrays, easier to understand |
| Single Pass | O(n) | O(1) | 1 | Large arrays, optimal performance |

## Key Learnings
- Always consider if multiple passes can be reduced to a single pass
- Trade-off between code simplicity and efficiency
- Edge cases: all elements same, only two elements, etc.
