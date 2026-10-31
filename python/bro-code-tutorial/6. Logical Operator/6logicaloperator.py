# logical operator #
# evaluate multiple condition (or, and, not)
# or = at least one condition must be True
# and = both condition must be True
# not = invert the condition (not False, not True)

#1 or 
#temp = 25
#is_raining = False

#if temp > 35 or temp < 0 or is_raining: #check multiple condition, each one ma be true
#    print("The outdoor event is cancelled")
#else:
#    print("The outdoor event is still scheduled")

#2 and
#temp = -1
#is_sunny = True

#if temp >= 35 and is_sunny:
#    print("It is hot outside!")
#elif temp >= 25 and is_sunny:
#    print("It is warm otuside!")
#else:
#    print("Might be raining!")

#3 not

subscription_status = input("Have you subscribe to our services?: (Y or N): ")
user_point = int(input("What is your collected points: "))

#Determine Subscription Status
if subscription_status == "Y":
    user_subscribed = True
elif subscription_status == "N":
    user_subscribed = False
else:
    print("Invalid Input!")

#Check User Subscription Condition
if user_point >=50 and user_subscribed:
    print("You are a member!")

elif user_point >= 50 and not user_subscribed: 
    print("You are eligible to subscribe")

else:
    print("Collect our point and subscribe to our services!")