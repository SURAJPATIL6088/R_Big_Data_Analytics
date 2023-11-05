# type conversion in R

# interger to numeric
num <- as.numeric(100L)
class(num)
print(num)

# complex to integer
comp <- as.integer(5 - 2i)
class(comp)
print(comp)

# integer to logical
bool <- as.logical(100L)
class(bool)
print(bool)
