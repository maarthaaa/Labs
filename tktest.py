import tkinter as tk


def code():
    message = entry.get()
    try:
        global encode
        key = int(entry1.get())
        encode = [" "] * key
        for row in range(key):
            p = row
            while p < len(message):
                encode[row]+=message[p] 
                p+=key
            print(encode)
            var = tk.StringVar(value=encode)
            lst = tk.Listbox(window, listvariable= var)
            lst.grid(row=3, column=2,sticky="nsew")

    except:
        print("Durak")


window = tk.Tk()
window.title("Route cipher")

window.rowconfigure([0,1,2,3], minsize=25, weight=1)
window.columnconfigure([0, 1,2], minsize=25, weight=1)



lab = tk.Label(text="Message", bg="black",fg="white")
lab.grid(row=0,column=0,sticky="nsew")
entry = tk.Entry(bg="white",fg="black")
entry.grid(row=1, column=0,sticky="nsew")

lab1 = tk.Label(text="Key", bg="black",fg="white")
lab1.grid(row=0,column=1,sticky="nsew")

entry1 = tk.Entry(bg="white",fg="black")
entry1.grid(row=1, column=1,sticky="nsew")

# lbl = tk.Label(window, text="")
# lbl.grid(row=3, column=2,sticky="nsew")

but = tk.Button(master =window, text = "Encode!",command=code)
but.grid(row=0,column=2,sticky="nsew")



window.mainloop()