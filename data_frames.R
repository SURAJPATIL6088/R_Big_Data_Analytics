
emp_data <- data.frame(
  Subject = c(1:6),
  Class = c(1, 2, 1, 2, 1, 2),
  Marks = c(56, 75, 48, 69, 84, 53),
  
  stringsAsFactors = FALSE
)

print(emp_data)

# Access the rows
row_s <- subset(emp_data, Subject==2)
print(row_s)

# Add row
ad_row <- data.frame(Subject =7, Class =1, Marks =87)
emp_data <- rbind(emp_data, ad_row)

# Add col
ad_col <- data.frame(Gender=c("M", "F", "M", "F","M", "F","M"))
emp_data <- cbind(emp_data, ad_col)
print(emp_data)

# remove the data 
emp_data$Subject  <-NULL
emp_data$Marks <-NULL
emp_data$Marks <-NULL
emp_data$Gender <-NULL
emp_data$Class <-NULL

# access the data with condition
eee <- emp_data[emp_data$Gender == "M", ]
print(eee)

# Q.1 create the subset of subject less than 4 by using subset function 
#subsett<-function()
#{
#  emp_subset <- emp_data[emp_data$Subject < 4, ]
#  print(emp_subset)
#}
#subsett()

print(emp_data)

# Q.2 
# emp_subset <- emp_data[emp_data$Subject < 4 & emp_data$Class == 1, ]
# print(emp_subset)
