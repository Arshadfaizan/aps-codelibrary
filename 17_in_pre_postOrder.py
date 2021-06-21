class Tree:
	def __init__(self,value,left=None,right=None):
		self.left=left
		self.right=right
		self.value=value
def printTree(root):
	print(root.value)
	if (root.left):
		root.left.printTree()
	if root.right:
		root.right.printTree()
def preorder(root):
	if root:
		print(root.value)
		preorder(root.left)
		preorder(root.right)
def inorder(root):
	if root:
		inorder(root.left)
		print(root.value)
		inorder(root.right)
def postorder(root):
	if root:
		postorder(root.left)
		postorder(root.right)
			print(root.value)

root = Tree(10)
root.left = Tree(34)
root.right = Tree(89)
root.left.left = Tree(45)
root.left.right = Tree(50)
printTree()
