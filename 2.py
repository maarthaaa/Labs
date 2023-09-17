litForm ={
  "Literature form":"drama",  
  "Genre":"tragedy",
  "Author":"William Shakespeare"
}

othello = {
    "Characterictics":litForm,
    "Year": 1603,
   "Main chacters":"Othello, Iago" 
}
r_and_j = {
    "Characterictics":litForm,
    "Year": 1597,
   "Main chacters":"Romeo, Juliet" 
}

print("1 OPRTION")
for x,y in othello.items():
    print(x,y)
print("----")
for x,y in r_and_j.items():
    print(x,y)






