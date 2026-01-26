class Node:
    def __init__(self, value, left=None, right=None):
        self.value = value
        self.left = left
        self.right = right
    # Node defnintion 

# Just hard code, whatever works lol
inputs = [
    ("A", "B", "E"),
    ("B", "C", "null"),
    ("C", "null", "D"),
    ("E", "F", "H"),
    ("F", "null", "G"),
    ("H", "I", "J")
]


# Build dictionary of nodes
nodes = {}
children = set()

for root, left, right in inputs:
    if root not in nodes:
        nodes[root] = Node(root)
    if left != "null":
        nodes[left] = Node(left)
        children.add(left)
    if right != "null":
        nodes[right] = Node(right)
        children.add(right)

# Link the nodes
for root, left, right in inputs:
    if left != "null":
        nodes[root].left = nodes[left]
    if right != "null":
        nodes[root].right = nodes[right]

# Find root (node not in children set)
for key in nodes:
    if key not in children:
        root = nodes[key]
        break


# ---------- Traversal Functions ----------
def preorder(node, out):
    if node:
        out.append(node.value)
        preorder(node.left, out)
        preorder(node.right, out)


def inorder(node, out):
    if node:
        inorder(node.left, out)
        out.append(node.value)
        inorder(node.right, out)


def postorder(node, out):
    if node:
        postorder(node.left, out)
        postorder(node.right, out)
        out.append(node.value)


#------------- PRINT OUTPUT ----------------
print("Node  L-Subtree  R-Subtree")
for r, l, t in inputs:
    print(r, l, t)

print("\nRoot of the Tree:", root.value)

pre = []
ino = []
post = []

preorder(root, pre)
inorder(root, ino)
postorder(root, post)

print("Preorder Traversal:", " ".join(pre))
print("Inorder Traversal:", " ".join(ino))
print("Postorder Traversal:", " ".join(post))
