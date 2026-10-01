#function to read student data
rollno=0
Name=''
Maths=0
python=0
dbms=0
Total=0
Percentage=0
Average=0

def read_data():
    global rollno,Name,Maths,python,dbms
    Name=input("Enter your Name:")
    rollno=int(input("Enter your Roll number:"))
    Maths=int(input("Enter your Maths Mark:"))
    python=int(input("Enter your Python Mark:"))
    dbms=int(input("Enter your DBMS Mark:"))
    #return multiple values
    return rollno,Name,Maths,python,dbms
    
def getTotal(firstmark,secondmark,thirdmark):
    global Total
    Total=firstmark+secondmark+thirdmark
    
    
def getAverage():
      global Average
      Average=Total/3
      
      
def getPercentage():
     global Percentage
     Percentage=Total/300*100
     
     
def findgrade():
     if Percentage>85:
          print("Double distinction")

     elif Percentage>=75:
         print("Distinction")

     elif Percentage>60:
      print("First Class")

     elif Percentage<35:
         print ("Fail")
     
     else:
      print("Pass")

def displaystudentdetail():
    print("======student details========")
    print("Maths mark: ",Maths)
    print("Python marks: ",python)
    print("DBMS marks: ",dbms)
    print("Total Mark: ",Total)
    print("Average Mark: ",Average)
    print("Percentage: ",Percentage)
for i in range(1,4):    
 a,b,c,d,e=read_data()
 #stores returned value 
 total=getTotal()
 getAverage()
 getPercentage()
 displaystudentdetail()
 findgrade()
 
