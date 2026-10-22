my_string='''sachin__KUMAR
sachin@GOOGLE.com
+91-1234-5684-11'''

Name=(my_string.split('\n')[0])


print('Name          :',Name)
Email=(my_string.split('\n')[1])
print('Email         :',Email)
Contact_Number=(my_string.split('\n')[2])
print('Contact_Number:',Contact_Number)
print(Name.title())

s=(Name[0].upper())

p=(Name[1:6].lower())

o=(Name[7])

q=(Name[8].upper())

r=(Name[9:14].lower())

print(s+p+o+q+r)