import pandas as pd

data = pd.DataFrame(pd.read_excel("data.xlsx"))


row, column = data.shape
print(data.index)
