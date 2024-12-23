import torch
import onnx
from torchvision.models import resnet50, ResNet50_Weights

# Old weights with accuracy 76.130%
resnet50(weights=ResNet50_Weights.IMAGENET1K_V1)

# define model and load weights 
print('Load model from torchvision')
model = resnet50(weights=ResNet50_Weights.IMAGENET1K_V2)

device = 'cpu'
model = model.to(device)

# export model to ONNX
print('Export model to ONNX')
dummy_input = torch.autograd.Variable(torch.randn(1, 3, 224, 224))

input_names = ["data"]
output_names = ["output"]
torch.onnx.export(model,
                  dummy_input.to(device),
                  'onnx/resnet.onnx',
                  input_names=input_names,
                  output_names=output_names,
                  opset_version=11)

# check created model
onnx_model = onnx.load('onnx/resnet.onnx')
