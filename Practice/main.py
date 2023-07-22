from PIL import Image
import numpy as np

def colorPrint(img):
    imgRead = Image.open(img)
    imgArr = np.asarray(imgRead)
    for i in range(len(imgArr)):
        for j in range(len(imgArr[i])):
            cR = imgArr[i][j][0]
            cG = imgArr[i][j][1]
            cB = imgArr[i][j][2]
            print(f"\033[38;2;{cR};{cG};{cB}m",end=' ')
        print("\n")
    print("\n")

img = "trimurti.jpg"
colorPrint(img)
        