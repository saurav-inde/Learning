from tkinter import *

window_main = Tk()


def abc():
    t1.delete("1.0", END)

    t2.delete("1.0", END)

    t3.delete("1.0", END)
    t1.insert(END, float(rupee_val.get()) / 76.03)
    t2.insert(END, float(rupee_val.get())/85.71)
    t3.insert(END, float(rupee_val.get())/.67)


"""b1 = Button(window_main, text= 'Hello', command=abc)
b1.grid(row=0,column=0)

e1 = Entry(window_main)
e1.grid(row=0, column=1)

t1 = Text(window_main, height=1, width=25)
t1.grid(row=0, column=2)

# print(type(window))"""
# top row♦£4,1236544☺☻♥♦♣♠•◘○,╝\∟∟\£££∟∟o♂☺g•g1♂☺☺11☺╣  ╣æ20B9╣╕║¡ÅAEB▼║○A76♣5▲ ]!#e¿88π
l1 = Label(window_main, text="Enter INR ₹")
l1.grid(row=0, column=0)


rupee_val = StringVar()
e1 = Entry(window_main, textvariable=rupee_val)
e1.grid(row=0, column=1)

b1 = Button(window_main, text="Convert", command=abc)
b1.grid(row=0, column=2)

# headings of output
l2 = Label(window_main, text="USD $")
l2.grid(row=1, column=0)

l3 = Label(window_main, text="EURO ")
l3.grid(row=1, column=1)

l4 = Label(window_main, text="JPY")
l4.grid(row=1, column=2)

# output row
t1 = Text(window_main, height=1, width=20)
t1.grid(row=2, column=0)

t2 = Text(window_main, height=1, width=20)
t2.grid(row=2, column=1)

t3 = Text(window_main, height=1, width=20)
t3.grid(row=2, column=2)

window_main.mainloop()
