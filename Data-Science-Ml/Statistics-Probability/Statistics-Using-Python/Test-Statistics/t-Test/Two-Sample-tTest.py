#TWO-SAMPLE T-TEST

#QUESTION: A teacher wants to know if boys and girls scored differently in a math exam. Two independent groups were tested. 
#          Is there a significant difference between boys and girls scores at 5% level?

import numpy as np
from scipy import stats

boys_score=np.array([72, 68, 75, 80, 65, 70, 78, 74, 69, 73])
girls_score=np.array([80, 85, 78, 90, 82, 88, 76, 84, 79, 87])
t_stat,p_value=stats.ttest_ind(boys_score,girls_score)
print(f"The calculated T value: {t_stat:.3f}")
print(f"The p value: {p_value:.3f}")
if(p_value<0.05):
    print("Accept H1 and Reject H0")
    print("There is significant difference between boys and girls scores")
else:
    print("Accept H0 and Reject H1")
    print("There is no significant difference between boys and girls scores")