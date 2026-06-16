#CHI-SQUARE TEST

#QUESTION: A survey asks 200 people (male/female) which phone brand they prefer (Apple/Samsung/Others). We want to know if gender affects brand preference. 
#          Is there a significant association between gender and phone preference at 5% level?

import numpy as np
from scipy import stats

#rows=genders, columns=brand
observed=np.array([[40, 30, 30],[55, 25, 20]])
chi2_stat,p_value=stats.chi2_contingency(observed)
print(f"The calculated T value: {chi2_stat:.3f}")
print(f"The p value: {p_value:.3f}")
if(p_value<0.05):
    print("Accept H1 and Reject H0")
    print("There is significant association between gender and phone preference")
else:
    print("Accept H0 and Reject H1")
    print("There is no significant association between gender and phone preference")