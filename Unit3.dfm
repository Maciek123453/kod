object Form3: TForm3
  Left = 275
  Top = 283
  Width = 1018
  Height = 480
  Caption = 'Form3'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 312
    Top = 80
    Width = 16
    Height = 13
    Caption = 'f'#39'(x)'
  end
  object Label2: TLabel
    Left = 312
    Top = 168
    Width = 18
    Height = 13
    Caption = 'LIM'
  end
  object Label3: TLabel
    Left = 320
    Top = 144
    Width = 7
    Height = 13
    Caption = 'X'
  end
  object Label4: TLabel
    Left = 808
    Top = 80
    Width = 42
    Height = 13
    Caption = 'Przedzial'
  end
  object Label5: TLabel
    Left = 312
    Top = 232
    Width = 14
    Height = 13
    Caption = 'f(x)'
  end
  object Label6: TLabel
    Left = 584
    Top = 232
    Width = 13
    Height = 13
    Caption = 'X0'
  end
  object Edit1: TEdit
    Left = 336
    Top = 72
    Width = 457
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 336
    Top = 96
    Width = 129
    Height = 25
    Caption = 'Znajdz minima i maksima'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 472
    Top = 96
    Width = 89
    Height = 25
    Caption = 'Oblicz pochodna'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Edit2: TEdit
    Left = 336
    Top = 160
    Width = 457
    Height = 21
    TabOrder = 3
  end
  object Edit3: TEdit
    Left = 336
    Top = 136
    Width = 257
    Height = 21
    TabOrder = 4
  end
  object RadioButton1: TRadioButton
    Left = 608
    Top = 136
    Width = 129
    Height = 17
    Caption = 'Granica z plusem'
    TabOrder = 5
  end
  object RadioButton2: TRadioButton
    Left = 712
    Top = 136
    Width = 113
    Height = 17
    Caption = 'Granica z minusem'
    TabOrder = 6
  end
  object RadioButton3: TRadioButton
    Left = 824
    Top = 136
    Width = 113
    Height = 17
    Caption = 'Granica zwykla'
    TabOrder = 7
  end
  object Button3: TButton
    Left = 336
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Oblicz'
    TabOrder = 8
    OnClick = Button3Click
  end
  object Edit4: TEdit
    Left = 856
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 9
  end
  object Edit5: TEdit
    Left = 336
    Top = 224
    Width = 241
    Height = 21
    TabOrder = 10
  end
  object Button4: TButton
    Left = 336
    Top = 248
    Width = 129
    Height = 25
    Caption = 'Wyznacz rownanie stycznej'
    TabOrder = 11
    OnClick = Button4Click
  end
  object Edit6: TEdit
    Left = 600
    Top = 224
    Width = 121
    Height = 21
    TabOrder = 12
  end
  object Button5: TButton
    Left = 336
    Top = 280
    Width = 75
    Height = 25
    Caption = 'Optymalizacja '
    TabOrder = 13
  end
end
