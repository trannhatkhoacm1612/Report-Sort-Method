import os
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
path_head = "D:\\CTDL _ GT\\output_time"
data = []
for item in os.listdir(path_head):
    file = open(path_head + "\\" + item,"r")
    li = file.readline().split()
    li_sub = []
    for item in li:
        li_sub.append(float(item))
    data.append(li_sub)
print(data)
# data = np.asarray(data)
fig, ax = plt.subplots()
fig.set_size_inches(12,6)
arr_li = ['Dãy 1', 'Dãy 2', 'Dãy 3', 'Dãy 4', 'Dãy 5', 'Dãy 6', 'Dãy 7', 'Dãy 8', 'Dãy 9', 'Dãy 10']
col_li = ['#33FFFF',"#33FF33","#6666FF","#005500"]
for i in range(4):
    d = {"dãy":arr_li[:],"time":data[i][:]}
    df = pd.DataFrame(d)
    x = np.asarray(df["dãy"])
    y = np.asarray(df["time"])
    plt.plot(x, y, color=col_li[i], label= os.listdir(path_head)[i])


ax.legend(loc='upper right', frameon=False)
plt.show()