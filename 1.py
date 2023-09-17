othello = {
    "Year": 1603,
   "Main chacters":"Othello, Iago" 
}
r_and_j = {
    "Year": 1597,
   "Main chacters":"Romeo, Juliet" 
}

a=dict(litForm = "Drama",dramGenre ="Tragedy",Author ="William Shakespeare" )

othello.update(a)
r_and_j.update(a)

for a,b in othello.items():
    print(a,b)
print("----")
for a,b in r_and_j.items():
    print(a,b)