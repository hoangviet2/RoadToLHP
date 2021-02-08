//
//  Task_8.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/01/2021.
//

// Đề bài:
/*
 Bài 3: Vay và trả:
“Hãy khôn ngoan trong kinh doanh” Hãy xem Bờm đã vận dụng thế nào? Cậu ấy đã
nợ hoặc tạm ứng cho các khách hàng, có N khách để thuận tiện đánh số từ 1 đến N.
Ngày kết thúc cuối cùng đã đến. Cậu ấy biết không thể trả khi không có đủ tiền. Có tất
cả N khách hàng xếp theo một đường thẳng với khoảng cách đều nhau 1 đơn vị. Bờm sẽ thu
tiền người nợ và sẽ trả cho khách mình đang nợ khi số tiền đủ trả, không nhất thiết nhận hết
rồi mới trả nhưng luôn về đích khi kết thúc.
Khi cậu di chuyển tới, người nợ sẽ trả, và khi có đủ cậu sẽ trả cho các người mình nợ.
Người i nợ Bờm Di tiền. Dấu trừ (-) có nghĩa là Bờm nợ tiền.
Bờm bắt đầu ở vị trí 0 và phải kết thúc chuyến đi của mình ở vị trí người cuối cùng.
Hãy tính quãng đường ngắn nhất mà cậu ấy phải đi để thu tiền nợ và trả tất cả những người
cậu ấy nợ? Trường hợp không đủ tiền trả thì Bờm sẽ quay vị trí cuối và vẫn còn nợ.
Dữ liệu vào: Trong tập tin văn bản ZDIST.INP có cấu trúc:
- Dòng 1 là một số nguyên N (1≤ n ≤ 105
);
- n dòng kế tiếp mỗi dòng chứa số nguyên Di (-103 ≤ Di ≤ 103
)
Kết quả: Ghi ra tập tin văn bản ZDIST.OUT có một số nguyên duy nhất là quãng
đường tối thiểu phải đi theo yêu cầu.
 link:https://quantri.hcm.edu.vn//Data/hcmedu/gdtrunghoc/Attachments/2018_4/Quy/de_thi_tin_hsg9_-_2018_14201811.pdf
*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main_HSG_3 (){
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    vector<int> vec_num;
    int n,m;
    int balance {0};
    int debt {0};
    int step{0};
    Inp>>n;
    for(int i=0; i<n;++i){
        Inp>>m;
        vec_num.push_back(m);
    }
    vector<int> vec_num_temp {vec_num};
    for (int i=0; i<n; ++i){
        if(vec_num_temp.at(i)>=0){
            balance += vec_num_temp.at(i);
            if (balance>=debt && debt!=0) {
                balance = balance-debt;
                debt = 0;
                vec_num_temp.at(i) = 0;
                step += 2;
            }
            ++step;
        }else{
            debt += vec_num_temp.at(i);
            vec_num_temp.at(i) = 0;
            ++step;
        }
    }
    for (auto item:vec_num_temp) {
        cout<<item<<endl;
    }
    cout<<step-2<<endl;
    Oup<<step-2<<endl;
    Inp.close();
    Oup.close();
    return 0;
}
