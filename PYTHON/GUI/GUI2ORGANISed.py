from tkinter import *
win = Tk()
win.title('calx')
class button_class:
    def __init__(self, b_text, h, r ,c,activecolor = '#ffffff', bggcolor = '#f0f0f0'):
        self = Button(win, text=b_text,height=int(h/3)-2, width=int(h/3) +3, activebackground=activecolor, background=  bggcolor)
        self.grid(row=r, column=c, rowspan= 1, columnspan= 1)

    def button_action():
        jh= 2    


entrybox = Entry(win, width=32, borderwidth=2)
entrybox.grid(row=0,column=0, columnspan=4)

b1 = button_class('1', 15, 1,0)
b2 = button_class('2', 15, 1,1)
b3 = button_class('3', 15, 1,2)

b4 = button_class('4', 15, 2,0)
b5 = button_class('5', 15, 2,1)
b6 = button_class('6', 15, 2,2)

b7 = button_class('7', 15, 3,0)
b8 = button_class('8', 15, 3,1)
b9 = button_class('9', 15, 3,2)

bclear = button_class('CE', 15,4,0)
b0 = button_class('0', 15, 4,1)
bdel = button_class('DEL', 15, 4,2)

bplus = button_class('+', 15, 1,3, bggcolor='#33d6ff')
bsub = button_class('-', 15, 2,3, bggcolor='#33d6ff')
bmult = button_class('x', 15, 3,3, bggcolor='#33d6ff')
bdiv = button_class('÷', 15, 4,3, bggcolor='#33d6ff')

win.mainloop()