#List Comprehension     =   A concise way to create lists in Python
#                           Compact and easier to read than traditional loops
#                           [expression for value in iterable if condition]

# list = [expression for value in iterable if condition]


list = [x * 2  for x in range(1,11)]


fruits = [fruit.upper() for fruit in ["apple", "orange", "banana", "coconut"]]


number = [1, -2, 3, 4, 5, -6, -7]
positivenums = [num for num in number if num >=0 ]

print(positivenums)
