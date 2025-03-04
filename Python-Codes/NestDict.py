student = {
    "Name" : "Udit",
    "Subject" : {
        "Hindi" : 59,
        "English" : 89,
    }
}

print(student)
print(student["Subject"])
print(student["Subject"]["English"])
print(student.keys())
print(len(list(student.keys())))
print(student.items())
print(list(student.items()))
print(student["Name"])
student["Age"] = 45
print(student)
student.update({"Age2" : 10, "Age3" : 20})
student["Age4"] = 30
print(student)