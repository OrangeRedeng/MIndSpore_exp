# Import necessary libraries
import torchvision.transforms as transforms
import cv2
import numpy as np

# Read the image
image = cv2.imread('035059937545262.jpg')

# Convert BGR image to RGB image
image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

# Define a transform to convert
# the image to torch tensor
transform = transforms.Compose([
    transforms.ToTensor(),
    transforms.Resize([224, 224]),
])

filename = "img.bin"
print(filename)
fileobj = open(filename, mode='wb')
off = np.array(transform(image))
off.tofile(fileobj)
fileobj.close()