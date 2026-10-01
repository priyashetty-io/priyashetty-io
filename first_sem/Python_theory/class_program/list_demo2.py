sum =0
my_marks=[6,7,8,9,6]
for number in range(5):
    newMark=(input("Enter your mark: "))
    my_marks.append(newMark)
    

for i in range(len(my_marks)):   
    sum+=my_marks[i]
    print("Total",sum)
