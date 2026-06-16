import numpy as np
import pandas as pd
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler
import matplotlib.pyplot as plt

dr=pd.Series(['north','south','east','west','north'])
prd=pd.Series(['elec','cloth','home','elec','cloth'])
pr=pd.Series([5,3,22,2,20])
age=pd.Series([5,3,22,2,20])
re=pd.Series([5,3,22,2,20])
profit=pd.Series([500,300,2200,200,2000])
date=pd.date_range(start='2024-01-01',periods=5,freq='D')
df=pd.DataFrame({'Date':date,'Direction':dr,'Product':prd,'Price':pr,'Age':age,'Review':re,'Profit':profit})
print(df)
data=pd.DataFrame({'X1':pr,'X2':profit})
pca=PCA(n_components=2)
scaler=StandardScaler()
nor=scaler.fit_transform(data)
pcs=pca.fit_transform(nor)
vr=pca.explained_variance_ratio_
print(pcs)
print(vr)
plt.figure(1)
plt.plot(vr[0],vr[1])
plt.show()
plt.figure(2)
plt.scatter(pcs[:,0],pcs[:,1])
plt.show()