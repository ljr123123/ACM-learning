height = 1
while height <= 9:
    width = 1
    while width <= height:
        print(f"{height}×{width}={height*width}", end=" ")
        width += 1
    height += 1
    print("") 