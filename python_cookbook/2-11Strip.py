import re

text = "       ------------hello========="

if __name__ == "__main__": 
    aaa = text.strip()  
    print(aaa)
    print(aaa.lstrip('-'))   
    print(aaa.rstrip('='))