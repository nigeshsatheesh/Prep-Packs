import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

age=np.array([19,20,21])
studyHours=np.array([5,8,3])
attendance=np.array([85,92,75])
prevCGPA=np.array([3.2,3.8,29])
finalScore=np.array([78,92,65])

df=pd.DataFrame({'Age':age,'StudyHours':studyHours,'Attendance':attendance,'PreviousCGPA':prevCGPA,'FinalScore':finalScore},index=['Raj','Priya','Amit'])
print("Data:")
print(df)
print("Mean:",df.mean())
print("Median:",df.median())
print("STD:",df.std())
print("No of NULLS:")
print(df.isnull().value_counts())
df=df.fillna(df.mean())
df['Performance']=(df['FinalScore']/100)*10
data=df[(df['Attendance']>=80) & (df['PreviousCGPA']>=3.0)]
print("Data:",data)

plt.figure(1)
plt.hist(studyHours,bins=3)
plt.figure(2)
plt.pie(attendance)
plt.figure(3)
plt.boxplot(prevCGPA)

plt.figure(4)
plt.bar(attendance,prevCGPA)
plt.figure(5)
plt.scatter(df['PreviousCGPA'],df['FinalScore'])
plt.figure(6)
plt.plot(df['StudyHours'],df['PreviousCGPA'])