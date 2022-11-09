# Our goal
$\int(2^x)$
$$\int(2^x)= \frac{\partial x}{\partial y} $$
```python
def function():
    t
```

# His goal
awdaw
## Notation:

$\odot$ is the Hadamart product
## How to compute the gradient slice of $w_{i}^L$ recursively
$$
\overrightarrow{\frac{\partial c}{\partial w_{i}^L}} 
= 
\overrightarrow{\frac{\partial c}{\partial o^L}}
\odot
\overrightarrow{\frac{\partial o^L}{\partial w_{i}^L}}
=
\overrightarrow{\frac{\partial c}{\partial a^L}}
\odot
\overrightarrow{\frac{\partial a^L}{\partial o^L}}
\odot
\overrightarrow{\frac{\partial o^L}{\partial w_{i}^L}}
$$ 
$$
\overrightarrow{\frac{\partial c}{\partial a^L}}
=
\overrightarrow{\frac{\partial o^{L+1}}{\partial a^L}}
\sum_{i} \frac{\partial c}{\partial o^{L+1}_{i}} 
=
\overrightarrow{\sum_{j} w_{i, j}^{L+1}}
\sum_{i} \frac{\partial c}{\partial o^{L+1}_{i}}
=
\overrightarrow{\sum_{k} w_{\forall, k}^{L+1} 
\frac{\partial c}{\partial o^{L+1}_{k}}}\\
$$
$$
\overrightarrow{\frac{\partial o^L}{\partial w_{i}^L}} = a^{L-1}
$$
If we pose $\lambda = \frac{\partial c}{\partial o}$ and use the previous
results we can obtain a compact recursive formulation of the gradient
slice $w_{i}^L$
$$
\overrightarrow{\frac{\partial c}{\partial w_{i}^L}} 
= 
\lambda^{L}a^{L-1}, 
$$
$$
\lambda^{L} = 
\begin{cases}
    \frac{\partial a^L}{\partial o^L}
    \overrightarrow{\frac{\partial c}{\partial y}}
    &L = |L| \\
    \frac{\partial a^L}{\partial o^L}
    \overrightarrow{\sum_{k} w_{\forall, k}^{L+1} \lambda^{L+1}_{k}} &otherwise
\end{cases}
$$


