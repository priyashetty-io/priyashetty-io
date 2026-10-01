#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
name = name.strip().title()
first,last = name.split()[0],name.split()[1]
initials = first[0].upper() + last[0].upper()

email = email.strip().lower()
domain = email.split("@")[1]

phone = "*" *(len(phone)-4)+ phone[-4:]
valid = "@" in email and len(phone) >=10

print("===============================")
print("PROFILE CARD")
print("===============================")
print("Name :",first,last)
print("Initials:",initials)
print("Email:",email)
print("Domain:",domain)
print("Phone:",phone.replace("-",""))
print("Valid:",valid)
print("===============================")

