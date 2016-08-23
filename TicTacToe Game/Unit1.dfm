object TicTac: TTicTac
  Left = 1015
  Top = 126
  Width = 591
  Height = 397
  Caption = 'TicTac'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pole1: TImage
    Left = 32
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole1Click
  end
  object pole2: TImage
    Left = 136
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole2Click
  end
  object pole4: TImage
    Left = 32
    Top = 128
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole4Click
  end
  object pole7: TImage
    Left = 32
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole7Click
  end
  object pole5: TImage
    Left = 136
    Top = 128
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole5Click
  end
  object pole8: TImage
    Left = 136
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole8Click
  end
  object pole6: TImage
    Left = 240
    Top = 128
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole6Click
  end
  object pole3: TImage
    Left = 240
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole3Click
  end
  object pole9: TImage
    Left = 240
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole9Click
  end
  object Label1: TLabel
    Left = 384
    Top = 64
    Width = 148
    Height = 28
    Caption = 'NOW YOUR TURN'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Impact'
    Font.Style = []
    ParentFont = False
  end
  object tura: TImage
    Left = 432
    Top = 112
    Width = 50
    Height = 50
  end
  object Button1: TButton
    Left = 400
    Top = 224
    Width = 113
    Height = 41
    Cursor = crHandPoint
    Caption = 'R E S T A R T'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Impact'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
