class queue_data_structure:
    def __init__(self):
        self.queue = [''] * 5
        self.front = -1
        self.rear = -1

    def enqueue(self, value):
        if((self.rear == 4 and self.front == 0) or self.front-self.rear == 1):
            print("queue is in waiting list")
        elif(self.front == -1):
            self.rear = 0
            self.front = 0
            self.queue[self.rear] = value
            print("enqueued 1")
        elif(self.rear == 4 and self.front != 0):
            self.rear = 0
            self.queue[self.rear] = value
            print("enqueued 2")
        else:
            self.rear = self.rear + 1
            self.queue[self.rear] = value
            print("enqueued 3")

    def dequeue(self):
        if(self.front == -1 and self.rear == -1):
            print("Empty queue")
        else:
            if(self.rear == 0 and self.front == 0):
                self.front = -1
        
            self.queue[self.front] = ''
            self.front = self.front+1
            print("dequeued")

    def display(self):
        print(self.queue)
    
toll_plaza = queue_data_structure()

toll_plaza.enqueue('V1')
toll_plaza.enqueue('V2')
toll_plaza.enqueue('V3')
toll_plaza.enqueue('V4')
toll_plaza.enqueue('V5')
toll_plaza.enqueue('V6')
toll_plaza.display()

toll_plaza.dequeue()
toll_plaza.dequeue()
toll_plaza.display()

toll_plaza.enqueue('V6')
toll_plaza.display()

