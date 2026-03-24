Frequency distribution and data presentation
AIM: To implement relative and cumulative
frequency using R programming and Plot the
histogram for same
Function and used
CODE:
x<-c(1,2,3,4,5,6,7,8,9)
Freq<- data.frame(table(x))
print(Freq)
relFreq<-data.frame(prop.table(table(x)))
print(relFreq)
relFreq$Relative_Freq<-relFreq$Freq
print(relFreq)
relFreq$Freq<-NULL
print(relFreq)
Cumulative_Freq<-cumsum(table(x))
print(Cumulative_Freq)
z<-cbind(merge(Freq,relFreq),Cumulative_Freq)
print(z)
z$Cumuative_Relative_Freq<-z$Cumulative_Freq/
sum(z$Freq)
print(z)
head(z)
abc=z$Relative_Freq
hist(abc)
colors=c("red","yellow","green","violet","orange","blue","pink","cyan")
hist(abc,right=FALSE,col=colors,main="frequency")
OUTPUT:
Employee Training Satisfaction
A Human Resources department collected satisfaction scores from 20 employees after they completed a mandatory professional development training session. The scores were recorded on a scale of 1 to 10, where 1 is Highly Dissatisfied and 10 is HighlySatisfied.
The raw scores collected are as follows:
scores = (9, 7, 8, 5, 9, 7, 7, 8, 10, 6, 9, 7, 8, 9, 6, 8, 9, 7, 9, 8)
Case Study Questions
Using the raw data provided above, write and
execute R code to:
1. Calculate the Frequency Distribution: Create a
data frame showing the absolute frequency (count)
for each unique satisfaction score.
CODE:
x<-c(9, 7, 8, 5, 9, 7, 7, 8, 10, 6, 9, 7, 8, 9, 6, 8, 9, 7, 9, 8)
Freq<-data.frame(table(x))
print(Freq)
OUTPUT:
2. Calculate the Relative Frequency Distribution: 
Calculate the relative frequency (proportion) for each unique satisfaction score.
CODE:
relFreq<-data.frame(prop.table(table(x)))
print(relFreq)
relFreq$Relative_Freq<-relFreq$Freq
print(relFreq)
OUTPUT:
3. Calculate the Cumulative Frequency and Cumulative Relative Frequency: Add columns to your distribution table showing the cumulative frequency and the cumulative relative frequency.
CODE:
relFreq$Freq<-NULL
print(relFreq)
Cumulative_Freq<-cumsum(table(x))
print(Cumulative_Freq)
z<-cbind(merge(Freq,relFreq),Cumulative_Freq)
print(z)
z$Cumulative_Relative_Freq<-z$Cumulative_Freq
/sum(z$Freq)
print(z)
OUTPUT:
4. Visualize the Relative Frequencies: 
Create a histogram of the frequencies, relative frequencies,cumulative frequency to visualize the distribution of satisfaction scores. Choose an appropriate title and color scheme for the chart.
CODE:
head(z)
abc<-z$Relative_Freq
hist(abc)
colors=c('red','yellow','green','violet','orange','blue','pink','cyan')
hist(abc,right=FALSE,col=colors,main="Frequency")
OUTPUT:
CODE:
x<-c(9, 7, 8, 5, 9, 7, 7, 8, 10, 6, 9, 7, 8, 9, 6, 8, 9, 7, 9, 8)
Freq<-data.frame(table(x))
print(Freq)
relFreq<-data.frame(prop.table(table(x)))
print(relFreq)
relFreq$Relative_Freq<-relFreq$Freq
print(relFreq)
relFreq$Freq<-NULL
print(relFreq)
Cumulative_Freq<-cumsum(table(x))
print(Cumulative_Freq)
z<-cbind(merge(Freq,relFreq),Cumulative_Freq)
print(z)
z$Cumulative_Relative_Freq<-z$Cumulative_Freq
/sum(z$Freq)
print(z)
head(z)
abc<-z$Relative_Freq
hist(abc)
colors=c('red','yellow','green','violet','orange','blue','pink','cyan')
hist(abc,right=FALSE,col=colors,main="Frequency")
abc<-z$Cumulative_Freq
hist(abc)
colors=c('red','yellow','green','violet','orange','blue','pink','cyan')
hist(abc,right=FALSE,col=colors,main="Cumulative Frequency")
OUTPUT:
Practical No.01
AIM: R Programming
a)Vectors
When you want to create vector with more than one element, you should use c() function which means to combine the elements into a vector.
CODE:
# Create a vector.
apple <- c('red','green',"yellow")
print(apple)
# Get the class of the vector.
print(class(apple))
OUTPUT:
b) Lists
A list is an R-object which can contain many different types of elements inside it like vectors, functions and even another list inside it.
CODE:
# Create a list.
list1 <- list(c(2,5,3),21.3)
# Print the list.
print(list1)
OUTPUT:
c) Matrices
A matrix is a two-dimensional rectangular data set. It can be created using a vector input to the matrix function.
CODE:
# Create a matrix.
M = matrix( c('a','a','b','c','b','a'), nrow = 2, ncol = 3, byrow =
TRUE)
print(M)
OUTPUT:
d) Data Frames
Data frames are tabular data objects. Unlike a matrix in data frame each column can contain different modes of data. The first column can be numeric while the second column can be character and third column can be logical. It is a list of vectors of equal length.
Data Frames are created using the data.frame() function.
CODE:
BMI <- data.frame(
gender = c("Male", "Male","Female"),
height = c(152, 171.5, 165),
weight = c(81,93, 78),
Age = c(42,38,26)
)
print(BMI)
OUTPUT:
e)R Decision Making
CODE:
x <- 30L
if(is.integer(x)) {
print("X is an Integer")
}
OUTPUT:
CODE:
x <- c("what","is","truth")
if("Truth" %in% x) {
print("Truth is found the first time")
} else if ("truth" %in% x) {
print("truth is found the second time")
} else {
print("No truth found")
}
OUTPUT:
CODE:
x <- switch(
3,
"first",
"second",
"third",
"fourth"
)
print(x)
OUTPUT:
f) R Loops
The Repeat loop executes the same code again and again until a stop condition is met.
CODE:
v <- c("Hello","loop")
cnt <- 2
repeat {
print(v)
cnt <- cnt+1
if(cnt > 5) {
break
}
}
OUTPUT:
The While loop executes the same code again and again until a stop condition is met.
CODE:
v <- c("Hello","while loop")
cnt <- 2
while (cnt < 7) {
print(v)
cnt = cnt + 1
}
OUTPUT:
A For loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.
CODE:
v <- LETTERS[1:4]
for ( i in v) {
print(i)
}
OUTPUT:
The break statement in R programming language has the following two usages −
•When the break statement is encountered inside a loop, the loop is immediately terminated and program control resumes at the next statement following the loop.
•It can be used to terminate a case in the switch statement
CODE:
v <- c("Hello","loop")
cnt <- 2
repeat {
print(v)
cnt <- cnt + 1
if(cnt > 5) {
break
}
}
OUTPUT:
The next statement in R programming language is useful when we want to skip the current iteration of a loop without terminating it. On encountering next, the R parser skips further evaluation and starts next iteration of the loop.
CODE:
v <- LETTERS[1:6]
for ( i in v) {
if (i == "D") {
next
}
print(i)
}
OUTPUT:
g)R Functions
Built-in Function
Simple examples of in-built functions are seq(), mean(), max(), sum(x) and paste(...) etc. They are directly called by user written programs.
CODE:
#Create a sequence of numbers from 32 to 44
print(seq(32,44))
#Find sequence of numbers from 25 to 82.
print(mean(25:82))
#Find sum of numbers frm 41 to 68.
print(sum(41:68))
OUTPUT:
User-defined Function
CODE:
#create a function to print squares of numbers in sequence
new.function <- function(a) {
for(i in 1:a) {
b <- i^2
print(b)
}
}
OUTPUT:
Calling a Function
CODE:
#call the function new.function supplying 6 as an argument
new.function(6)
OUTPUT:
Calling a function with argument values
CODE:
# create a function with arguments
new.function <- function(a, b, c) {
result <- a * b + c
print(result)
}
# call the function by position of arguments
new.function(5, 3, 11)
# Expected output: 5 * 3 + 11 = 26
# call the function by names of the arguments
new.function(a = 11, b = 5, c = 3)
OUTPUT:
Calling a function with default argument
CODE:
#create a function with arguments
new.function <- function(a=3,b=6) {
result <- a*b
print(result)
}
#call the function without giving any argument
new.function()
#call the function with giving argument value
new.function(9,5)
OUTPUT:
h)R Vectors
Vector Creation
Single Element
Vector Creation
# Atomic vector of type character.
print("abc");
# Atomic vector of type double.
print(12.5)
Multiple Element Vector Creation
Using colon operator with numeric data
# Creating a sequence from 5 to 13.
v <- 5:13
print(v)
Using sequence (Seq.) operator
# Create vector with elements from 5 to
9 incrementing by 0.4. print(seq(5, 9,by = 0.4))
Using the c() function
# The logical and numeric values are
converted to characters. s <-c('apple','red',5,TRUE)
print(s)
CODE:
# Atomic vector of type character.
print("abc");
# Atomic vector of type double.
print(12.5);
#Using colon operator with numeric data
# Creating a sequence from 5 to 13.
v <- 5:13
print(v)
#Using sequence (Seq.) operator
# Create vector with elements from 5 to 9 incrementing by 0.4.
print(seq(5, 9, by = 0.4))
#Using the c() function
# The logical and numeric values are converted to characters.
s <- c('apple','red',5,TRUE)
print(s)
OUTPUT:
Accessing Vector Elements
CODE:
#Accessing vector elements using position
t <- c("Sun","Mon","Tue","Wed","Thurs","Fri","Sat")
u <- t[c(2,3,6)]
print(u)
OUTPUT:
CODE:
#Accessing vector elements using logical indexing
v <- t[c(TRUE,FALSE,FALSE,FALSE,FALSE<TRUE,FALSE)]
print(v)
OUTPUT:
CODE:
#Accessing vector elements using negative indexing
x <- t[c(-2,-5)]
print(x)
OUTPUT:
CODE:
#Accessing vector elements using 0/1 indexing
y <- t[c(0,0,0,0,0,0,1)]
print(y)
OUTPUT:
Vector Manipulation
CODE:
#create two vectors
v1 <- c(3,8,4,5,0,11)
v2 <- c(4,11,0,8,1,2)
#vector addition
add.result <- v1+v2
print(add.result)
#vector subtraction
sub.result <- v1-v2
print(sub.result)
v1 <- c(3,8,4,5,0,11)
v2 <- c(4,11)
add.result <- v1+v2
print(add.result)
sub.result <- v1-v2
print(sub.result)
v <- c(3,8,4,5,0,11,-9,304)
#sort the element of the vector
sort.result <- sort(v)
print(sort.result)
#sort the elements in the reverse order
resort.result <- sort(v, decreasing = TRUE)
print(resort.result)
OUTPUT:
i)R Lists
List Creation
CODE:
#create a list contaning strings, numbers,vectors and a logical
values
list_data <- list("Red", "Green", c(21,32,11), TRUE,51.23,119.1)
print(list_data)
OUTPUT:
Naming list elements
CODE:
# Create a list containing a vector, a matrix and a list
list_data <- list(
c("Jan", "Feb", "Mar"),
matrix(c(3, 9, 5, 3, -2, 8), nrow = 2),
list("green", 12.3)
)
# Give names to the elements in the list
names(list_data) <- c("1st_Quarter", "A_Matrix", "A_Inner_List")
# Show the list
print(list_data)
OUTPUT:
Accessing List Elements
CODE:
# Create a list containing a vector, a matrix and a list.
list_data <- list(c("Jan", "Feb", "Mar"), matrix (c(3,9,5,1,-2,8),
nrow = 2),
list("green", 12.3))
#Give names to the elements in the list.
names (list_data) <- c("1st Quarter", "A_Matrix", "A_Inner_list")
# Show the list.
print(list_data)
#Access the first element of the list.
print(list_data[1])
# Access the thrid element. As it is also a list, all its elements
will be printed.
print(list_data[3])
# Access the list element using the name of the element.
print(list_data$A_Matrix)
OUTPUT:
j)R Data frames
A data frame is a table or a two-dimensional array-like structure in which each column contains values of one variable and each row contains one set of values from each column.
Following are the characteristics of a data frame.
•The column names should be non-empty.
•The row names should be unique.
•The data stored in a data frame can be of numeric, factor or character type.
•Each column should contain same number of data items.
Create data frame
CODE:
# Create the data frame
emp.data <- data.frame(
emp_id = c(1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3, 515.2, 611.0, 729.0, 843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Print the data frame
print(emp.data)
OUTPUT:
Get the structure of the data frame
CODE:
# Create the data frame
emp.data <- data.frame(
emp_id = c(1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3, 515.2, 611.0, 729.0, 843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Get the structure of the data frame
str(emp.data)
OUTPUT:
Summary of data in data frame
CODE:
# Create the data frame
emp.data <- data.frame(
emp_id = c(1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3, 515.2, 611.0, 729.0, 843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Print the summary
print(summary(emp.data))
OUTPUT:
Extract data from the data frame
CODE:
# Create the data frame
emp.data <- data.frame(
emp_id = c(1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3, 515.2, 611.0, 729.0, 843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Extract specific columns (employee name and salary)
result <- data.frame(emp.data$emp_name, emp.data$salary)
print(result)
OUTPUT:
Extract first two rows and then all columns
CODE:
# Create the data frame.
emp.data <- data.frame(
emp_id = c (1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3,515.2,611.0,729.0,843.25),
start_date = as.Date (c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Extract first two rows.
result <- emp.data[1:2,]
print(result)
OUTPUT:
Extract 3rd and 5th row with 2nd and 4th column
CODE:
# Create the data frame.
emp.data <- data.frame(
emp_id = c (1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3,515.2,611.0,729.0,843.25),
start_date = as.Date (c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Extract 3rd and 5th row with 2nd and 4th column.
result <- emp.data[c(3,5),c(2,4)]
print(result)
OUTPUT:
CODE:
# Create the data frame.
emp.data <- data.frame(
emp_id = c (1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3,515.2,611.0,729.0,843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
stringsAsFactors = FALSE
)
# Add the "dept" coulmn.
emp.data$dept <- c("IT", "Operations", "IT", "HR", "Finance")
v <- emp.data
print(v)
OUTPUT:
Adding Rows
To add more rows permanently to an existing data frame, we need to bring in the new rows in the same structure as the existing data frame and use the rbind() function.
CODE:
# Create the first data frame
emp.data <- data.frame(
emp_id = c(1:5),
emp_name = c("Rick", "Dan", "Michelle", "Ryan", "Gary"),
salary = c(623.3, 515.2, 611.0, 729.0, 843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-11", "2015-03-27")),
dept = c("IT", "Operations", "IT", "HR", "Finance"),
stringsAsFactors = FALSE
)
# Create the second data frame
emp.newdata <- data.frame(
emp_id = c(6:8),
emp_name = c("Rasmi", "Pranab", "Tusar"),
salary = c(578.0, 722.5, 632.8),
start_date = as.Date(c("2013-05-21", "2013-07-30", "2014-06-17")),
dept = c("IT", "Operations", "Finance"),
stringsAsFactors = FALSE
)
# Bind the two data frames
emp.finaldata <- rbind(emp.data, emp.newdata)
# Print the final data frame
print(emp.finaldata)
OUTPUT:
k)R CSV Files
In R, we can read data from files stored outside the R environment. We can also write data into files which will be stored and accessed by the operating system. R can read and write into various file formats like csv, excel, xml etc.
CODE:
#get and print current working directory
print(getwd())
#set current working directory
setwd("C:/Users/Sanskruti")
#get and print current working directory
print(getwd())
OUTPUT:
Input.csv file
Write this on notepad and save it as .csv file in the current working directory
CODE:
data <- read.csv("input.csv")
print(is.data.frame(data))
print(ncol(data))
print(nrow(data))
OUTPUT:
Get the maximum salary
Code
#create a data frame
data<-read.csv("input.csv")
#get the max salary from data frame
sal<-max(data$salary)
print(sal)
Output
Get the details of the person with max salary
Code
#create a data frame
data<-read.csv("input.csv")
#get the max salary from data frame
sal<-max(data$salary)
#get the person detail having max salary
retval<-subset(data,salary==max(salary))
print(retval)
Output
Get all the people working in IT department
Code
#create a data frame
data<-read.csv("input.csv")
retval<-subset(data,dept=="IT")
print(retval)
Output
Writing into a CSV file
Code
#create a data frame
data<-read.csv("input.csv")
retval<-subset(data,as.Date(start_date)>as.Date("2014-01-01")
)
#write filtered data into a new file
write.csv(retval,"output.csv")
newdata<-read.csv("output.csv")
print(newdata)
Output
Code
#create a data frame
data<-read.csv("input.csv")
retval<-subset(data,as.Date(start_date)>as.Date("2014-01-01")
)
#write filtered data into anew file
write.csv(retval,"output.csv",row.names = FALSE)
newdata<-read.csv("output.csv")
print(newdata)
Output
Practical No.03
AIM: measure of central tendency and mean, median, mode, dispersion, range, C.D, variance, /QR do group and ungroup
Ungrouped CODE:
data <- c(12, 15, 14, 10, 18, 20, 15, 17, 16, 19)
mean_value <- mean(data)
median_value <- median(data)
mode_function <- function(x) {
ux <- unique(x)
ux[which.max(tabulate(match(x, ux)))]
}
mode_value <- mode_function(data)
range_value <- range(data)
variance_value <- var(data)
sd_value <- sd(data)
iqr_value <- IQR(data)
print(range_value)
print(mode_value)
print(variance_value)
print(sd_value)
print(iqr_value)
OUTPUT:
Grouped CODE:
lower_limits <- c(10, 20, 30, 40)
upper_limits <- c(20, 30, 40, 50)
frequencies <- c(5, 8, 12, 7)
midpoints <- (lower_limits + upper_limits)
total_frequency <- sum(frequencies)
cumulative_frequency <- cumsum(frequencies)
sum_fx <- sum(midpoints * frequencies)
grouped_mean <- sum_fx/total_frequency
N_half <- total_frequency/2
median_class_index <- which(cumulative_frequency
>=N_half)[1]
L <- lower_limits[median_class_index]
h <- upper_limits[median_class_index] - lower_limits[median_class_index]
f <- frequencies[median_class_index]
c <- if(median_class_index > 1)
cumulative_frequency[median_class_index - 1] else 0
grouped_median <- L + ((N_half - c)/f) * h
modal_class_index <- which.max(frequencies)
modal_class <- paste0(lower_limits[modal_class_index], "-", upper_limits[modal_class_index])
# sum(f_i * (x_i - mean)^2)
sum_weighted_sq_dev <- sum(frequencies * (midpoints - grouped_mean)^2)
grouped_variance <- (sum_weighted_sq_dev/ total_frequency - 1)
grouped_sd <- sqrt(grouped_variance)
cat("\n--- Central Tendency ---\n")
cat(paste(" Estimated Mean (x-bar): ", round(grouped_mean,2), "\n"))
cat(paste(" Estimated Meadian (Me): ", round(grouped_median,2), "\n"))
cat(paste(" Modal Class: ", modal_class, " (HIghest Freq: ", max(frequencies), ")\n"))
cat("\n--- Dispersion ---\n")
cat(paste(" Estimated Sample Varianc(s^2):", round(grouped_variance,2), "\n"))
cat(paste(" Estimated Sample SD (s): ", round(grouped_sd,2), "\n"))
print(midpoints)
print(total_frequency)
print(cumulative_frequency)
print(sum_fx)
print(grouped_mean)
print(grouped_median)
print(grouped_sd)
print(grouped_variance)
print(N_half)
print(median_class_index)
print(modal_class_index)
print(modal_class)
print(sum_weighted_sq_dev)
OUTPUT:
Practical No.04
AIM: Correlations
Case Study Question: Correlation Analysis on Student Performance Scenario:
A school wants to analyze how study hours and student attendance affect their final exam marks. The school has collected data from a group of 10 students and wants to find out if there is any correlation between:
• Study Hours per week (X)
• Attendance percentage (Y)
• Final Exam Marks (Z)
The school wants to use this analysis to improve the performance of future students by identifying key factors that have a significant impact on exam results.
Task for Students:
1. Objective: Calculate the correlation between the following pairs of variables:
o Study Hours (X) and Final Exam Marks (Z)
o Attendance (Y) and Final Exam Marks (Z)
o Study Hours (X) and Attendance (Y)
2. Steps:
o Use Pearson's correlation coefficient for analyzing the relationships between the variables.
o For each pair, calculate the correlation coefficient and interpret the result.
o Write the R code to calculate the correlation for each pair and analyze the relationships.
3. Interpretation:
o Based on the calculated correlation values, determine the strength and direction of the relationship.
o Discuss what the results mean in the context of the student performance.
4. Programming: Write R code to compute the Pearson correlation coefficients and interpret the results for each pair.
Step 1: Input the data
# Data: Study Hours (X), Attendance (%) (Y), and Final Exam
Marks (Z)
study_hours <- c(5, 10, 15, 12, 8, 20, 25, 30, 18, 22)
attendance <- c(80, 85, 90, 95, 88, 75, 90, 92, 80, 82)
final_marks <- c(70, 75, 85, 80, 78, 92, 95, 98, 88, 90)
Step 2: Calculate the Pearson Correlation Coefficients
1. Study Hours and Final Exam Marks:
# Pearson correlation between Study Hours (X) and Final Exam Marks (Z)
corr_study_marks <- cor(study_hours, final_marks, method = "pearson")
cat("Pearson Correlation between Study Hours and Final Marks:", corr_study_marks, "\n")
2. Attendance and Final Exam Marks:
# Pearson correlation between Attendance (Y) and Final Exam Marks (Z)
corr_attendance_marks <- cor(attendance, final_marks, method = "pearson")
cat("Pearson Correlation between Attendance and Final Marks:", corr_attendance_marks, "\n")
3. Study Hours and Attendance:
# Pearson correlation between Study Hours (X) and Attendance (Y)
corr_study_attendance <- cor(study_hours, attendance, method = "pearson")
cat("Pearson Correlation between Study Hours and
Attendance:", corr_study_attendance, "\n")
CODE:
# Data: Study Hours (X), Attendance (%) (Y), and Final Exam Marks (Z)
study_hours <- c(5, 10, 15, 12, 8, 20, 25, 30, 18, 22)
attendance <- c(80, 85, 90, 95, 88, 75, 90, 92, 80, 82)
final_marks <- c(70, 75, 85, 80, 78, 92, 95, 98, 88, 90)
# Pearson correlation between Study Hours (X) and Final Exam Marks (Z)
corr_study_marks <- cor(study_hours, final_marks, method = "pearson")
cat("Pearson Correlation between Study Hours and Final Marks:", corr_study_marks, "\n")
# Pearson correlation between Attendance (Y) and Final Exam Marks (Z)
corr_attendance_marks <- cor(attendance, final_marks, method = "pearson")
cat("Pearson Correlation between Attendance and Final Marks:", corr_attendance_marks, "\n")
# Pearson correlation between Study Hours (X) and
Attendance (Y)
corr_study_attendance <- cor(study_hours, attendance, method = "pearson")
cat("Pearson Correlation between Study Hours and Attendance:", corr_study_attendance, "\n")
OUTPUT:
Case Study: Spearman's Rank Correlation on Student Performance
Scenario:
The school now wants to analyze the relationship between study hours, attendance, and final exam marks using Spearman's Rank Correlation. Unlike Pearson's correlation, which measures the linear relationship between continuous variables, Spearman's Rank Correlation is a non-parametric measure that assesses how well the relationship between two variables can be described using a monotonic function (whether increasing or decreasing). This makes it suitable for ordinal data or data that is not normally distributed.
The school will apply Spearman's rank correlation to:
• Study Hours (X) and Final Exam Marks (Z)
• Attendance (Y) and Final Exam Marks (Z)
• Study Hours (X) and Attendance (Y)
Task for Students:
1. Objective: Calculate Spearman’s Rank Correlation for the
following pairs:
o Study Hours (X) and Final Exam Marks (Z)
o Attendance (Y) and Final Exam Marks (Z)
o Study Hours (X) and Attendance (Y)
2. Steps:
o Use Spearman’s Rank Correlation to analyze the
relationships.
o Calculate the Spearman's rank correlation coefficient for each
pair.
o Write the R code to calculate Spearman’s correlation and
interpret the results.
3. Programming: Implement the Spearman's Rank Correlation analysis using R.
Solution:
Step 1: Input the Data
# Data: Study Hours (X), Attendance (%) (Y), and Final Exam
Marks (Z)
study_hours <- c(5, 10, 15, 12, 8, 20, 25, 30, 18, 22)
attendance <- c(80, 85, 90, 95, 88, 75, 90, 92, 80, 82)
final_marks <- c(70, 75, 85, 80, 78, 92, 95, 98, 88, 90)
Step 2: Calculate Spearman’s Rank Correlation Coefficient
Spearman’s rank correlation coefficient is calculated using the cor() function with the argument method = "spearman" in R.
1. Spearman’s Rank Correlation: Study Hours and Final Exam
Marks:
# Spearman correlation between Study Hours (X) and Final
Exam Marks (Z)
corr_study_marks_spearman <- cor(study_hours, final_marks, method = "spearman")
cat("Spearman's Rank Correlation between Study Hours and Final Marks:", corr_study_marks_spearman, "\n")
2. Spearman’s Rank Correlation: Attendance and Final Exam Marks:
# Spearman correlation between Attendance (Y) and Final Exam Marks (Z)
corr_attendance_marks_spearman <- cor(attendance, final_marks, method = "spearman")
cat("Spearman's Rank Correlation between Attendance and Final Marks:", corr_attendance_marks_spearman, "\n")
3. Spearman’s Rank Correlation: Study Hours and Attendance:
# Spearman correlation between Study Hours (X) and Attendance (Y)
corr_study_attendance_spearman <- cor(study_hours, attendance, method = "spearman")
cat("Spearman's Rank Correlation between Study Hours and Attendance:", corr_study_attendance_spearman, "\n")
CODE:
# Data: Study Hours (X), Attendance (%) (Y), and Final Exam Marks (Z)
study_hours <- c(5, 10, 15, 12, 8, 20, 25, 30, 18, 22)
attendance <- c(80, 85, 90, 95, 88, 75, 90, 92, 80, 82)
final_marks <- c(70, 75, 85, 80, 78, 92, 95, 98, 88, 90)
# Spearman correlation between Study Hours (X) and Final
Exam Marks (Z)
corr_study_marks_spearman <- cor(study_hours, final_marks, method = "spearman")
cat("Spearman's Rank Correlation between Study Hours and Final Marks:", corr_study_marks_spearman, "\n")
# Spearman correlation between Attendance (Y) and Final
Exam Marks (Z)
corr_attendance_marks_spearman <- cor(attendance, final_marks, method = "spearman")
cat("Spearman's Rank Correlation between Attendance and Final Marks:", corr_attendance_marks_spearman, "\n")
# Spearman correlation between Study Hours (X) and Attendance (Y)
corr_study_attendance_spearman <- cor(study_hours, attendance, method = "spearman")
cat("Spearman's Rank Correlation between Study Hours and Attendance:", corr_study_attendance_spearman, "\n")
OUTPUT:
Example:
CODE:
X<-c(1,2,3,4,5)
Y<-c(2,1,3,5,4)
spearman_corr<-cor(X,Y,method="spearman")
cat("The Spearman Rank Correlation Coefficient (r) is",spearman_corr)
if(spearman_corr>=0.7){
cat("There is strong positive relation between the variables\n")
}else if(spearman_corr>=0.5){
cat("There is moderate positive correlation between the
variables\n")
}else if(spearman_corr<-0.5){
cat("There is moderate negative correlation between the
variables\n")
}else{
cat("There is a weak or no correlation between the
variables\n")
}
plot(study_hours,final_marks,
main="ScatterPlot of X vs Y",
xlab="X values",
ylab="Y values",
pch=19,
col="red",
cex=1.5)
plot(attendance,final_marks,
main="ScatterPlot of X vs Y",
xlab="X values",
ylab="Y values",
pch=19,
col="green",
cex=1.5)
plot(study_hours,attendance,
main="ScatterPlot of X vs Y",
xlab="X values",
ylab="Y values",
pch=19,
col="blue",
cex=1.5)
OUTPUT:
Example with CSV:
CODE:
# Load CSV file
data <- read.csv("C:/Users/Admin/Downloads/htwt - htwt.csv")
# Spearman Correlation between Height and Weight
spearman_corr <- cor(data$Height, data$Weight, method =
"spearman")
cat("Spearman Correlation (Height vs Weight):",
spearman_corr, "\n")
if (spearman_corr >= 0.7) {
cat("There is a strong positive correlation between the
variables\n")
} else if (spearman_corr >= 0.5) {
cat("There is a moderate positive correlation between the
variables\n")
} else if (spearman_corr >= 0.3) {
cat("There is a weak positive correlation between the
variables\n")
} else if (spearman_corr <= -0.7) {
cat("There is a strong negative correlation between the
variables\n")
} else if (spearman_corr <= -0.5) {
cat("There is a moderate negative correlation between the
variables\n")
} else if (spearman_corr <= -0.3) {
cat("There is a weak negative correlation between the
variables\n")
} else {
cat("There is little to no correlation between the variables\n")
}
# Pearson Correlation between Height and Weight pearson_corr <- cor(data$Height, data$Weight, method = "pearson")
cat("Pearson Correlation (Height vs Weight):", pearson_corr, "\n")
if (pearson_corr >= 0.7) {
cat("Conclusion: There is a strong positive linear relationship
between the variables.\n")
} else if (pearson_corr >= 0.5) {
cat("Conclusion: There is a moderate positive linear
relationship between the variables.\n")
} else if (pearson_corr >= 0.3) {
cat("Conclusion: There is a weak positive linear relationship
between the variables.\n")
} else if (pearson_corr <= -0.7) {
cat("Conclusion: There is a strong negative linear relationship
between the variables.\n")
} else if (pearson_corr <= -0.5) {
cat("Conclusion: There is a moderate negative linear
relationship between the variables.\n")
} else if (pearson_corr <= -0.3) {
cat("Conclusion: There is a weak negative linear relationship
between the variables.\n")
} else {
cat("Conclusion: There is little to no linear relationship
between the variables.\n")
}
plot(data$Height, data$Weight,
main="Height vs Weight",
xlab="Height", ylab="Weight",
pch=19, col="blue")
OUTPUT:
Practical No.05
AIM: Regression
CODE:
x<-c(2,4,6,8)
y<-c(3,5,7,10)
model<-lm(y~x)
summary(model)
plot(x,y,main="Simple linear regression", xlab='x', ylab='y', pch=19,col='blue', lwd=2)
abline(model,col="red", lwd=2)
OUTPUT:
Prediction using htwt.csv File:
CODE:
mydata<-read.csv("C:/Users/student/Documents/4536_SY_Bsc/4536_SF/prac5/htwt.csv")
x<-mydata$Height
y<-mydata$Weight
head(mydata)
model<-lm(y~x,data=mydata)
#lm(formula,data,subset,weights,na.action,...)
summary(model)
plot(x,y,main="Simple linear regression", xlab='Height',
ylab='Weight', pch=20,col='blue')
abline(model,col="red",lwd=2)
new_data<-data.frame(x=c(150,160,170))
prediction<-predict(model,newdata=new_data)
print(prediction)
points(new_data$x,prediction ,col="green", pch=19)
OUTPUT:
Prediction using gpa_iq.csv File:
CODE:
data<-read.csv("C:/Users/student/Documents/4536_SY_Bsc/4536_SF/prac5/gpa_iq.csv")
data$gender <-as.factor(data$gender)
model<-lm(gpa~iq+gender+concept,data=data)
summary(model)
plot(data$iq,data$gpa,main="Scatter Plot with Linear Regression Line",
xlab="IQ",ylab="GPA",pch=19)
abline(lm(gpa~iq,data = data),col="blue",lwd=2)
new_data <- data.frame(iq = c(110,120,130),
gender=factor(c("male", "female" , "male"),
levels=levels(data$gender)),
concept = c(5,7,8)
)
predictions<-predict(model,newdata=new_data)
print(predictions)
points(new_data$iq,predictions ,col="green", pch=19)
OUTPUT:
Practical No.06
AIM: Statistical Exploration and probability
Summary Statistics
Code
marks<-c(2,3,4,8,9,6,5)
summary(marks)
Output
Student Marks
Code
#DATASET OF STUDENT MARKS
marks<-data.frame(Maths=c(85,90,64,53,89,50,70,93,90,75),
Science=c(83,67,80,56,72,85,91,53,66,85),
English=c(86,46,90,67,99,54,86,81,93,47)
)
#1.Mean,median and range of marks for each subject summary_stats<-summary(marks)
print("summary statistics(Mean,Median,Range):")
print(summary_stats)
#2.Variance of marks for each subject 
variances<-apply(marks,2,var)
print("Variance of each subject:")
print(variances)
#3.Find subject with the highest variance subject_with_highest_variation<-names(which.max(variances))
print(paste("Subject with highest
variation:",subject_with_highest_variation))
#4.Visualize the distribution of marks using boxplots 
boxplot(marks,main="Boxplot of marks by subject",col=c("lightblue","lightgreen","lightpink"),names=c("Maths",'Science',"English"))
Output
Conditional Probability
with age group
Code
set.seed(100)
exercise<-sample(c(0,1),100,replace=TRUE,prob=c(0.4,0.6))
#0:No,1:Yes
healthy_diet<-sample(c(0,1),100,replace=TRUE,prob=c(0.5,0.5)) 
#0:No,1:Yes
age_group<-sample(c(1,2,3),100,replace=TRUE,prob=c(0.4,0.4,0.2)) #1:18-30,2:31-40,3:40+
data<-data.frame(exercise,healthy_diet,age_group)
write.csv(data,"exercise_healthy_diet_data.csv",row.names=FALSE)
head(data)
data<-read.csv("exercise_healthy_diet_data.csv")
table_data<-table(data$exercise,data$healthy_diet,data$age_group)
print(table_data)
#calculate conditional probability P(Healthy Diet | Exercise) for
each age group
P_diet_given_exercise_age<-prop.table(table_data,margin=1)
print(P_diet_given_exercise_age)
Output
without age group
Code
set.seed(100)
exercise<-sample(c(0,1),100,replace=TRUE,prob=c(0.4,0.6))
#0:No,1:Yes
healthy_diet<-sample(c(0,1),100,replace=TRUE,prob=c(0.5,0.5)) 
#0:No,1:Yes
data<-data.frame(exercise,healthy_diet)
write.csv(data,"exercise_healthy_diet_data.csv",row.names=FALSE)
head(data)
data<-read.csv("exercise_healthy_diet_data.csv")
table_data<-table(data$exercise,data$healthy_diet)
print(table_data)
#calculate conditional probability P(Healthy Diet | Exercise)
P_diet_given_exercise<-prop.table(table_data,margin=1)
print(P_diet_given_exercise)
Output
The "Rare Disease" Diagnostic Challenge
Background: A health clinic is screening a population for a specific condition called "L-Virus."
● The prevalence of the disease in the population is 1%.
● The diagnostic test is not perfect:
○ Sensitivity (True Positive Rate): If a person has the disease, the test will return a positive result 99% of the time.
○ Specificity (True Negative Rate): If a person does not have the disease, the test will return a negative result 95% of the time.
The Task:
A patient walks in, takes the test, and the result is Positive.
Calculate the probability that this patient actually has the disease.
Code
# 1. Variables
prevalence <- 0.01
sensitivity <- 0.99
specificity <- 0.95
# 2. Calculate P(Positive)
# P(Pos) = [P(Pos|Disease) * P(Disease)] + [P(Pos|No Disease) * P(No Disease)]
p_pos_given_disease <- sensitivity
p_pos_given_no_disease <- 1 - specificity
p_disease <- prevalence
p_no_disease <- 1 - prevalence
p_total_positive <- (p_pos_given_disease * p_disease) +
(p_pos_given_no_disease * p_no_disease)
# 3. Apply Bayes' Theorem
p_disease_given_positive <- (p_pos_given_disease * p_disease) / p_total_positive
# 4. Print Result
print(paste("Probability of having the disease given a positive test:", round(p_disease_given_positive, 4)))
Output
The "Campus Fitness" Survey
The Scenario: A university surveyed 500 students about their primary form of exercise (Yoga, Running, or Swimming) to see if there is a relationship between Academic Major and Exercise
Preference.
The Data: The survey results are stored in a data frame.
Students are asked to analyze the "STEM" major specifically.
Major Yoga Running Swimming
STEM 40 85 25
Arts 70 30 50
Humanities 50 60 90
The Task: Using R, calculate the following conditional
probabilities:
1. P(Running∣STEM): What is the probability that a student prefers Running, given they are a STEM major?
2. P(STEM∣Running): What is the probability that a student is a STEM major, given that their preferred exercise is Running?
Code
# 1. Create the contingency table
data_matrix <- matrix(c(40, 85, 25, 70, 30, 50, 50, 60, 90), nrow = 3, byrow = TRUE)
rownames(data_matrix) <- c("STEM", "Arts", "Humanities")
colnames(data_matrix) <- c("Yoga", "Running", "Swimming")
# Convert to a table object
exercise_table <- as.table(data_matrix)
# 2. Calculate Conditional Probabilities
# P(Exercise | Major) -> Proportions across rows (margin = 1)
prob_given_major <- prop.table(exercise_table, margin = 1)
# P(Major | Exercise) -> Proportions down columns (margin = 2)
prob_given_exercise <- prop.table(exercise_table, margin = 2)
# 3. Print Results
print("Probability of exercise preferences GIVEN the major
(P(A|B)):")
print(prob_given_major["STEM", "Running"])
print("Probability of major GIVEN Running as the exercise (P(B|A)):")
print(prob_given_exercise["STEM", "Running"])
Output
Practical No.07
Statistical Exploration Part2
Aim: Implement continuous and discrete random variables and plot them
1st: Dice roll discrete
stimulate 10000 rolls of a fair 6 sided dice it uses sample method to generate the data and bar plot function to show that each number 1 to 6 appears roughly 1/6 of the time
CODE:
#Simulate rolling the dice 10000 times dice <- 1:6 
#Possible dice values(1,2,3,4,5,6)
probabilities <- rep(1/6, 6) #Each outcome has a probability of 1/6
#Sample 10000 dice rolls
rolls <- sample(dice,10000,replace = TRUE)
#Visualize the results using a bar plot barplot(table(rolls) / 10000, 
main = "Simulated Dice Roll Probabilities",
xlab = "Dice Value",
col = "purple")
OUTPUT:
2nd: 
Students height (continuous) normal distribution use it calculates the mean and the variance and hist function is used for histogram showing the bell curve
CODE:
#Parameter for the normal distribution (height)
mean_height <- 160 # Mean height in cm
sd_height <- 8 # standard daviation in cm
#Simulate 1000 sudent heights based on the normal
distribution
heights <- rnorm(1000, mean = mean_height, sd = sd_height)
#Visualize the distribution of heights with a histogram
hist(heights,breaks = 30, col = "pink", main = "Distribution of heights of students",xlab = "Height (cm)", ylab="Frequency")
OUTPUT:
3rd: Face Cards (Discrete): Treats drawing a face card as a binary event (1 for face card, 0 for not). It calculates the mathematical probability (12/52) and uses a bar plot to show the simulated frequency
CODE:
# Probability of drawing a face card
p_face_card <- 12/52
p_non_face_card <- 40/52
# Simulate 10000 card draws (1 = face card, 0 = not face card)
cards <- sample(c(0,1), 10000, replace = TRUE, prob = c(p_non_face_card, p_face_card))
# Visualize the distribution using a bar plot
barplot(table(cards)/10000,
col = "lightblue",
main = "Simulated Card Draws: Face Cards",
xlab = "Face Card(1) or Non Face Card(0)",
ylab = "Frequency")
OUTPUT:
4th: Car Speeds (Continuous): Similar to the height example, this stimulates car speeds on highway using a Normal Distribution (Mean = 100, SD = 15)
CODE:
# Parameters for the normal distribution (car speeds)
mean_speed <- 100 # Mean speed in km/h
sd_speed <- 15 # Standard deviation in km/h
# Simulate 1000 car speeds using the normal distribution
speeds <- rnorm(1000, mean = mean_speed, sd = sd_speed)
# Visualize the distribution of car speeds with a histogram
hist(speeds,
breaks = 30,
col = "lightgreen",
main = "Distribution of Car Speeds on Highway",
xlab = "Speed (km/h)",
ylab = "Frequency")
OUTPUT:
Mathematical Expectation and Variance
5th: Calculate the expectation and variance for a fair die and aloaded die
CODE:
# Loaded die probabilities
values <- c(1,2,3,4,5,6)
probabilities <- c(0.1,0.2,0.3,0.2,0.1,0.1)
expectation <- sum(values * probabilities)
expectation_squared <- sum((values^2)* probabilities)
variance <- expectation_squared - (expectation^2)
cat("Expectation of Loaded Die (E(X)): ", expectation, "\n")
cat("Variance of Loaded Die (Var(X)): ", variance, "\n")
#FOr fair die comparision
fair_probabilities <- rep(1/6, 6)
fair_expectation <- sum(values * fair_probabilities)
fair_variance <- sum((values^2) * fair_probabilities) - (fair_expectation^2)
cat("Expectation of Fair Die (E(X)): ", fair_expectation, "\n")
cat("Variance of Faair Die (Var(X)): ", fair_variance, "\n")
#Simulate dice rolls (for the loaded die)
rolls_loaded <- sample(values, 10000, replace = TRUE, prob=probabilities)
barplot(table(rolls_loaded) / 10000,main = "Simulated Loaded Dice Roll Probabilities", xlab="Dice Value", col="turquoise")
OUTPUT:
Practical No.08
AIM: Standard Probability distribution
● DISCRETE PROBABILITY DISTRIBUTIONS
1.Binomial theorem
Problem 1
In a class of 10 students, each student has a 0.7 chance of
passing an exam. Find the probability that exactly 7 students
pass the exam.
• n = 10 (number of students)
• p = 0.7 (probability of passing)
• k = 7 (desired number of students passing)
Code
# Given parameters
n <- 10 # number of trials
p <- 0.7 # probability of success
k <- 7 # number of successes
# Calculate the probability using the dbinom function
probability <- dbinom(k, size = n, prob = p)
print(probability)
k_values <- 0:n
probabilities <- dbinom(k_values, size = n, prob = p)
# Plot
barplot(probabilities, names.arg = k_values, col = "blue",
xlab = "Number of Successes", ylab = "Probability",
main = "Binomial Distribution PMF", border = "white")
Output
Problem 2
A factory produces light bulbs, and 95% of them pass quality control tests. If 15 bulbs are tested,what is the probability that exactly 13 of them pass?
• n = 15
• p = 0.95
• k = 13
Code
# Given parameters
n <- 15 # number of trials
p <- 0.95 # probability of success
k <- 13 # number of successes
# Calculate the probability using the dbinom function
probability <- dbinom(k, size = n, prob = p)
print(probability)
# Values for plotting
k_values <- 0:n
probabilities <- dbinom(k_values, size = n, prob = p)
# Plot
barplot(probabilities, names.arg = k_values, col = "pink",
xlab = "Number of Bulbs Passing",
ylab = "Probability",
main = "Binomial Distribution PMF",
border = "black")
Output
2.Poisson Distribution:
Problem1
A call center receives an average of 5 calls per hour. What is the probability that exactly 3 calls will bereceived in the next hour?
• λ = 5 (average number of calls per hour)
• k = 3 (desired number of calls)
CODE:
# Given parameters
lambda <- 5 # average number of events
k <- 3 # number of events
# Calculate the probability using the dpois function
probability <- dpois(k, lambda = lambda)
print(probability)
# Values for plotting
k_values <- 0:10
probabilities <- dpois(k_values, lambda = lambda)
# Plot using barplot for discrete values
barplot(probabilities,
names.arg = k_values,
col = "lightgreen",
xlab = "Number of Events",
ylab = "Probability",
main = "Poisson Distribution PMF",
border = "black")
OUTPUT:
Problem2:
A hospital receives an average of 2 emergency cases per hour. What is the probability that exactly 4 emergency cases will be received in the next hour?
• λ = 2 (average number of cases)
• k = 4 (desired number of cases)
CODE:
# Given parameters
lambda <- 2 # average number of cases
k <- 4 # number of cases
# Calculate the probability
probability <- dpois(k, lambda = lambda)
print(probability)
# Values for plotting
k_values <- 0:10
probabilities <- dpois(k_values, lambda = lambda)
# Plot
barplot(probabilities,
names.arg = k_values,
col = "lightblue",
xlab = "Number of Emergency Cases",
ylab = "Probability",
main = "Poisson Distribution PMF",
border = "black")
OUTPUT:
● CONTINUOUS PROBABILITY DISTRIBUTION
1.Exponential Distribution:
Problem1:
The average time between customer arrivals at a shop is 5 minutes. What is the probability that a customer arrives within the first 3 minutes?
• λ = 1/5 (since the average time between arrivals is 5 minutes, the rate is 1/5 per minute)
• x = 3 minutes
CODE:
# Given parameters
lambda <- 1/5 # rate (1/mean)
x <- 3 # time in minutes
# Calculate the probability density (PDF) at x = 3
prob_density <- dexp(x, rate = lambda)
print(paste("Probability density at 3 minutes:", prob_density))
# Cumulative probability (CDF) using pexp function
probability <- pexp(x, rate = lambda)
print(probability)
# Plot the Exponential Distribution (PDF)
curve(dexp(x, rate = lambda), from = 0, to = 20, col = "blue", lwd = 2, xlab = "Time (minutes)", ylab = "Density", main = "Exponential Distribution")
OUTPUT:
Problem2:
A machine breaks down on average once every 10 hours. What is the probability that the next breakdown will occur within the next 4 hours?
• λ = 1/10 (since the average time between breakdowns is 10 hours, the rate is 1/10 per hour)
• x = 4 hours
CODE:
# Given parameters
lambda <- 1/10 # rate (1/mean time between breakdowns)
x <- 4 # time in hours
# Calculate the probability density (PDF) at x = 4
prob_density <- dexp(x, rate = lambda)
print(paste("Probability density at 4 hours:", prob_density))
# Cumulative probability (CDF) using pexp function
probability <- pexp(x, rate = lambda)
print(paste("Cumulative probability P(X <= 4):", probability))
# Plot the Exponential Distribution (PDF)
curve(dexp(x, rate = lambda), from = 0, to = 20, col = "green", lwd = 2,
xlab = "Time until next breakdown (hours)",
ylab = "Density",
main = "Exponential Distribution (λ = 0.1)")
OUTPUT:
2.Normal Distribution:
Problem1:
The heights of students in a class follow a
normal distribution with a mean height of 170 cm and a
standard deviation of 10 cm. What is the probability that
a student is shorter than 160 cm?
• μ = 170 cm (mean)
• σ = 10 cm (standard deviation)
• x = 160 cm (desired height)
CODE:
# Given parameters
mu <- 170 # mean height
sigma <- 10 # standard deviation
x <- 160 # desired height
# Cumulative probability (CDF) using pnorm function probability <- pnorm(x, mean = mu, sd = sigma)
print(probability)
# Plot the Normal Distribution (PDF)
curve(dnorm(x, mean = mu, sd = sigma), from = 130, to = 210, col = "green", lwd = 2,
xlab = "Height (cm)", ylab = "Density", main = "Normal Distribution")
OUTPUT:
Problem2:
A factory produces bolts with a mean diameter
of 5 cm and a standard deviation of 0.2 cm. What is the
probability that a randomly selected bolt has a diameter
between 4.8 cm and 5.2 cm?
• μ = 5 cm
• σ = 0.2 cm
• x1 = 4.8 cm (lower bound)
• x2 = 5.2 cm (upper bound)
CODE:
# Given parameters
mu <- 5 # mean diameter
sigma <- 0.2 # standard deviation
x1 <- 4.8 # lower bound
x2 <- 5.2 # upper bound
# Probability for the range using pnorm
probability <- pnorm(x2, mean = mu, sd = sigma) - pnorm(x1, mean = mu, sd = sigma)
print(probability)
# Plot the Normal Distribution (PDF)
curve(dnorm(x, mean = mu, sd = sigma), from = 4.5, to =
5.5, col = "purple", lwd = 2,
xlab = "Diameter (cm)", ylab = "Density", main =
"Normal Distribution")
OUTPUT:
● UNIFORM DISTRIBUTION
1. Discrete Uniform Distribution:
Example: Rolling a fair die. The probability of getting any particular number (1 through 6) is 1/6
CODE:
# Set the number of outcomes (n = 6 for a fair die)
n <- 6
# Probability for each outcome (uniform probability)
probability <- 1 / n
print(paste("Probability of rolling any specific number on a 6-sided die:", probability))
# Simulate rolling the die 1000 times
rolls <- sample(1:n, size = 1000, replace = TRUE)
# Relative frequencies of each outcome
freq_table <- table(rolls) / length(rolls)
# Plot the bar chart of relative frequencies
barplot(freq_table,
col = "lightblue",
main = "Relative Frequencies of Rolling a 6-Sided Die",
xlab = "Outcome",
ylab = "Relative Frequency")
# Add a horizontal dashed red line for the theoretical probability
abline(h = probability, col = "red", lwd = 2, lty = 2)
OUTPUT:
2. Continuous Uniform Distribution:
Example: Suppose you pick a number randomly
between 0 and 5. The probability density function is
constant between 0 and 5, and any number in that
range has an equal likelihood of being chosen.
CODE:
# Set the range for the uniform distribution
a <- 0 # Lower bound
b <- 5 # Upper bound
# Probability density function (constant between a and b)
prob_density <- 1 / (b - a)
print(paste("The probability density for the interval [0, 5] is:", prob_density))
# Simulate picking 1000 random values from the continuous uniform distribution
random_values <- runif(1000, min = a, max = b)
# Plot the histogram of the random values to visualize the uniform distribution
hist(random_values,
breaks = 30,
probability = TRUE,
col = "lightblue",
main = "Histogram of Random Values from U(0, 5)",
xlab = "Value",
ylab = "Density")
# Add a horizontal red dashed line showing the constant PDF
abline(h = prob_density, col = "red", lwd = 2, lty = 2)
OUTPUT:
Practical No.09
AIM: Hypothesis Testing
Q1. one sample t test
10 indivisula are chosen at random form a population and then heights aew found to be in inches
63,63,64,65,66,69,69,70,70,71 discuss the proposal that  mean heihgt in universe is 65 inches
CODE:
#1.One sample t-test for mean heiht
heights <- c(63, 63, 64, 65, 66, 69, 69, 70, 70, 71)
t.test(heights, mu = 65, alternative = "two.sided")
OUTPUT:
Q2.two sample t test below are the given gain in weights (kgs) of pigs fed on
2 diets A and B
diet A : 25,32,30,34,34,24,14,32,24,30,31,35,25
diet B: 44,34,22,10,47,31,40,30,32,35,18,21,35,29,22
text the two diet differ signiifcantly as regards that effect on increase in weights
CODE:
# 2. Two sample t-test for weight gain on Diet A vs Diet B
diet_A <- c(25, 32, 30, 34, 34, 34, 14, 32, 24, 30, 31, 35, 25)
diet_B <- c(44, 34, 22, 10, 47, 31, 40, 30, 32, 35, 18, 21, 35, 29, 22)
t.test(diet_A, diet_B, alternative = "two.sided", var.equal = TRUE)
OUTPUT:
Q3.paired t test an IQ text was administered 5 person before and after they were trained the results are given below
candidiate : 1 2 3 4 5
IQ before : 110 120 123 132 125
IQ after : 120 118 125 136 121
test wether there is any chnage in IQ after training
CODE:
# 3. Paired t-test for IQ before and after training
IQ_before <- c(110, 120, 123, 132, 125)
IQ_after <- c(120, 118, 125, 136, 121)
t.test(IQ_before, IQ_after, paired = TRUE, alternative = "two.sided")
OUTPUT:
● One sample test
This test checks if the mean of your sample is different from a hypothesized population mean.
Example: You have a sample of exam scores and want to test if the average score is 75.
Code:
#one-sample test
#You have a sample of exam scores and want to test if the average score is 75.
# Example data
exam_scores <- c(70, 80, 85, 90, 75, 60, 77, 82, 88)
# One-sample t-test
t_test_result <- t.test(exam_scores, mu = 75)
# Hypothesized mean is 75
print(t_test_result)
OUTPUT:
The output will show you the t-statistic, p-value, and confidence interval for the mean.
Problem 1: A teacher believes that the average of students in her calss on the final exam is 75. She collects a sample of 10 students scores and calculates their sample mean and standard deviation. She wants to test if the average score of her class is significantlydifferent from 75.
Exam scores: 62,75,78,80,74,65,82,88,69,75
CODE:
# Example data
exam_scores <- c(67, 72, 78, 80, 74, 65, 82, 88, 69, 75)
# One-sample t-test
t_test_result <- t.test(exam_scores, mu = 75) # Null
hypothesis mean = 75
print(t_test_result)
OUTPUT:
Problem 2: You have a sample of 10 students’ testscores, and you want to test if the mean test scorediffers from70 (the population mean).
Here’s the data (test scores in percentage):
Sample Data: 72, 67, 75, 63, 70, 65, 69, 71, 64, 76
Steps in R:
1. Input the sample data.
2. Perform the t-test.
3. Use the t-distribution for the test statistic.
4. Interpret the results.
CODE:
#problem 2: sample test
# Step 1: Input the data
test_scores <- c(72, 67, 75, 63, 70, 65, 69, 71, 64, 76)
# Step 2: Perform the one-sample t-test (testing if mean is 70)
t_test_result <- t.test(test_scores, mu = 70)
# Step 3: Print the result
print(t_test_result)
# Step 4: (Optional) Extract t-statistic and degrees of freedom
t_statistic <- t_test_result$statistic
df <- t_test_result$parameter
# Step 5: Use t-distribution to find p-value manually
# Calculate the p-value using the t-distribution (two-tailed test)
p_value_manual <- 2 * (1 - pt(abs(t_statistic), df = df))
# Print the manually calculated p-value
print(p_value_manual)
OUTPUT:
● Two-Sample t-test (Independent)
This test compares the means of two independent groups.
Example: You want to compare the exam scores between two groups of students: Group A and Group B.
CODE:
# Example data for two groups
group_A <- c(70, 80, 85, 90, 75)
group_B <- c(60, 65, 70, 68, 72)
# Two-sample t-test
t_test_result <- t.test(group_A, group_B)
print(t_test_result)
OUTPUT:
Problem 1: If you want to compare two independent groups to see if their means are significantly different (e.g.,testing the difference in test scores between two classes), you can use the two-sample t-test.
Example Problem: You have two groups of students with their test scores:
● Group A scores: 75, 80, 78, 85, 88
● Group B scores: 72, 70, 68, 75, 74
CODE:
#problem 1: two sample test
# Group A and Group B data
group_A <- c(75, 80, 78, 85, 88)
group_B <- c(72, 70, 68, 75, 74)
# Perform the two-sample t-test
t_test_result <- t.test(group_A, group_B)
# Print the result
print(t_test_result)
OUTPUT:
● Paired t-test
This is used when you have two related samples (e.g., measurements before and after a treatment).
Example: You have the test scores of students before and after a tutoring program.
CODE:
#paired test
# Example data for before and after tutoring
before_tutoring <- c(55, 60, 65, 70, 75)
after_tutoring <- c(60, 65, 70, 75, 90)
# Paired t-test
t_test_result <- t.test(before_tutoring, after_tutoring, paired = TRUE)
print(t_test_result)
OUTPUT:
Z TESTING
1. Standard normal cumulative distribution
function
pnorm(q, mean = 0, sd = 1, lower.tail = TRUE)
● q: Z-score or value to find the probability for.
● mean: Mean of the normal distribution (default is 0).
● sd: Standard deviation (default is 1).
● lower.tail = TRUE: Computes P(X≤q)P(X \leq q), the
probability that a normal variable is less than q.
CODE:
# Given data
sample_mean <- 99
population_mean <- 100
sample_size <- 400
population_sd <- 8 # Population standard deviation known
# Standard error
SE <- population_sd / sqrt(sample_size)
# Z-test
z_value <- (sample_mean - population_mean) / SE
p_value <- 2 * pnorm(z_value, lower.tail = TRUE) # Two-tailed test
# Output results
cat("Z-value:", z_value, "\n")
cat("P-value:", p_value, "\n")
# Conclusion
if (p_value < 0.05) {
cat("Reject the null hypothesis: The sample does not come from a population with mean 100.\n")
} else {
cat("Fail to reject the null hypothesis: The sample may come from a population with mean 100.\n")
}
# Given data
sample_mean <- 1570
population_mean <- 1600
sample_size <- 400
population_sd <- 150 # Population standard deviation known
# Standard error
SE <- population_sd / sqrt(sample_size)
# Z-test (one-tailed: checking if mean < 1600)
z_value <- (sample_mean - population_mean) / SE
p_value <- pnorm(z_value, lower.tail = TRUE) # One-tailed test
# Output results
cat("Z-value:", z_value, "\n")
cat("P-value:", p_value, "\n")
# Conclusion
if (p_value < 0.01) {
cat("Reject the null hypothesis: The mean lifetime of the bulbs is significantly less than 1600 hours.\n")
} else {
cat("Fail to reject the null hypothesis: There is no significant evidence that the mean lifetime is less than 1600 hours.\n")
}
OUTPUT:
Problem 1 :
A sample of size 400 was drawn and the sample mean was founded as 99. Test whether this sample would have come from a normal population with mean 100 and S.D 8 at α=0.05
CODE:
library(BSDA)
# Given values
sample_mean <- 99 # Sample mean
mu0 <- 100 # Hypothesized population mean
sigma <- 8 # Population standard deviation
n <- 400 # Sample size
alpha <- 0.05 # Significance level
# Simulate a sample with mean 99 (approximate approach)
set.seed(123) # For reproducibility
sample_data <- rnorm(n, mean = sample_mean, sd = sigma) # Generate sample
# Perform the z-test
result <- z.test(sample_data,
sigma.x = sigma,
mu = mu0,
alternative = "two.sided", conf.level = 1 - alpha)
# Print the result
print(result)
OUTPUT:
Problem 2:
The mean of life time of a sample of 400 hours cent lighttube produced by a company is found to be 1570 hourswith a S.D of 150 hours. Test the bulbs hypothesis thatthe mean lifetime of the bulbs produced by the companyis 1600 hrs against the alternative hypothesis that it isgreater than 1600 hrs at 1% LOS.
CODE:
# Given values
sample_mean <- 1570 # Sample mean
mu0 <- 1600 # Hypothesized population mean
sigma <- 150 # Population standard deviation
n <- 400 # Sample size
alpha <- 0.01 # Significance level
# Compute z-score manually
z_value <- (sample_mean - mu0) / (sigma / sqrt(n))
# Compute p-value (left-tailed test)
p_value <- pnorm(z_value)
# Print results
cat("Computed z-score:", z_value, "\n")
cat("Computed p-value:", p_value, "\n")
# Decision rule
if (p_value < alpha) {
cat("Result: Reject the null hypothesis. The mean lifetime is significantly less than 1600 hours.\n")
} else {
cat("Result: Fail to reject the null hypothesis. No significant evidence that the mean lifetime is less than 1600 hours.\n")
}
OUTPUT:
● Chi square testing:
1. matrix(data, nrow, byrow = TRUE/FALSE)
Creates a matrix (table) from a vector of values.
smoking_data <- matrix(c(30, 20, 10, 40), nrow = 2,
byrow = TRUE)
● c(30, 20, 10, 40): Data values filled into the matrix.
● nrow = 2: Creates a 2-row matrix.
● byrow = TRUE: Fills values row-wise instead of column-wise.
CODE:
smoking_data <- matrix(c(30, 20, 10, 40), nrow = 2,
byrow = TRUE)
smoking_data
OUTPUT:
2. dimnames(object) <- list(row_names, column_names)
Assigns row and column names to the matrix.
dimnames(smoking_data) <- list(Gender = c("Male", "Female"),
Smoking_Status = c("Smoker", "Non-Smoker"))
● Gender = c("Male", "Female"): Labels rows as "Male" and "Female".
● Smoking_Status = c("Smoker", "Non-Smoker"): Labels columns.
CODE:
smoking_data <- matrix(c(30, 20, 10, 40), nrow = 2, byrow = TRUE)
dimnames(smoking_data) <- list(
Gender = c("Male", "Female"),
Smoking_Status = c("Smoker", "Non-Smoker")
)
smoking_data
OUTPUT:
3. chisq.test(object)
Performs the Chi-Square test for independence.
smoking_chi_test <- chisq.test(smoking_data)
● Takes the contingency table as input.
● Returns Chi-Square statistic, degrees of freedom, and p-value.
CODE:
# Create the contingency table
smoking_data <- matrix(
 c(30, 20, 10, 40),
 nrow = 2,
 byrow = TRUE
)
# Assign row and column names
dimnames(smoking_data) <- list(
 Gender = c("Male", "Female"),
 Smoking_Status = c("Smoker", "Non-Smoker")
)
# View the table
smoking_data
# Perform the Chi-Square test for independence
smoking_chi_test <- chisq.test(smoking_data)
# View the test results
smoking_chi_test
# View expected frequencies (assumption check)
smoking_chi_test$expected
OUTPUT:
Example1:
A researcher wants to test if there is a relationship between gender and voting preference. They gather data on gender and voting preference (male/female vs. party choice) from a sample and use the Chi-Square test to determine if gender and voting preference are independent
CODE:
# Create a contingency table for Gender vs. Smoking
Status
smoking_data <- matrix(c(30, 20, 10, 40), nrow = 2, byrow = TRUE)
# Assign row and column names
dimnames(smoking_data) <- list(Gender = c("Male", "Female"),
 Smoking_Status = c("Smoker", "Non-Smoker"))
# Perform Chi-Square test
smoking_chi_test <- chisq.test(smoking_data)
# Print results
print(smoking_chi_test)
OUTPUT:
Example2:
A researcher wants to know if there is an association between gender (Male/Female) and smoking status (Smoker/Non-smoker). They collect the following data from a random sample of 100 individuals:
Smoker Non-Smoker Total
Male 30 20 50
Female 10 40 50
Total 40 60 100
CODE:
# Example contingency table for Gender vs. Voting
Preference
voting_data <- matrix(c(40, 30, 50, 60), nrow = 2, byrow = TRUE)
# Assign row and column names
dimnames(voting_data) <- list(Gender = c("Male", "Female"),
Voting_Preference = c("Party A", "Party B"))
# Perform Chi-Square test
voting_chi_test <- chisq.test(voting_data)
# Print results
print(voting_chi_test)
OUTPUT:
Problem1:
A researcher wants to know if there is an association between gender (Male/Female) and smoking status (Smoker/Non-smoker). They collect the following data from a random sample of 100 individuals:
Male
Female
Total
Smoker Non-Smoker Total
50
50
100
30 20
10 40
40 60
CODE:
# Data (Observed frequencies)
observed <- matrix(c(30, 20, 10, 40), nrow = 2)
# Chi-Square Test
chisq_test <- chisq.test(observed)
print(chisq_test)
OUTPUT:
Problem2:
A company sells T-shirts in four different colors (Red, Blue, Green, Black). They believe that sales are evenly distributed among these colors. However, they collect actual sales data and want to check if the distribution differs significantly from their expectation.
Observed Sales Data:
T-Shirt
Color
Red
Blue
Green
Black
Sales
Count 35 50 40 25
Expected Sales Data:
CODE:
# Observed sales counts
observed <- c(35, 50, 40, 25)
# Expected sales counts (evenly distributed)
expected <- rep(sum(observed) / length(observed), length(observed))
# Perform the Chi-Square Goodness of Fit Test
result <- chisq.test(observed, p = expected / sum(expected))
# Print result
print(result)
OUTPUT:
2. Let’s say we have data on the number of people choosing different types of drinks at a party. We expect the following distribution:
● 30% prefer soda,
● 40% prefer juice,
● 30% prefer water.
The observed data from a survey of 100 people are:
● 32 prefer soda,
● 40 prefer juice,
● 28 prefer water.
Let's perform a Chi-Square Goodness of Fit Test to see if the observed data fits the expected distribution.
CODE:
# Observed counts
observed <- c(Soda = 32, Juice = 40, Water = 28)
# Expected proportions
expected_probs <- c(0.30, 0.40, 0.30)
# Chi-Square Goodness of Fit Test
chisq.test(observed, p = expected_probs)
OUTPUT:
Practical No.10
AIM: ANOVA (Analysis of Variance)
One-Way Anova
Let's assume we are testing the effectiveness of three different fertilizers on plant growth. We have three groups of plants, each treated with a different fertilizer, and we want to check if there's a significant difference in the average growth between these groups.
Data:
● Group A (Fertilizer 1): 5, 7, 8, 6, 9
● Group B (Fertilizer 2): 4, 6, 7, 8, 9
● Group C (Fertilizer 3): 3, 5, 4, 6, 5
Code
# Data
group <- factor(rep(c("A", "B", "C"), each = 5))
score <- c(5, 7, 8, 6, 9, 4, 6, 7, 8, 9, 3, 5, 4, 6, 5)
# Create a data frame
data <- data.frame(group, score)
# Perform One-Way ANOVA
anova_result <- aov(score ~ group, data = data)
# Display the ANOVA table
summary(anova_result)
Output
p-value (Pr(>F)) = 0.084. Since this is greater than 0.05, we fail
to reject the null hypothesis. There is no significant difference in
the mean growth between the three groups.
Two-Way ANOVA
We want to test the effects of fertilizer (Factor 1) and plant type
(Factor 2) on plant growth. We
have two fertilizers (A, B) and two plant types (X, Y).
Data:
● Group A (Fertilizer 1), Plant Type X: 4, 5, 6, 7
● Group A (Fertilizer 1), Plant Type Y: 3, 4, 5, 6
● Group B (Fertilizer 2), Plant Type X: 6, 7, 8, 9
● Group B (Fertilizer 2), Plant Type Y: 4, 5, 6, 7
Code
# Data
fertilizer <- factor(rep(c("A", "B"), each = 8))
plant_type <- factor(rep(c("X", "Y"), times = 4))
growth <- c(4, 5, 6, 7, 3, 4, 5, 6, 6, 7, 8, 9, 4, 5, 6, 7)
# Create a data frame
data_2way <- data.frame(fertilizer, plant_type, growth)
# Perform Two-Way ANOVA
anova_result_2way <- aov(growth ~ fertilizer * plant_type, data = data_2way)
# Display the ANOVA table
summary(anova_result_2way)
Output
The p-value for fertilizer is 0.0025, which is significant, so we reject the null hypothesis for fertilizer.
The p-values for plant type and the interaction term are both greater than 0.05, so we fail to reject the null hypothesis for both. Therefore, there’s no significant effect of plant type or interaction.
Question
To assess the significance of possible variation in performance in a certain that between the convent schools of a city, a common test was given to a number of students taken at random from the senior 5th class of each of four schools concerned the results are given below. Make analysis of variance of data
A B C D
8 12 18 13
10 11 12 9
12 9 16 12
8 14 6 16
7 4 8 15
Code
# Data
schools <- factor(rep(c("A", "B", "C","D"), each = 5))
marks <-
c(8,10,12,8,7,12,11,9,14,4,18,12,16,6,8,13,9,12,16,15)
# Create a data frame
data <- data.frame(schools, marks)
# Perform One-Way ANOVA
anova_result <- aov(marks ~ schools, data = data)
# Display the ANOVA table
summary(anova_result)
Output
