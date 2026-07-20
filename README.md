*This project has been created as part of the 42 curriculum by alesferr and ahideo-k.*

## Description
This project, **Push_swap**, is an algorithmic challenge that requires sorting a set of integers using two stacks (`a` and `b`) and a restricted set of operations. The goal is to generate the shortest possible sequence of "Push swap language" instructions to achieve an ascending sort in stack `a`. 

The project explores **algorithmic complexity** (Big-O notation) and requires the implementation of four distinct sorting strategies that are selected based on the input's initial disorder.

## Instructions
### Compilation
The project includes a `Makefile` to compile the `push_swap` binary. Use the following command:
```bash
make
```
This will compile the source files using the mandatory flags `-Wall -Wextra -Werror`.

### Execution
Run the program by passing a list of integers as arguments:
```bash
./push_swap 2 1 3 6 5 8
```

### Strategy Selectors
You can force a specific algorithm using flags:
- `--simple`: Forces the $O(n^2)$ algorithm.
- `--medium`: Forces the $O(n\sqrt{n})$ algorithm.
- `--complex`: Forces the $O(n \log n)$ algorithm.
- `--adaptive`: (Default) Automatically selects the strategy based on the disorder metric.

### Benchmark Mode
Use the `--bench` flag to see metrics (to stderr):
```bash
./push_swap --bench --adaptive 4 67 3 87 23
```

## Algorithms
This project implements four strategies to handle different levels of data disorder:



## Resources & AI Usage
- **References:**.

- **AI Usage:** 
    - **Tasks:** AI was used to help structure this README, design the logic for the disorder metric, and clarify the implementation of linked lists in C.
    - **Parts:** The logic for `compute_disorder` and the `Makefile` structure were refined using AI assistance. All AI-generated logic was peer-reviewed and tested.

## Contributions
- **[LOGIN-1]:** Implemented the stack data structure, the swap/push operations, and the Simple algorithm.
- **[LOGIN-2]:** Implemented the disorder metric, the Medium and Complex algorithms, and the Benchmark mode.

---