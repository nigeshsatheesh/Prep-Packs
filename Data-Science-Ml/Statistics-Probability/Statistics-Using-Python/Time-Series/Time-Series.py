import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

id=pd.Series(['C001','C002','C003','C001','C002','C003','C001','C002','C003','C001','C002','C003'])
age=pd.Series([25,30,22,25,30,22,25,30,22,25,30,22])
productCategory=pd.Series(['Electronics','Clothing','Electronics','Electronics','Clothing','Electronics','Electronics','Clothing','Electronics','Electronics','Clothing','Electronics'])
purchaseAmount=pd.Series([5000,1200,3500,5000,1200,3500,5000,1200,3500,5000,1200,3500])
unitsSold=pd.Series([2,3,1,2,3,1,2,3,1,2,3,1])
rating=pd.Series([4.5,4.0,5.0,4.5,4.0,5.0,4.5,4.0,5.0,4.5,4.0,5.0])
date=pd.date_range(start='2024-01-01',periods=12,freq='D')
df=pd.DataFrame({'Date':date,'ID':id,'Age':age,'Product_Category':productCategory,'Purchase_Amount':purchaseAmount,'Units_Sold':unitsSold,'Rating':rating,})
df=df.set_index('Date')
print("Data first 5 rows:")
print(df.head(5))
df['7-day avg sales']=df['Purchase_Amount'].rolling(window=7).mean()
df['14-day avg sales']=df['Purchase_Amount'].rolling(window=14).mean()
df['30-day avg sales']=df['Purchase_Amount'].rolling(window=30).mean()
print(df)
plt.figure(1)
sns.barplot(x=df['Product_Category'],y=df['Units_Sold'],data=df)
plt.show()
