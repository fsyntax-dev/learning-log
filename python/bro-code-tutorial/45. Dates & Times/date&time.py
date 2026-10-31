
import datetime

date = datetime.date(2025, 2, 8)
today = datetime.date.today()
today = today.strftime("%d %m %Y")


time = datetime.time(1,12,0)
now = datetime.datetime.now()
now = now.strftime("%H:%M:%S")

print(today)
print(now)