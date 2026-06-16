#CODE FORMAT FOR HYPOTHESIS TESTING

#STEP 1: IMPORT LIBRARIES
#import numpy as np
#import matplotlib.pylplot as plt
#from scipy import stats

#STEP 2: DATA CREATION USING NUMPY, NUMERICALS AND STATISTICAL VALUES

#STEP 3: TEST STATISTICS
#ONE-SAMPLE T-TEST     -> stats.ttest_1samp(data,population_mean)
#TWO-SAMPLE T-TEST     -> stats.ttest_ind(group1,group2)
#PAIRED T-TEST         -> stats.ttest_rel(before,after)
#ONE-WAY ANOVA(F-TEST) -> stats.f_oneway(group_1,group_2,group_3,......)
#CHI-SQUARE TEST       -> stats.chi2_contingency(table)

#STEP 4: PRINT TEST STATISTICS DATA (STATISTICS VALUE & p VALUE)
#print(t_stats or f_stats or chi2_stats)
#print(p value)

#STEP 5: p VALUE INTERPRETATION
#if (p_value<0.5):
#   print("Accept H1 and Reject H0")
#   print("H1 hypothesis statement")
#else:
#   print("Accept H0 and Reject H1")
#   print("H0 hypothesis statement")