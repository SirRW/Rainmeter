[Folder]
Measure=Plugin
Plugin=FileView
Path=#url#
DynamicVariables=1
ShowDotDot=0
ShowFolder=1
Count=7

;#region Index 1
[F1name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=1
[F1size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=1
[F1path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=1
;#endregion
;#region Index 2
[F2name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=2
[F2size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=2
[F2path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=2
;#endregion
;#region Index 3
[F3name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=3
[F3size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=3
[F3path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=3
;#endregion
;#region Index 4
[F4name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=4
[F4size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=4
[F4path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=4
;#endregion
;#region Index 5
[F5name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=5
[F5size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=5
[F5path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=5
;#endregion
;#region Index 6
[F6name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=6
[F6size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=6
[F6path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=6
;#endregion
;#region Index 7
[F7name]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileName
Index=7
[F7size]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileSize
Index=7
[F7path]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FilePath
Index=7
;#endregion

;#region Calcs
[I1y]
Measure=Calc
Formula= ((#Margin#*2)+#Basest#)
[I2y]
Measure=Calc
Formula= ((#Margin#*3)+#Basest#)
[I3y]
Measure=Calc
Formula= ((#Margin#*4)+#Basest#)
[I4y]
Measure=Calc
Formula= ((#Margin#*5)+#Basest#)
[I5y]
Measure=Calc
Formula= ((#Margin#*6)+#Basest#)
[I6y]
Measure=Calc
Formula= ((#Margin#*7)+#Basest#)
[I7y]
Measure=Calc
Formula= ((#Margin#*8)+#Basest#)
;-- All
[Ix]
Measure=Calc
Formula= (#Margin#*2)
[Ixf]
Measure=Calc
Formula= (#Width#)
[Ispc]
Measure=Calc
Formula= (#IconSize#*2)
;#endregion

;#region Icons
[Ico1]
Measure=Plugin
Plugin=FileView
Path=[Folder]
Type=FileType
Index=1
;#endregion