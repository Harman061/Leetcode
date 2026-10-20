import numpy as np
import math

def solve(a, b):
    """Implement Cosine Similarity from the mathematical contract in README.md."""

    dot_product=np.dot(np.array(a), np.array(b))
    mag_a=np.linalg.norm(np.array(a))
    mag_b=np.linalg.norm(np.array(b))

    if mag_a ==0 or mag_b==0:
        return 0

    return dot_product/(mag_a * mag_b)
