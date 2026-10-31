#exception  =   event that interrupts the flow of a program
#               ZeroDivision    = Divide by Zero        :   1 / 0
#               TypeError       = Different Data Type   :   1 / "1"
#               ValueError      = Invalid value 
#               1.try   2.except    3.finally

try:                #Try to execute code
    number = int(input("Enter a number: "))
    print(1/number)

#Individual Exception = Good Practice
except ZeroDivisionError:   #Handle exception
    print("You can't divide by zero!")

except ValueError:
    print("Enter only integer!")

#Accumulated Exception = catch all exception
except Exception:
    print("Something went wrong!")

finally: #Do some clean up
    pass