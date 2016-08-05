from string import Template

def Main():
    cart = []
    cart.append(dict(item="Coke", price=10, qty=2))
    cart.append(dict(item="Pep", price=15, qty=10))
    cart.append(dict(item="Fish", price=30, qty=5))
    
    #print cart

    t = Template("$qty  x  $item =  $price")
    total=0
    print ("Cart :")

    for data in cart:
        print data["item"]
        print (t.substitute(data))
        total+=data["price"]
   
    print ("Total : "+ str(total))

if __name__ ==  '__main__':
    Main()
       
        


