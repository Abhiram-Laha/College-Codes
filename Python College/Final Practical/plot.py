import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("tips.csv")

print(df.head())

'''
plt.plot(df['total_bill'],color='r')
plt.plot(df['tip'],color='m')
'''
#plt.scatter(df['tip'],df['day'],c=df['size'],s=df['total_bill']*5)


plt.bar(df['day'],height=df['tip'])
plt.show()
