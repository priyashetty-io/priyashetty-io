Name = input('ENTER YOUR NAME: ')
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
