print("TICKET PRICING SYSTEM")
actualprice = 250.0

day=input("Enter the week day:")
if day == "saturday" or day == "sunday":
 dayprice= actualprice + (actualprice*0.25)
elif day == ["monday","tuesday","wednesday","thursday","friday"]:
 dayprice = actualprice

time=input("Enter the timing:")
if time == "morning":
  timeprice = actualprice
elif time == "afternoon":
  timeprice = dayprice + (actualprice*0.10)
else:
  time =="evening"
  timeprice = dayprice + (actualprice*0.30)
print("The Price:", timeprice)

  
age=int(input("Enter your age: "))
if age <=5:
  final_price= timeprice - (actualprice *0.50)
elif age <= 59:
  final_price= timeprice
else:
  final_price=timeprice - (actualprice*0.10)



print("Ticket Price: ", final_price)

 


 



