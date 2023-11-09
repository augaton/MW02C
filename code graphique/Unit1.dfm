object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Client DMX - Port 4123'
  ClientHeight = 261
  ClientWidth = 332
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 15
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label2: TLabel
    Left = 304
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label4: TLabel
    Left = 47
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label3: TLabel
    Left = 79
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label5: TLabel
    Left = 111
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label6: TLabel
    Left = 143
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label7: TLabel
    Left = 175
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label8: TLabel
    Left = 207
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label9: TLabel
    Left = 239
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label10: TLabel
    Left = 263
    Top = 167
    Width = 18
    Height = 13
    Align = alCustom
    Caption = '255'
  end
  object Label11: TLabel
    Left = 21
    Top = 220
    Width = 52
    Height = 13
    Caption = 'Adresse IP'
  end
  object ScrollBar1: TScrollBar
    Left = 16
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 0
    OnChange = ScrollBar1Change
  end
  object ScrollBar2: TScrollBar
    Left = 48
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 1
    OnChange = ScrollBar2Change
  end
  object ScrollBar3: TScrollBar
    Left = 80
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 2
    OnChange = ScrollBar3Change
  end
  object ScrollBar4: TScrollBar
    Left = 112
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 3
    OnChange = ScrollBar4Change
  end
  object ScrollBar5: TScrollBar
    Left = 144
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 4
    OnChange = ScrollBar5Change
  end
  object ScrollBar6: TScrollBar
    Left = 176
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 5
    OnChange = ScrollBar6Change
  end
  object ScrollBar7: TScrollBar
    Left = 208
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 6
    OnChange = ScrollBar7Change
  end
  object ScrollBar8: TScrollBar
    Left = 240
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 7
    OnChange = ScrollBar8Change
  end
  object ScrollBar9: TScrollBar
    Left = 272
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 8
    OnChange = ScrollBar9Change
  end
  object ScrollBar10: TScrollBar
    Left = 304
    Top = 40
    Width = 17
    Height = 121
    Align = alCustom
    Kind = sbVertical
    Max = 255
    PageSize = 0
    Position = 255
    TabOrder = 9
    OnChange = ScrollBar10Change
  end
  object Button1: TButton
    Left = 15
    Top = 186
    Width = 307
    Height = 25
    Caption = 'Envoyer'
    TabOrder = 10
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 79
    Top = 217
    Width = 121
    Height = 21
    TabOrder = 11
    Text = '172.20.21.17'
  end
  object Button2: TButton
    Left = 16
    Top = 9
    Width = 81
    Height = 25
    Caption = 'FullON'
    TabOrder = 12
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 239
    Top = 8
    Width = 85
    Height = 25
    Caption = 'FullOFF'
    TabOrder = 13
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 112
    Top = 9
    Width = 113
    Height = 25
    Caption = 'Demonstration'
    TabOrder = 14
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 216
    Top = 216
  end
end
