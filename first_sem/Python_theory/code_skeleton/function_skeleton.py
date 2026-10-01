#complete the 5 functions.then complete the main program so it calls them and prints the bill
#get_price(item) returns the price of the item.
#it returns 0 if the item is not on the menu.
#item_cost(item,qty) returns the cost of buying qty of an item.
#it must use get_price().
#calculate_gst (amount,rate=0.05) returns the gst on the amount
#The rate is 5% unless another rate is given.
#generate_bill(subtotal,discount_percent=0)
#returns three values: the discount,the gst
#(calculated on the amount after the discount), and the final total.
#split_bill(total,people) returns two values: the whole rupees each person pays,
# and the rupees left over.

def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 150
    # TODO: complete the remaining items
    elif item =="puri":
        return 35 
    elif item =="cofee":
        return 80
    elif item =="golibaje":
        return 40
    else:
        return 0


def item_cost(item, qty):
    price=get_price(item)
    return price * qty


def calculate_gst(amount, rate=0.05):
    # TODO: return the GST rounded to 2 decimals
    gst=amount*rate
    return round(gst,2)



def generate_bill(subtotal, discount_percent=0):
    discount = subtotal*discount_percent
    amount_after_discount = subtotal - discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount+gst
    return discount,gst,total


def split_bill(total, people):
    each_pays = total/people
    left_over = total % people  #or total - each-pays * people
    return each_pays,left_over  


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 = item_cost("dosa",2)  #TODO: call item_cost() for dosa and coffee and add them
discount1, gst1, total1 = generate_bill(subtotal1,0.02) # TODO: call generate_bill() using a KEYWORD argument
subtotal2 = item_cost('coffe',3)
discount2, gst2, total2 = generate_bill(subtotal2,0.02)
each, extra = split_bill (total1+total2,3)# TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal :", subtotal1)
print("Discount :", discount1)
print("GST      :", gst1)
print("Total    :", round(total1))
print("Subtotal :", subtotal1)
print("Discount :", discount2)
print("GST      :", gst2)
print("Total    :", total2)



print("Each pays:", each, "| Left over:", round(extra))


#subtotal,
