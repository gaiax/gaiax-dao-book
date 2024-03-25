= インターネット投票の実現へ向けて
== 投票率の低下とその理由
この章ではインターネット投票の実現へ向けて、解決しなければならない課題について考察していきます。

選挙のシーズンになるとニュースなどで、有権者の投票率が低下傾向にあるといった報道を目にすることが多いと思います。

総務省の発表では、直近の衆議院選挙（2021年10月）の投票率は55.93％。参議院選挙（2022年7月）の投票率は52.05%だったようで、選挙投票率のグラフ（図01-01）を見ると、確かにかつて80％近くあった頃から徐々に低下していることが見て取れると思います。

//image[BCE_Chap01_01][過去30年の衆議院選挙の投票率の遷移]{
【グラフ】過去30年の衆議院選挙の投票率の遷移
//}

投票へ行かない理由についても、総務省から調査資料が公表されていて、グラフ（図01-02）を見ると理由はさまざまですが、そのなかの一つに「投票所に行くのが面倒」があります。

//image[BCE_Chap01_02][投票を棄権した理由	（平成29年衆議院議員総選挙における意識調査）]{
【グラフ】投票を棄権した理由	（平成29年衆議院議員総選挙における意識調査）
//}

もし、ネット投票が実現すれば、投票率が改善するかもしれません。また、そのほかにも次のようなメリットもあると言われています。

===[column] ネット投票のメリット

 1. @<strong>{①候補者や政党の書き間違えによる無効票の減少}@<br>{}
 2. @<strong>{②開票や集計作業の速度向上}@<br>{}
 3. @<strong>{③選挙管理に関わる人的・金銭的コストの減少}@<br>{}
 4. @<strong>{④投票所での本人確認による心理的ハードルの緩和}@<br>{}

===[/column]


== 選挙の5つの基本原則とは？

2013年の公職選挙法改正でインターネット選挙活動が解禁されて以来、多くの候補者や政党がインターネットやSNSなどを活用して選挙活動しています。

//image[BCE_Chap01_03][選挙の歴史（抜粋）]{
選挙の歴史（抜粋）
//}

しかし投票については、基本的にはといったインターネット技術を利用しない方法でおこないます。

//image[BCE_Chap01_04][現在の投票の流れ]{
現在の投票の流れ
//}

現在の選挙制度は、日本国憲法に基づいた「選挙の5つの基本原則（選挙の五大公理）」といった原則があって、これらに反することなく、問題なく投票を遂行するために、現在の方法が採用されているようです。

===[column] 選挙の5つの基本原則（選挙の五大公理）

 1. @<strong>{①普通選挙}@<br>{}一定の年齢に達した全ての国民に選挙権が与えられる
 2. @<strong>{②平等選挙}@<br>{}一人に一票の価値は平等で、性別・学歴などの差別はない
 3. @<strong>{③秘密選挙（秘密投票）}@<br>{}誰が誰に投票したかは秘密で他者に知られない
 4. @<strong>{④直接・間接選挙}@<br>{}有権者が直接または間接的に、代表者や公職者を選ぶ
 5. @<strong>{⑤自由選挙（自由投票）}@<br>{}自分の意思による投票である



== ネット投票実現に向けた3つの課題

ネット投票が実現が難しいのは、前述の選挙の基本原則に関連した3つの課題を解消する必要があるとされています。

===[column] ネット投票実現に向けた3つの課題

 1. @<strong>{①自由選挙（自由投票）に関連する課題}@<br>{}
 自分の意思による投票であることが必要です

 2. @<strong>{②選挙（秘密投票）に関連する課題}@<br>{}
 誰が誰に投票したかは秘密で、他者に知られてはいけません

 3. @<strong>{③平等選挙に関連する課題}@<br>{}
 一人に一票の価値は平等で、性別・学歴などによる差別はしません



=== ① 自由選挙（自由投票）に関連する課題

自由選挙（自由投票）の原則は、「自分の意思による投票であること」です。したがって、以下について考慮する必要があるでしょう。

==== 考慮するポイント

 * ネット投票をおこなう人が有権者本人であること
 * 自分の意思に反した、第三者による強制的な投票ではないこと

==== 懸念ポイント

 * 病気や身体的に不自由などの理由から、有権者に代わって第三者が投票
 * 第三者が強制的に、有権者に特定の候補者に投票させる可能性がある@<br>{}（※この例は、秘密投票の原則にも抵触）


=== ②秘密選挙（秘密投票）に関連する課題

秘密選挙（秘密投票）の原則は、「誰が誰に投票したかは秘密で、他者に知られないこと」です。したがって、以下について考慮する必要があるでしょう。

==== 考慮するポイント

 * ネットから投票した内容が漏洩したり、第三者に知られないこと
 * 有権者と投票データを紐づけるが、永続させないこと

==== 懸念ポイント
 * システムへのクラッキングなどで、投票内容のデータが外部に漏洩する
 * 有権者と紐付いた投票データが、システム関係者に知られる• 有権者がスマホやPCで投票する画面を、第三者が（盗み）見る
 * 第三者が強制的に、有権者に特定の候補者に投票させる可能性がある @<br>{}（※この例は、自由投票の原則にも抵触）


=== ③平等選挙に関連する課題

平等選挙の原則は、「一人に一票の価値は平等で、性別・学歴などによる差別はしない」です。したがって、以下について考慮する必要があるでしょう。

==== 考慮するポイント

 * 同一の有権者に複数の投票権が与えられないこと
 * 投票内容と有権者の選択した内容が同一であること懸念ポイント
 * システムへのクラッキングによって、投票データの改ざんや複製される （※例として1票の投票が複製による10票の投票としてカウントされるなど）
 * システム障害による投票データの消失や投票できなくなる


== 課題解決へのアプローチ

選挙の基本原則に関連した3つの課題に対して、本書では以下のようなアプローチで、それぞれの実現性や課題などの考察と検証を試みています。いずれも基本的には、分散型台帳技術「ブロックチェーン」をベースにしていますが、詳細は第3章でご紹介いたします。

====[column] 3つの課題へのアプローチ

 1. ①「自由選挙（自由投票）」に関連する課題へのアプローチ@<br>{}
@<strong>{ブロックチェーン x マイナンバー}

 2. ②「秘密選挙（秘密投票）」に関連する課題へのアプローチ@<br>{}
@<strong>{ブロックチェーン x アドレス匿名化}

 3. ③「平等選挙」に関連する課題へのアプローチ@<br>{}
@<strong>{ブロックチェーン x マイナンバ}

====[/column]

//image[BCE_Chap01_05][3つの課題へのアプローチ]{
3つの課題へのアプローチ図
//}
