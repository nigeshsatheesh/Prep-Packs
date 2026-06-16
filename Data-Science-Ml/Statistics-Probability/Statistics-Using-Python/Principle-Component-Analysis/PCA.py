#PCA PYTHON CODE

#ANALYSIS OF PCA IN 3X3 MATRIX

#LIBRARIES

import numpy as np
import pandas as pd
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA
import matplotlib.pyplot as plt

#3 GROUP DATA

data={"Height":[140,150,160,170,180],"Weight":[40,50,60,70,80],"Age":[18,20,24,28,30]}
df=pd.DataFrame(data)
print("The Given Data:\n")
print(df)

#STANDARDIZING DATASET

scaler=StandardScaler()
z=scaler.fit_transform(df)
print("\nStandardized Form:\n")
print(z)

#PCA

pca=PCA(n_components=3)
pca_result=pca.fit_transform(z)
print("\nPrincipal Component Values:",pca.explained_variance_ratio_)
print("\nPrinicipal Component Scores:\n")
print(pca_result)

#VISUALIZATION

plt.figure(1)
plt.scatter([1,2,3],pca.explained_variance_ratio_)
plt.xlabel("Principal Components")
plt.ylabel("Variance Explained")
plt.title("Scatter Plot")
plt.show()
