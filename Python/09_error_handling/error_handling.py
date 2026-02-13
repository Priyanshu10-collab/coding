file  = open('youtube.txt','w')

#Approach 1
try:
    file.write('chai aur code')
finally:
    file.close()

#Approach 2
with open('youtube.txt','w') as file:
    file.write('chai aur code')