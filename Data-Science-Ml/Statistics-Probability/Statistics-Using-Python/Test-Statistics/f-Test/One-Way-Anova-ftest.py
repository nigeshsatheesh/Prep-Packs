#ONE-WAY ANOVA(F-TEST)

#QUESTION: An agriculture scientist tests 3 different fertilisers (A, B, C) on crop yield (kg per plot). Each fertiliser is used on 6 separate plots. 
#          Is there a significant difference in crop yield among the 3 fertilisers at 5% level?

import numpy as np
from scipy import stats

fertiliser_A=np.array([20, 22, 19, 24, 21, 23])
fertiliser_B=np.array([28, 30, 27, 32, 29, 31])
fertiliser_C=np.array([18, 20, 17, 22, 19, 21])
f_stat,p_value=stats.f_oneway(fertiliser_A,fertiliser_B,fertiliser_C)
print(f"The calculated T value: {f_stat:.3f}")
print(f"The p value: {p_value:.3f}")
if(p_value<0.05):
    print("Accept H1 and Reject H0")
    print("There is significant difference in crop yield among the 3 fertilisers")
else:
    print("Accept H0 and Reject H1")
    print("There is no significant difference in crop yield among the 3 fertilisers")