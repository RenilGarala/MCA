class stack_class:
    def __init__(self):
        self.stack=[]
        self.top=-1
        self.last_removed = ''

    def visit(self, place):
        self.stack.append(place)
        self.top=self.top+1
    
    def back(self):
        self.last_removed = self.stack[self.top]
        self.stack.pop()
        self.top = self.top - 1

    def forword(self):
        self.top = self.top + 1
        self.stack.append(self.last_removed)
        
    def display(self):
        print(self.stack)

hiking_trail = stack_class()

hiking_trail.visit('A') 
hiking_trail.visit('B') 
hiking_trail.visit('C') 
hiking_trail.visit('D') 
hiking_trail.display()

hiking_trail.back()
hiking_trail.display()

hiking_trail.forword()
hiking_trail.display()



    