
# for loop in R

# simple for loop
for(i in 1:5)
{
  print(i)
}

# for loop in vector
vect <- c("St", "Pt", "At", "Bt", "Ct", "Gt")
for(i in vect)
{
  print(i)
}


# nested for loop
for(x in 1 : 5)
{
  print(x)
  for(y in 6 : 10)
  {
    print(y)
  }
}
