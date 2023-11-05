# Switch statements

# direct passing the index
x<-switch(3,
          "St",
          "Pt",
          "At",
          "Bt"
)

print(x)


# Indirect passing the index
y <- "10"
xs<-switch(y,
          "10"="St",
          "20"="Pt",
          "30"="At",
          "40"="Bt"
)

print(xs)

