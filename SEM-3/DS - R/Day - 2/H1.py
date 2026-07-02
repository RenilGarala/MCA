block_list = ['renil@gmail.com', 'man@gmail.com', 'sujal@gmail.com', 'rudra@gmail.com']

email = 'man@gmail.com'

if email not in block_list:
    print('its not spam email')
else:
    print("its spam email")