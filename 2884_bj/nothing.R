## Assign operators
a = 15
b <- 15; 5 -> c
x <- c(1,2,3,4,5)    # 'c()' 자료를 결합하여 벡터로 만드는 함수 
a <- b <- c <- 6   # a = b <- c = 6
(x <- 1/pi)        # 대입결과를 출력하기

## arithmetic operators
n <- 10+2
3^3
n <- (3+5)*3-4**2/3   # 연산의 우선순위 
58 %% 3
58 %/% 3
x <- c(1,2,3,4) ; y <- c(2,3,5,4)  # 벡터연산
x+y
x*y
x <- c(1,2,3,4); y <- c(1,2)   # 재활용규칙(recycling rule)
v <- x+y
x <- c(1,2,3,4,5)
w <- x+y 

## Logical Opertors
x = TRUE; y = c(FALSE, TRUE)
!x
x & y    # x && y ?
x | y     # x || y ? 
x+y      # 답은?
x*y       # 답은?
x/y       # 답은?
x <- c(0,2,4,-3);  !x        # 답은?
x <- c(NA, TRUE); y <- c(FALSE, NA)
x & y
x | y 

## Relational Operators
x <- c(1,2,3,-1)
x > 0
x[x>1]        # 답은?
which(x == -1)
x1 <- 0.1 ; x2 <- 0.1; x3 <- 0.5 - 0.4
x1 == x2
x1 == x3     # 답은?  identical(x1,x3) vs all.equal(x1,x3)
x <- 45
(x > 10)+(x > 20)+(x > 30)+(x > 40)   # 답은?

# 자료의 입력(읽기) & 저장
## 직접입력
### c() 함수
x <- c(1,4,2)
y <- c(1,x,1)
z <- c(1,7:12)
c(1:5, 10.5, "next")

### scan() 함수
x <- scan()

#### 문자인 경우 what="" 또는 what="character" 추가

## 텍스트파일에 보관된 자료 읽기 (ASCII)
x <- getwd()
dir(x)

### scan()
x <- scan("test1.txt")
x2 <- scan("test1.txt", n=10)
x3 <- scan("test1.txt", nlines = 10)
x4 <- scan("test1.txt", skip = 1)

### read.table()
x1 <- read.table("test2.txt")
head(x1)
x1 <- read.table("test2.txt", header = TRUE)
x1$temp
x2 <- read.table("test2.txt", skip=1)
x2$V2
x2[3,]
x2[,10]
x3 <- read.table("test3.txt", row.names=c("A","B","C"), col.names=c("a","b","c"))
x3$a
x3$A		# x3[1,]로 수정
t(x3)
Employee <- read.table("Employee.csv", header=T)
Employee <- read.table("Employee.csv", header=T, sep=",")
Employee <- read.csv("Employee.csv", header=T)
Employee <- read.csv("Employee.csv")
head(Employee)
tail(Employee)

### URL
IP <- "http://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data"
iris <- read.table(url(IP),header=F,sep=",")

### 압축파일
files <- unzip("zipdata.zip")
testdata <- read.csv(files[6], stringsAsFactors = FALSE)

### 저장
#### Text형태 : write, write.table, write.csv
#### RData
save(testdata, file="test.RData")    # 해당 폴더에 "test.RData" 생성
load("test.RData")
head(testdata)
