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


## Gradient of weight row i:
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
\sum_{i} \frac{\partial c}{\partial o^{L+1}}
=
\sum_{j} w_{i, j}^L
\sum_{i} \frac{\partial c}{\partial o^{L+1}}
$$

$$
\overrightarrow{\frac{\partial c}{\partial a^L}}
=
\overrightarrow{\frac{\partial o^{L+1}}{\partial a^L}}
\sum_{i} \frac{\partial c}{\partial o^{L+1}}
=
\sum_{j} w_{i, j}^L
\sum_{i} \frac{\partial c}{\partial o^{L+1}_{i}}
$$

