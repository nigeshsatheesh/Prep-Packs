import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import pearsonr
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import r2_score,mean_squared_error

practice_hours=np.array([2,3,4,5,6,7,8,9,10,11]).reshape(-1,1)
test_score=np.array([45,50,55,60,65,70,75,80,85,90])
model=LinearRegression()
x_train,x_test,y_train,y_test=train_test_split(practice_hours,test_score,test_size=0.2)
model.fit(x_train,y_train)
pred=model.predict(x_test)
r2=r2_score(y_test,pred)
mse=mean_squared_error(y_test,pred)
print(model.coef_)
print(r2)
print(mse)


plt.figure(1)
plt.scatter(practice_hours,test_score)
plt.plot(practice_hours,test_score, color='red')
plt.show()