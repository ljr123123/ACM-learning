testChar = 's'

while True:
    str = input("请输入一个字符串:")
    if testChar in str:
        print("Yes!")
        if len(str) == 1: 
            print("You find the char!")
            break;
    else:
        print("No!")