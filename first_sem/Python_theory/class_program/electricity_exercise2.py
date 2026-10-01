print("calculate a household's electricity bill ")

category=input("enter the category : ")
if category == "1":
    print("commercial")
    unitsconsumed=int(input("unitsconsumed"))
    base=100
    if unitsconsumed <=100:
        bill=unitsconsumed*10 
    elif unitsconsumed <=300 and unitsconsumed>100:
        amount=unitsconsumed-base
        bill=(amount*12)+(base*10)
    elif unitsconsumed >300 :
        amount1=unitsconsumed-base
        bill=(amount1*15)+base
    print("the bill after unitsconsumed : ",bill)
    peakthreshold=input(" is peakthreshold found[yes/no]:")
    if peakthreshold  == "yes" :
        penalty_bill=bill+100
    else: 
        penalty_bill=bill
    print("the bill after threshold :",penalty_bill)
    billpayed_date=input("enter the date when bill is payed")
    if billpayed_date=="due date" :
        print("the discount is available")
    else: 
        print("the discount is not available")

else: 
    base=100
    category == "0"
    print("non-commercial")
    unitsconsumed=int(input("unitsconsumed"))
    if unitsconsumed <=100:
        bill1=unitsconsumed*5 
    elif unitsconsumed <=300 and unitsconsumed <=100:
        amount=unitsconsumed-base
        bill1=(amount*6)+(base*6)
    elif unitsconsumed >300:
        amount2=unitsconsumed-base
        bill1=(amount2*8)- base
    print("the bill after unitsconsumed : ",bill1)
    peakthreshold=input(" is peakthreshold found[yes/no]:")
    if peakthreshold == "yes" :
        penalty_bill1=bill1+50
    else: 
        penalty_bill1=bill1
    print("the bill after threshold :",penalty_bill1)
    billpayed_date=input("enter the date when bill is payed")
    duedate=int
    if duedate <=25/7/26:
        print("the discount is available",bill1*10)
    else:
        duedate>=25/7/26
        print("the discount is not available")