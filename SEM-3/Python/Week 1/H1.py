class conveyor_belt:
    def __init__(self):
        self.conveyor = []

    def store(self, product):
        self.conveyor.append(product)

    def print_slot(self):
        print(self.conveyor)

    def find_product(self, product):
        print("Product index = ", self.conveyor.index(product)+1)

    def update_slot(self, index, product):
        self.conveyor[index-1] = product
        print("Updated slot : ", self.conveyor)
    
    def is_full(self):
        if(len(self.conveyor) == 8):
            print("full")
        else:
            print("not full")

conveyor = conveyor_belt()
conveyor.store("milk")
conveyor.store("chikki")
conveyor.store("penute butter")
conveyor.store("seeds")
conveyor.store("kiwi")
conveyor.store("banana")
conveyor.store("paneer")
conveyor.store("tofu")
conveyor.print_slot()
conveyor.find_product('seeds')
conveyor.update_slot(2,'dates')
conveyor.is_full()
