import tkinter as tk

window = tk.Tk()
window.title("Medical Test Picker")

window.rowconfigure([0,1,2], minsize=25, weight=1)
window.columnconfigure([0, 1,2], minsize=25, weight=1)


a ={
   "kreatinin":("leg numbness", "fatique"),
   "anemia": ("pallor", "general weakness"),
   "seretonin":("anxiety","apathy","lost of appetite")
}

posSympt = []
for valueTuple in a.values():
  posSympt.extend(valueTuple)


def Testpicker():
    b = entry.get()
    result = []
    for key, value in a.items():
       if b in value:
          result.append(key)
    if result:
       lab3.config(text=result)

def update(data):
   myList.delete(0, tk.END)

   for item in data:
      myList.insert(tk.END,item)

def fillout(event):
   entry.delete(0,tk.END)

   entry.insert(0, myList.get(tk.ACTIVE))

def check(event):
   typed = entry.get()

   if typed == '':
      data = posSympt
   else:
      data=[]
      for item in posSympt:
         if typed.lower() in item.lower():
            data.append(item)
   update(data)
      


lab = tk.Label(text="What symptom does the patient have? ", bg="black",fg="white")
lab.grid(row=0,column=0,sticky="nsew")

entry = tk.Entry(bg="white",fg="black")
entry.grid(row=1, column=0,sticky="nsew") 

#search tool
myList = tk.Listbox(width=30,height=10)
myList.grid(row=2, column=0,sticky="nsew")

update(posSympt)

#binding
myList.bind("<<ListboxSelect>>", fillout)
entry.bind("<KeyRelease>", check)


but = tk.Button(master=window, text = "Search for tests",command=Testpicker)
but.grid(row=0,column=2,sticky="nsew")

lab3 = tk.Label(text=" ", bg="black",fg="white",font=("Arial", 25)  )
lab3.grid(row=2, column=2,sticky="nsew")

window.mainloop()