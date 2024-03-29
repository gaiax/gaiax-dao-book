= ネット投票の社会実装と検証事例
== エストニア
エストニアは、2005年に世界で初めて電子投票を実施した国として知られている。2021年の地方自治体選挙では、電子投票をした人の割合が50%近くまで上昇しており、電子投票における先進国となっている。

エストニアでは、基本的に電子投票=期日前投票という形になっており、投票用のwebサイトが選挙日の10日前の9時から選挙日の前日まで常に投票できる状態になっている。また、電子投票の結果は、選挙当日夜に公開される。

電子投票における本人確認方法は、身分証明書による投票とモバイルIDのどちらかを選択できる。身分証明書による投票を行う場合、身分証明書を読み取るための専用のカード読み取り装置が必要となる。一方、モバイルIDによる投票を行う場合、専用のカード読み取り装置は必要ない。

エストニアの投票用webサイトの図を見ていただくと分かるが、非常にUIがわかりやすい。老若男女誰でも利用しやすいように工夫されている。

//image[BCE_Chap02_02][エストニア投票用webサイト（出典：Valimised）]{
エストニア投票用webサイトの図
//}

エストニアはそもそも人口が133万人（東京の約10分の1）と非常に小さい国で、DX推進国として有名である。理由としては、独立が1991年であり、ちょうどインターネットの拡大の時期が重なったため、0ベースでシステムを構築できたことが大きいと考えられる。

基本的に、結婚と離婚以外はすべてオンラインで完結している。規模的にもこのような新しい取り組みをしやすいということも大きいだろう。

//image[BCE_Chap02_01][エストニア共和国選挙結果（出典：Valimised）]{
エストニア共和国選挙結果（出典：Valimised）
//}

== ユタ州

アメリカは、エストニアなどに比べると電子投票の進みは遅い。しかし、ユタ州では、2020年の共和党大会、及び大統領選の本戦で電子投票を実施した。

このプロジェクトは、スタートアップ企業「ヴォーツ（Voatz）」が作ったプラットフォームを利用している。ヴォーツのプライベート・ブロックチェーンを利用することで投票を安全にオンライン上で実施することができるようになるとされている。

すでに2018年の中間選挙でこのプログラムを試験導入している。2020年の共和党大会では、93%の投票率を達成し、加えて高い満足度を記録した。

ヴォーツ（Voatz）の仕組みとしては、BitFlyerと同様に身分証と、顔認証によって本人確認を行う。投票はブロックチェーン技術によって匿名化されており、既存の投票と比較すると非常に安価に投票を実行できる。

2020年4月のウェストバージニア州の大統領予備選挙においては、Voatzの使用が断念された。これは、議会において専門家からセキュリティ上の不安が表明されたからです。

もちろんVoatz社は、この理由について、理解できないものに直面したときの現状にとどまろうとするバイアス（現状維持バイアス）によってブロックチェーン投票のリスク面ばかりを指摘しているとして反論した。

== 茨城県つくば市

茨城県つくば市は、2024年地方選挙で電子投票の導入を目指している。つくば市は、2018年から生徒会役員選挙や模擬住民投票など、さまざまな場面で電子投票の実証実験を実施してきた。2023年7月には、市内4地区に住む18歳以上の市民を対象とした模擬住民投票を実施し、1,506人が投票した。

つくば市の電子投票は、マイナンバーカードと顔認証技術を活用した本人確認システムを採用している。投票者は、ハガキに記載されたQRコードをスマートフォンで読み取り、マイナンバーカードと顔認証技術で本人確認を行うことで、投票が可能になる。

つくば市の電子投票のメリットは、以下の3つが挙げられる。

===[column] つくば市の電子投票のメリット

 1. @<strong>{①投票所に行く必要がないため、投票弱者の利便性の向上}@<br>{}
 2. @<strong>{②投票のしやすさの向上}@<br>{}
 3. @<strong>{③投票結果の速やかな集計が可能}@<br>{}

===[/column]

つくば市の電子投票は、まだ実証実験の段階ではあるが、今後の導入に向けて、以下の課題を解決する必要がある。

===[column] つくば市の電子投票の今後の課題

 1. @<strong>{①セキュリティ対策の強化}@<br>{}
 2. @<strong>{②投票者の利便性の向上}@<br>{}
 3. @<strong>{③投票率の向上}@<br>{}

===[/column]

セキュリティ対策については、マイナンバーカードと顔認証技術の組み合わせにより、なりすましや改ざんのリスクを低減できる。また、投票者の利便性の向上については、投票方法の簡素化や投票時間の拡大などの施策を検討する必要がある。さらに、投票率の向上については、電子投票の利便性やメリットを周知徹底する必要がある。

つくば市は、これらの課題を解決しながら、2024年地方選挙での電子投票の導入を目指す。電子投票の導入により、投票弱者の利便性が向上し、投票のしやすさが向上すれば、投票率の向上にもつながると考えられる。つくば市の電子投票の導入は、日本の選挙制度の改革に大きな影響を与える可能性を秘めている。

以下に、つくば市の電子投票の概要をまとめる。

===[column] つくば市の電子投票の概要

 1. @<strong>{①対象：市内18歳以上の市民}@<br>{}
 2. @<strong>{②方法：マイナンバーカードと顔認証技術による本人確認}@<br>{}
 3. @<strong>{③投票方法：スマートフォンやパソコンから投票}@<br>{}
 4. @<strong>{④投票期間：投票日当日の午前8時30分から午後8時まで}@<br>{}
 5. @<strong>{⑤投票結果の集計：投票日の午後9時30分頃までに完了}@<br>{}

===[/column]

つくば市の電子投票の導入が成功すれば、他の自治体にも導入が広がる可能性があり、日本の選挙制度の改革に大きく貢献することになるだろう。

//image[BCE_Chap02_03][つくば市の実証実験でのネット投票の流れ（出典：東京新聞 2023年3月6日朝刊）]{
つくば市の実証実験でのネット投票の流れ（出典：東京新聞 2023年3月6日朝刊）
//}
