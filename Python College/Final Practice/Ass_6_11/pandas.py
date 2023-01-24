import pandas as pd
import matplotlib.pyplot as plt

#! Read a csv file and display its data

df = pd.read_csv("Temp.csv")

print(df)

plt.bar(df['day'],height=df['Temperature'])

plt.xlabel("Days")
plt.ylabel("Temperature")

plt.show()