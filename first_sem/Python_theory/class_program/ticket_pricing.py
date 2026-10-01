#------------------------------------------------------------------------------------
#Ticket Pricing System: Calculate a movie ticket price using if-elif-else based on age group (child,adult,senior citizen) combined with day-of-week discounts using logical operators (e.g., weekday vs. weekend).
#if age < 5 ->child ->50% discount
#if age between 6 and 59 -->adult ->no discount
#if age > 60 -> senior citizen ->10% discount
#from Monday to Friday -> actual ticket price
# On Saturday and Sunday -> increase the TP to 25%
#Enter your age:
#Enter the week day:
#Ticket Price:

print("TICKET PRICING SYSTEM")
BASE_PRICE = 100.0
age=int(input("Enter your age: "))
day=input("Enter the week day:").strip().lower()
if age <=5 :
 discount = 0.50
elif age <= 59:
 discount= 0.0
else:
 discount=0.10

price_after_age_discount= BASE_PRICE*(1.0-discount)

if day == "saturday" or day == "sunday":
 final_price = price_after_age_discount*1.25

elif day in ["monday","tuesday","wednesday","thursday","friday"]:
 final_price = price_after_age_discount

 print("invalid day entered.Defaulting to standard weekday pricing.")
 final_price= price_after_age_discount

 print(f"Ticket Price:${final_price:.2f}")



