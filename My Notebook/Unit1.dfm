object Form1: TForm1
  Left = 554
  Top = 168
  Width = 1088
  Height = 563
  Caption = 'M'#243'jNotatnik!'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 1072
    Height = 505
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 8
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy Ctrl+N'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otwrz1: TMenuItem
        Caption = 'Otw'#243'rz'
        OnClick = Otwrz1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapisz Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = 'Edycja'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Wytnij Ctrl+X'
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Kopiuj Ctrl+C'
        OnClick = Czcionka1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = 'Wklej Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = 'Format'
      object Zawijaniewierszy2: TMenuItem
        Caption = 'Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy2Click
      end
      object Czcionka2: TMenuItem
        Caption = 'Czcionka...'
        OnClick = Czcionka2Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Informacje1: TMenuItem
        Caption = 'Informacje'
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object Zapraszamnabloga1: TMenuItem
          Caption = 'ALT J'
          OnClick = Zapraszamnabloga1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe (TXT)|*.txt|Wszystkie pliki|*.*'
    Left = 32
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy (TXT)|*.txt|Dowolny plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 56
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 80
  end
end
