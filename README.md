# TyranoStarter
## 概要

ティラノスクリプトのテンプレートをコマンドプロンプトやPowerShellから作成できるCLIアプリです。

Windowsユーザー向けのアプリとなります

## インストール
### TyranoStarterのダウンロード

このページの`release`をクリックして、ダウンロードします

ダウンロード後に解凍してください

### ティラノスクリプトのダウンロード

[こちら](https://tyrano.jp/dl/)よりティラノスクリプトをダウンロードしてきます

こちらもダウンロード後に解凍してください

その後、回答したフォルダ名を`tyrano`に変更します

### 環境変数設定
まず、`コントロールパネル`を開き、`システムとセキュリティ`を選択します

次に、`システム`をクリックして、`システムの詳細設定`を選択します。

`環境変数`をクリックし、`ユーザー環境変数`の`新規`をクリックします

変数名には`TYRANO`と入力し、変数値は`ディレクトリの参照`から解凍済みのティラノスクリプトのフォルダを指定します

次に、`ユーザー環境変数`内の`Path`という項目をダブルクリックします。

`新規`をクリックし、先ほどダウンロードした`TyranoStarter`の`bin`フォルダまでのパスを貼り付けます。

例えば、ダウンロード内で解凍した場合は、`C:\Users\<ユーザー名>\Downloads>TyranoStarter\bin`とします

以上でインストールは終了です

## 使い方

コマンドプロンプトかPowerShellを起動します

その後、Desktopまで `cd` にて移動します。

```shell
cd desktop
```

次に、`tyrano <作成したいアプリ名>` を入力してテンプレートを作成します。

```shell
tyrano <作成したいアプリ名>
```

## ライセンス

[MIT](./LICENSE)にて公開しています