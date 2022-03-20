object Form5: TForm5
  Left = 188
  Top = 562
  Width = 928
  Height = 480
  Caption = 'Form5'
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
    Left = 272
    Top = 80
    Width = 9
    Height = 13
    Caption = 'tg'
  end
  object Label2: TLabel
    Left = 264
    Top = 104
    Width = 25
    Height = 13
    Caption = 'sin'
  end
  object Label3: TLabel
    Left = 264
    Top = 128
    Width = 17
    Height = 13
    Caption = 'cos'
  end
  object Label4: TLabel
    Left = 264
    Top = 152
    Width = 15
    Height = 13
    Caption = 'ctg'
  end
  object Label5: TLabel
    Left = 504
    Top = 96
    Width = 6
    Height = 13
    Caption = 'a'
  end
  object Label6: TLabel
    Left = 504
    Top = 120
    Width = 6
    Height = 13
    Caption = 'b'
  end
  object Label7: TLabel
    Left = 504
    Top = 144
    Width = 6
    Height = 13
    Caption = 'c'
  end
  object Label8: TLabel
    Left = 704
    Top = 96
    Width = 18
    Height = 13
    Caption = 'Alfa'
  end
  object Label9: TLabel
    Left = 704
    Top = 120
    Width = 22
    Height = 13
    Caption = 'Beta'
  end
  object Label10: TLabel
    Left = 688
    Top = 144
    Width = 36
    Height = 13
    Caption = 'Gamma'
  end
  object Button1: TButton
    Left = 288
    Top = 192
    Width = 97
    Height = 25
    Caption = 'Oblicz Sinus'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 288
    Top = 216
    Width = 97
    Height = 25
    Caption = 'Oblicz Cosinus'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 288
    Top = 240
    Width = 97
    Height = 25
    Caption = 'Oblicz Tangens'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 288
    Top = 264
    Width = 97
    Height = 25
    Caption = 'Oblicz Kotangens'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 280
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object Edit2: TEdit
    Left = 280
    Top = 104
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object Edit3: TEdit
    Left = 280
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 6
  end
  object Edit4: TEdit
    Left = 280
    Top = 152
    Width = 121
    Height = 21
    TabOrder = 7
  end
  object Edit5: TEdit
    Left = 520
    Top = 88
    Width = 121
    Height = 21
    TabOrder = 8
  end
  object Edit6: TEdit
    Left = 520
    Top = 112
    Width = 121
    Height = 21
    TabOrder = 9
  end
  object Edit7: TEdit
    Left = 520
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 10
  end
  object Edit8: TEdit
    Left = 728
    Top = 88
    Width = 121
    Height = 21
    TabOrder = 11
  end
  object Edit9: TEdit
    Left = 728
    Top = 112
    Width = 121
    Height = 21
    TabOrder = 12
  end
  object Edit10: TEdit
    Left = 728
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 13
  end
  object Button5: TButton
    Left = 536
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Oblicz a'
    TabOrder = 14
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 536
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Oblicz b'
    TabOrder = 15
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 536
    Top = 216
    Width = 75
    Height = 25
    Caption = 'Oblicz c'
    TabOrder = 16
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 736
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Oblicz Alfa'
    TabOrder = 17
  end
  object Button9: TButton
    Left = 736
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Oblicz Beta'
    TabOrder = 18
  end
  object Button10: TButton
    Left = 736
    Top = 216
    Width = 75
    Height = 25
    Caption = 'Oblicz Gamma'
    TabOrder = 19
  end
  object CheckBox1: TCheckBox
    Left = 144
    Top = 16
    Width = 97
    Height = 17
    Caption = 'Tangens Alfa'
    TabOrder = 20
  end
  object CheckBox2: TCheckBox
    Left = 232
    Top = 16
    Width = 97
    Height = 17
    Caption = 'Tangens Beta'
    TabOrder = 21
  end
  object CheckBox3: TCheckBox
    Left = 320
    Top = 16
    Width = 105
    Height = 17
    Caption = 'Tangengs Gamma'
    TabOrder = 22
  end
  object CheckBox4: TCheckBox
    Left = 432
    Top = 16
    Width = 97
    Height = 17
    Caption = 'Sinus Alfa'
    TabOrder = 23
  end
  object CheckBox5: TCheckBox
    Left = 504
    Top = 16
    Width = 97
    Height = 17
    Caption = 'Sinus Beta'
    TabOrder = 24
  end
  object CheckBox6: TCheckBox
    Left = 576
    Top = 16
    Width = 97
    Height = 17
    Caption = 'Sinus Gamma'
    TabOrder = 25
  end
  object CheckBox7: TCheckBox
    Left = 144
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Cosinus Alfa'
    TabOrder = 26
  end
  object CheckBox8: TCheckBox
    Left = 232
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Cosinus Beta'
    TabOrder = 27
  end
  object CheckBox9: TCheckBox
    Left = 320
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Cosinus Gamma'
    TabOrder = 28
  end
  object CheckBox10: TCheckBox
    Left = 416
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Kotangens Alfa'
    TabOrder = 29
  end
  object CheckBox11: TCheckBox
    Left = 512
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Kotangens Beta'
    TabOrder = 30
  end
  object CheckBox12: TCheckBox
    Left = 616
    Top = 40
    Width = 97
    Height = 17
    Caption = 'Kotangens Gamma'
    TabOrder = 31
  end
end
