# this is question no 204 from srm elab

pr = float(input())
rate = float(input())
time= float(input())
rate = rate/(12*100)
time = time *12
print(f"{  (pr * rate* (1+rate)**time)   /  ( (1+rate)**time -1):.2f}"    )

#url-
