print('Enter First Student Details')
FirstName = input('Enter Your Name: ')
EnglishMark = input('Enter your English Mark: ')
MathsMark = input('ENTER MATHS MARK: ')
PythonMark = input('ENTER PYTHON MARKS: ') 
EnglishMark = int(EnglishMark)
MathsMark = int(MathsMark)
PythonMark = int(PythonMark)
print('..........................................')
TOTALMARK = EnglishMark + MathsMark + PythonMark
print('TOTAL MARK: ', TOTALMARK)
AVERAGEMARK = TOTALMARK * 100 /300
print(f"The average is {AVERAGEMARK:.2F}%")



print('Enter Second Student Details')
SecondName = input('Enter Your Name: ')
English_Mark = input('Enter your English Marks: ')
Maths_Mark = input('Enter your Maths Mark: ')
Python_Mark = input('Enter your Python Mark: ')
English_Mark = int(English_Mark)
Maths_Mark = int(MathsMark)
Python_Mark = int(Python_Mark)
print('.........................................')
TOTAL_MARK = English_Mark + Maths_Mark + Python_Mark
print('TOTAL MARK: ', TOTAL_MARK)
AVERAGE_MARK = TOTAL_MARK * 100 / 300
print(f"The average is {AVERAGE_MARK:.2F}%")

print(f"{'Name':<20}{'English':<12}{'Maths':<12}{'Python':<12}{'TOTAL':<12}{'%':<12}")
print(f"{FirstName:<20}{EnglishMark:<12}{MathsMark:<12}{PythonMark:<12}{TOTALMARK:<12}{AVERAGEMARK:<12}")
print(f"{SecondName:<20}{English_Mark:<12}{Maths_Mark:<12}{Python_Mark:<12}{TOTAL_MARK:<12}{AVERAGE_MARK:<12}")









