#ONE-SAMPLE T-TEST

#QUESTION: A coffee machine is supposed to fill cups with exactly 150 ml. A quality checker measures 10 random cups to see if the machine is working correctly.
#          Test at 5% significance level — is the machine filling cups correctly?

import numpy as np
from scipy import stats

data=np.array([148, 152, 149, 151, 150, 153, 147, 152, 149, 151])
population_mean=150
t_stat,p_value=stats.ttest_1samp(data,population_mean)
print(f"The calculated T value: {t_stat:.3f}")
print(f"The p value: {p_value:.3f}")
if(p_value<0.05):
    print("Accept H1 and Reject H0")
    print("The machine is not filling the cups correctly")
else:
    print("Accept H0 and Reject H1")
    print("The machine is filling the cups correctly")