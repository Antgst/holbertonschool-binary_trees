# 🌳 C - Binary Trees (Holberton School Project)

## 📝 Description
This repository contains our **Holberton School** project on **Binary Trees**.

We implement core operations and algorithms around:
- **basic binary trees**
- **Binary Search Trees (BST)**
- **AVL trees**
- **Max Binary Heaps**

The project focuses on understanding structure, traversal, and complexity trade-offs versus linear structures like linked lists (especially when trees stay reasonably balanced).

**Team (2 to 3):**
- Georgia Boulnois
- Antoine Gousset
- Djibril Tamsir Niang

---

## 🎯 Global Learning Objectives
By the end of this project, we are expected to be able to explain and demonstrate:

### General
- What a **binary tree** is
- The difference between a **binary tree** and a **Binary Search Tree**
- The potential time complexity gain compared to linked lists
- What are **depth**, **height**, and **size** of a binary tree
- The different **traversal methods**
- What a **complete**, **full**, **perfect**, and **balanced** binary tree is

---

## ✅ Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on **Ubuntu 20.04 LTS** with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must end with a new line
- A `README.md` at the root of the project folder is mandatory
- Code must follow **Betty style**
- No global variables
- No more than **5 functions per file**
- You are allowed to use the standard library
- We will use our own `main.c` for correction
- All function prototypes must be in `binary_trees.h`
- All header files must be include guarded
- One repository per group (per Holberton rules)

---

## 🧩 Data Structures

We use the following structure for all tree types in this project:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

**Important note:**  
For tasks **0 to 23 (included)**, we work with **simple binary trees**.  
They are **not BSTs**, so they do not follow ordering rules.

---

## 🗂️ Suggested File Map (Common Holberton Layout)

This section mirrors the usual Holberton naming convention for this project.  
Adjust if your repo uses a slightly different numbering.

### 🌿 Basic Binary Tree (typical early tasks)
| File | Function | Purpose |
|------|----------|---------|
| `0-binary_tree_node.c` | `binary_tree_node` | Create a new node |
| `1-binary_tree_insert_left.c` | `binary_tree_insert_left` | Insert as left child |
| `2-binary_tree_insert_right.c` | `binary_tree_insert_right` | Insert as right child |
| `3-binary_tree_delete.c` | `binary_tree_delete` | Delete an entire tree |
| `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` | Check if node is a leaf |
| `5-binary_tree_is_root.c` | `binary_tree_is_root` | Check if node is the root |
| `6-binary_tree_preorder.c` | `binary_tree_preorder` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `binary_tree_inorder` | In-order traversal |
| `8-binary_tree_postorder.c` | `binary_tree_postorder` | Post-order traversal |
| `9-binary_tree_height.c` | `binary_tree_height` | Compute height |
| `10-binary_tree_depth.c` | `binary_tree_depth` | Compute depth |
| `11-binary_tree_size.c` | `binary_tree_size` | Compute size (nodes count) |
| `12-binary_tree_leaves.c` | `binary_tree_leaves` | Count leaves |
| `13-binary_tree_nodes.c` | `binary_tree_nodes` | Count nodes with at least 1 child |
| `14-binary_tree_balance.c` | `binary_tree_balance` | Balance factor |
| `15-binary_tree_is_full.c` | `binary_tree_is_full` | Check full tree |
| `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` | Check perfect tree |
| `17-binary_tree_sibling.c` | `binary_tree_sibling` | Find sibling |
| `18-binary_tree_uncle.c` | `binary_tree_uncle` | Find uncle |

### 🌱 Binary Search Trees (BST)
| File | Function | Purpose |
|------|----------|---------|
| `100-binary_tree_is_bst.c` | `binary_tree_is_bst` | Check if a tree is a BST |
| `101-bst_insert.c` | `bst_insert` | Insert value into a BST |
| `102-bst_array_to_tree.c` | `array_to_bst` | Build a BST from array |
| `103-bst_search.c` | `bst_search` | Search value |
| `104-bst_remove.c` | `bst_remove` | Remove node |

### 🌿 AVL Trees
| File | Function | Purpose |
|------|----------|---------|
| `110-binary_tree_is_avl.c` | `binary_tree_is_avl` | Check if AVL |
| `111-avl_insert.c` | `avl_insert` | Insert while balancing |
| `112-array_to_avl.c` | `array_to_avl` | Build AVL from array |
| `113-avl_remove.c` | `avl_remove` | Remove while balancing |

### 🧱 Max Binary Heaps
| File | Function | Purpose |
|------|----------|---------|
| `120-binary_tree_is_heap.c` | `binary_tree_is_heap` | Check heap property |
| `121-heap_insert.c` | `heap_insert` | Insert into heap |
| `122-array_to_heap.c` | `array_to_heap` | Build heap from array |
| `123-heap_extract.c` | `heap_extract` | Extract root |
| `124-heap_sort.c` | `heap_sort` | Heap sort |

---

## 🧠 Key Concepts Reminder

### Tree vocabulary
- **Depth**: number of edges from the node to the root  
- **Height**: number of edges from the node to the deepest leaf  
- **Size**: total number of nodes in the tree

### Tree types (classic definitions)
- **Full**: every node has 0 or 2 children  
- **Complete**: all levels filled except possibly the last, filled left-to-right  
- **Perfect**: full + all leaves at the same depth  
- **Balanced**: left/right subtrees heights differ by at most 1

---

## 🛠️ How to Compile & Test

Example compilation with a local test file:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
*.c -o test
```

Run:
```bash
./test
```

---

## 🧪 Visualization Helper

Holberton usually provides a `binary_tree_print.c` for visualization.  
You can use it locally to match examples, but it is not required to push.

---

## 🚀 Repo Philosophy
This project is about **precision and structure**:
- clean recursion
- careful base cases
- correct height/depth conventions
- strict Betty compliance
- separation of concerns (no “god files”)

---

## 👤 Authors
- Antoine Gousset – GitHub: [Antgst](https://github.com/Antgst) 
- Georgia Boulnois – GitHub: [Gigi-Corlay](https://github.com/Gigi-Corlay) 
- Djibril Niang – GitHub: [Tamsir-ui](https://github.com/Tamsir-ui)
