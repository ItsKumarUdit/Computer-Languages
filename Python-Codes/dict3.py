marks1 = int(input("Enter Marks 1: "))
marks2 = int(input("Enter Marks 2: "))
marks3 = int(input("Enter Marks 3: "))

Marks = {}
Marks.update({"Hindi" : marks1})
Marks.update({"English" : marks2})
Marks.update({"Science" : marks3})

print(Marks)