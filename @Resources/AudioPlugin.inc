[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTAttack=15
FFTDecay=120
Bands=14
Sensitivity=55

[Band0]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=0

[Band1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=1

[Band2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=2

[Band3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=3

[Band4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=4

[Band5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=5

[Band6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=6

[Band7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=7

[Band8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=8

[Band9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=9

[Band10]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=10

[Band11]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=11

[Band12]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=12

[Band13]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=13

[Band14]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=14


;--- Esquerda
[Calc0]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band0]),#C1#,#C4#)
[Calc1]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band1]),#C1#,#C4#)
[Calc2]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band2]),#C1#,#C4#)
[Calc3]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band3]),#C1#,#C4#)

;--- Direita
[Calc4]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band4]),0,#C3#)
[Calc5]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band5]),0,#C3#)
[Calc6]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band6]),0,#C3#)
[Calc7]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band7]),0,#C3#)

;--- Cima
[Calc8]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band8]),#C1#,#C4#)
[Calc9]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band9]),#C1#,#C4#)
[Calc10]
Measure=Calc
DynamicVariables=1
Formula= Clamp((#C4#*[Band10]),#C1#,#C4#)

;--- Baixo
[Calc11]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band11]),0,#C3#)
[Calc12]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band12]),0,#C3#)
[Calc13]
Measure=Calc
DynamicVariables=1
Formula= #C7#-Clamp((#C3#*[Band13]),0,#C3#)