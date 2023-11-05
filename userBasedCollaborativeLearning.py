import numpy as np

a = np.array([[5, 4, 1, 4]])
b = np.array([[3, 1, 2, 3]])
d = np.array([[4, 3, 4, 3]])
c = np.array([[3, 3, 1, 5]])

a1 = np.mean(a)
b1 = np.mean(b)
d1 = np.mean(d)
c1 = np.mean(c)

print("Average:")
print(a1)
print(b1)
print(d1)
print(c1)

user1 = np.corrcoef(a, b)
print("user1:")
print(user1)
user2 = np.corrcoef(a, d)
print("user2:")
print(user2)
user3 = np.corrcoef(a, c)
print("user3:")
print(user3)

Prediction = a1 + ((user1[0][1] * (3 - b1)) + (user2[0][1] * (5 - d1)) + (user3[0][1] * (4 - c1))) / (abs(user1[0][1]) + abs(user2[0][1]) + abs(user3[0][1]))
print("prediction:", Prediction)



 
 


predictt = a1+ ((user1[0][1] * (3 - b1)) + (user2[0][1] * (5 - d1)) + (user3[0][1] * (4 - c1)))/(abs(user1[0][1])+abs(user2[0][1])+abs(user3[0][1]))
print("prediction:", predictt)








# prediction: 3.8228434878793527