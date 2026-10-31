

grades = {
            "John"    :"A", 
            "Doe"   :"A+", 
            "Alex"      :"B+",
            "Carter"  :"C-"
          }

student = input("Enter the name of student: ").capitalize()

if student in grades:
    print(f"{student}'s grade is {grades[student]}") #retrive value in dict {dict[index]}
else:
    print(f"{student} was not found in our database!")