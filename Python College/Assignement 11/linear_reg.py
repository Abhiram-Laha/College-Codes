import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error,mean_squared_error

df = pd.read_csv("student_scores.csv")

print(df.head(10))
#df.plot.scatter(x='Hours',y='Scores',title='Scatter Plot of Hours with Scores',c='r')
print(df.describe())

y = df['Scores'].values.reshape(-1,1)
x = df['Hours'].values.reshape(-1,1)

print(df['Scores'].values)
print(df['Hours'].values.shape)
print(x.shape)
print(x)

#x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.2)
seed = 42
x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.2,random_state=seed)

print(x_train)
print(y_train)

model = LinearRegression()
model.fit(x_train,y_train)
print(model.coef_)
print(model.intercept_)

score = model.predict([[9.5]])
print(score)

y_pred = model.predict(x_test)

df_preds = pd.DataFrame({'Actual':y_test.squeeze(), 'Predicted':y_pred.squeeze()})
print(df_preds)

mae = mean_absolute_error(y_test,y_pred)
mse = mean_squared_error(y_test,y_pred)

rmse = np.sqrt(mse)

print(f'Mean Absolute Error : {mae:.2f}')



