from string import Template

class MyTemplate(Template):
    delimiter = '#'

def Main():
    cart = []
    cart.append(dict (Name  = "Dayanand" , Surname = "Chinchure", Age = 24))
    cart.append(dict (Name  = "Manik" , Surname = "Mahajan", Age = 24))
    cart.append(dict (Name  = "Arjun" , Surname = "Soundankar", Age = 24))
    cart.append(dict (Name  = "Aditya" , Surname = "Patil", Age = 24))
    
    t = MyTemplate("#Surname #Name")

    for data in cart:
        print (t.substitute(data))

Main()
        
