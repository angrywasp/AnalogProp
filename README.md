# AnalogProp
A Simple P8X32A propeller development board with AD7812 ADC

## Requirements

You will also need a couple of tool, which can be imnstalled from Nuget.  
- proptool, a basic command line tool for flashing the firmware and serial monitoring. Compatible with the AnalogProp or any propeller compatible USB-UART device such as the PropPlug  
- bsi, the BasicScript interpreter. BasicScript is a simple, cross platform interpreter scripting language that is used

dotnet tool install -g AngryWasp.PropTool AngryWasp.BasicScript.Interpreter  
dotnet tool install -g AngryWasp.BasicScript.Interpreter

You can find out more about these tools and download the source from their respective repos:  
BasicScript: https://github.com/AngryWasp/AngryWasp.BasicScript    
PropTool: https://github.com/AngryWasp/AngryWasp.PropTool  

## Compiling the example

Simplest is to just run 'helloWorld.bs'. This script calls make.bs to build and then install the helloWorld program   

```powershell
bsi ./helloWorld.bs
```

For complete control over the install, you can use proptool directly. run 'proptool --help' for a full list of available command line options
