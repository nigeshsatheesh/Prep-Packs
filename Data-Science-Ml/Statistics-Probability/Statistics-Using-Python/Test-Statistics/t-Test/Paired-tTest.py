#PAIRED TEST

#QUESTION: A gym trainer records the weight (kg) of 8 clients before and after a 3-month fitness programme — same people, measured twice. 
#          Did the fitness programme significantly reduce weight at 5% level?

import numpy as np
from scipy import stats

before=np.array([85, 90, 78, 92, 88, 76, 95, 82])
after=np.array([80, 85, 75, 88, 83, 72, 90, 78])
t_stat,p_value=stats.ttest_rel(before,after)
print(f"The calculated T value: {t_stat:.3f}")
print(f"The p value: {p_value:.3f}")
if(p_value<0.05):
    print("Accept H1 and Reject H0")
    print("The fitness programme reduces weight significantly")
else:
    print("Accept H0 and Reject H1")
    print("The fitness programme does not reduces weight significantly")