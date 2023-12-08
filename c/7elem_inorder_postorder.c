class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def insert(root, data):
    if root is None:
        return Node(data)
    else:
        if data <= root.data:
            root.left = insert(root.left, data)
        else:
            root.right = insert(root.right, data)
    return root

def postorder(root):
    if root is not None:
        postorder(root.left)
        postorder(root.right)
        print(root.data)

# Driver code
root = None
for i in range(7):
    data = int(input("Enter element: "))
    root = insert(root, data)

print("Postorder traversal of the BST:")
postorder(root)
