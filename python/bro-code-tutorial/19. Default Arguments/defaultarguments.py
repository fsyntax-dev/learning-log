# default arguements    = a default value for certain parameters
#                         default is used when that arguement is omitted  
#                         make your function more flexible, reduces # of arguments
#                         1. Positional 2.Default 3. Keyword 4. Arbitary



def netprice(listprice, discount = 0, tax = 0.06):  #function letak terus default value                                            
    return listprice * (1 - discount) * (1 + tax)

price = netprice(500) #tak perlu nak recall arguement dlm fuction berulang kali

print(price)

