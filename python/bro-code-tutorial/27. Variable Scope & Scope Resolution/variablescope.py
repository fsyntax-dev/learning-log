# variable scope    = where a variable is visible and accessible
# scope resolution  = (LEGB) Local -> Enclosed -> Global -> Built-In


def  function1():
    a = 1
    print(a)

def  function2():
    a = 2
    print(a)

#Local Scope =  variable sama berfungsi dalam scope function sahaja
#               dua function berbeza tapi variable sama


#Global Scope = variable exist luar function 

function1()
function2()

