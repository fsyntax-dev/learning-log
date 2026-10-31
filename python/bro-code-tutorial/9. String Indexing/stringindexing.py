#indexing operator
#indexing = accessing elemtns of a sequence using [] 
#[start : end : step]

credit_number = "123456789"

#start
#print(credit_number[1]) 
# result will come out as "2"
# because only [start]


#end
#print(credit_number[0:5])
#result will come out as "12345"
# [0:5] means index starts from 0 ends with 5
#if we left [:5] no number means it will start from zero vice versa [0:], just need to put :

#step
#how much number to step

print(credit_number[ : : 2])
