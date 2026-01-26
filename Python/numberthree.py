class Stack:
    def __init__(self):
        self.items = []  # Im using pythhon cuz it's way easier than C for stacks

    def push(self, value):
        self.items.append(value)

    def pop(self):
        if self.is_empty():
            return "Stack Underflow"
        return self.items.pop()

    def peek(self):
        if self.is_empty():
            return None
        return self.items[-1]

    def is_empty(self):
        return len(self.items) == 0

    def size(self):
        return len(self.items)
# Examole stuff
stack = Stack()
stack.push(10)
stack.push(20)
stack.push(30)

print("Top element:", stack.peek())     # 30
print("Popped:", stack.pop())           # 30
print("Stack size:", stack.size())      # 2
print("Is empty?", stack.is_empty())    # False
