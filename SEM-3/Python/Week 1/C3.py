class smartprinter:
    def __init__(self):
        normal_job = []
        urgent_job = []

    def insert_job(self,job,priority):
        if(priority == 'urgent'):
            self.urgent_job.append(job)
        else:
            self.normal_job.append(job)
    
    def print(self):
        for i in self.urgent_job:
            print("Executed Urgent Job ", i, "\n")
        for i in self.normal_job:
            print("Execute normal", i, "\n")

printer = smartprinter()
printer.insert_job('renil', 'urgent')
printer.insert_job('rishi', 'normal')
printer.insert_job('easy pizzy lemon squezzy', 'urgent')
printer.print()


"""
without class, manu driven:

normal_job = []
urgent_job = []
choice = 1

while(choice != 0):
    choice = int(input("Enter\n0. exit\n1. enter job\n"))
    if(choice == 1):
        job = input("Enter job")
        priority = int(input("1. urgent\n2. normal"))
        if(priority == 1):
            urgent_job.append(job)
        else:
            normal_job.append(job)
    if(choice == 0):
        break

for i in urgent_job:
    print("Executed Urgent Job ", i, "\n")
for i in normal_job:
    print("Execute normal", i, "\n")
"""