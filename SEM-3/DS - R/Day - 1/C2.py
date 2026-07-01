user_choice = 0
user_data = []
while(user_choice == 0):
    choice = int(input("Enter\n1. enter charector\n2. exit\n3. undo\n4. get text"))
    if(choice == 1):
        ch = input("Enter next charector")
        user_data.append(ch)
        print("new string is ", user_data)
    if(choice == 2):
        break
    if(choice == 3):
        user_data.pop()
    if(choice == 4):
        print(''.join(user_data))
        