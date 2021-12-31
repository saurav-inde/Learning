from tkinter import *

main_window = Tk()
main_window.title('Calcx') 

entry = Entry(main_window, width=40, )
entry.grid(row=0, column=0,columnspan=4,  rowspan=3, pady= 10)

b1 = Button(main_window, text=1, height=4, width = 10, activebackground='#007a50')
b2 = Button(main_window, text=2, height=4, width = 10, activebackground='#007a50')
b3 = Button(main_window, text=3, height=4, width = 10, activebackground='#007a50')
b4 = Button(main_window, text=4, height=4, width = 10, activebackground='#007a50')
b5 = Button(main_window, text=5, height=4, width = 10, activebackground='#007a50')
b6 = Button(main_window, text=6, height=4, width = 10, activebackground='#007a50')
b7 = Button(main_window, text=7, height=4, width = 10, activebackground='#007a50')
b8 = Button(main_window, text=8, height=4, width = 10, activebackground='#007a50')
b9 = Button(main_window, text=9, height=4, width = 10, activebackground='#007a50')
b0 = Button(main_window, text=0, height=4, width = 10, activebackground='#007a50')
bCE = Button(main_window, text='DEL', height=4, width = 10,activebackground='#007a90' )
bclear = Button(main_window, text='CE', height=4, width = 10,activebackground='#007a90' )


bplus = Button(main_window, text='+', height=4, width = 10,activebackground='#007a90' )
bmult = Button(main_window, text='x', height=4, width = 10,activebackground='#007a90' )
bdivi = Button(main_window, text='/', height=4, width = 10,activebackground='#007a90' )
bsubt = Button(main_window, text='-', height=4, width = 10,activebackground='#007a90' )

b1.grid( row=1+2, column=0)
b2.grid( row=1+2, column=1)
b3.grid( row=1+2, column=2)
b4.grid( row=2+2, column=0)
b5.grid( row=2+2, column=1)
b6.grid( row=2+2, column=2)
b7.grid( row=3+2, column=0)
b8.grid( row=3+2, column=1)
b9.grid( row=3+2, column=2)
b0.grid( row=3+3, column=1)
bplus.grid( row=3+3, column=0)
bclear.grid( row=3+3, column=2)
bCE.grid( row=6, column=0)

bplus.grid( row=3, column=3)
bsubt.grid( row=4, column=3)
bmult.grid( row=5, column=3)
bdivi.grid( row=6, column=3)

main_window.mainloop()