import numpy as np
import math

def solve(x):
    """Implement Normalize a Vector from the mathematical contract in README.md."""
    length=math.sqrt(sum(k**2 for k in x))
    if length==0:
        raise ValueError ("Zero vector")
    y=[]
    for i in range(len(x)):
        y.append(x[i]/length)

    return y
