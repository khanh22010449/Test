1.Pascal's Triangle - LeetCode
	
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> retval;  // Khai bao 1 mang dong 2 chieu de luu ket qua
        
        for(int i=0;i<numRows;i++)  // Cho i chay tu 0 den numRows - 1
        { 
            vector<int> temp(i+1,1);    // Khoi tao temp[0] = 1 va temp[i] = 1 
            for(int j=1;j<i;j++)     // Cho j chay tu 1 den i - 1
            {
                temp[j]=retval[i-1][j-1] + retval[i-1][j];  // Tinh gia tri cua temp[j]
            }
            retval.push_back(temp);  // input temp vao retval 
        }
        return retval;  // tra lai retval
    }    
};

2. Two Sum - LeetCode
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); i++) { // nums.size() = so luong phan tu trong vector<int> %nums
            for (int j = i + 1; j < nums.size(); j++) { // Cho j = i + 1 chay den j < nums.size()
                if (nums[i] + nums[j] == target) { // Thu lan luot nums[i] + nums[j]  == target
                    return {i, j};    // Neu co dap an thoa man thi in ra vi tri i, j
                }
            }
        }
        return {};  // neu khong co gia tri thoa man
     // Do phuc tap cua bai toan la O(n^2)
    }
};

3. Single Number - LeetCode
class Solution {
public:
    int singleNumber(vector<int>& nums) {  // vector<int> nums : truyen tham so vao vector
        map<int,int> mp;      // su dung ham map de dem so lan suat hien cua tung phan tu 

        for( int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;    // dem so lan xuat hien cua tung phan tu suat trong vector 
        }
        long long res , fed = INT_MAX;   // res: in ra phan tu xuat hien it nhat    
										 // fed: in ra so lan in ra it nhat cua 1 phan tu
        for( auto it: mp){
            if(it.second < fed){
                fed = it.second;     // it.second : So lan xuat hien it nhat cua ki tu
                res = it.first;		 // it.first : Ki tu co so lan xuat hien it nhat
            }
        }
        return res ;    // tra ve ki tu co so lan suat hien it nhat
    }
};

4. Palindrome Number - LeetCode
class Solution {
public:
    bool isPalindrome(int x) {
        int s = 0 , n  = x ;    
        if(x <= 0){     // Vi -122 dao nguoc lai thanh 221- nen so am dao nguoc khong duoc
            return false;
        }
        while(n > 0){
            s = n%10 + s*10;    // s = n%10 lay du + s * 10
            n = n/10;			// n = n/10 chia lay nguyen
        }
        if(s == x){  // neu s = x thi tra ve true
            return true;
        }
        else{
            return false;
        }
    }
};

7. Ugly Number - LeetCode
class Solution {
public:
    bool isUgly(int n) {  // dung bool vi bool chi tra ve TRUE hoac FALSE
        while(n % 2 == 0 && (n = n / 2));   // Chia n cho de den khi n khong chia het duoc cho  2 duoc nua
        while(n % 3 == 0 && (n = n / 3));	// Chia n cho de den khi n khong chia het duoc cho  3 duoc nua
        while(n % 5 == 0 && (n = n / 5));	// Chia n cho de den khi n khong chia het duoc cho  5 duoc nua

        return n==1;   // neu n = 1 thi se tra ve TRUE, neu tra ve gia tri khac 1 se tra ve FLASE
    }
};

8. Missing Number - LeetCode
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    set<int> se;   // Su dung ham set de cac phan tu trong vector duoc tu dong sap xep 
    for( int i = 0 ; i < nums.size() ; i++ ){
        se.insert(nums[i]);   // truyen toan bo tham so vao se
    }
    // Sau khi truyen vao xong thi cac phan tu se tu dong sap xep
    int i = 0; 
    for( int x : se){ // x la lan luot cac phan tu trong se
        if(x != i){ // Neu x khac i thi dung va in ra i 
            break;
        }
        i++;  // tang i them 1 don vi neu x = i
    }
    return i; tra ve  gia tri i
    }
};

9. Power of Three - LeetCode
class Solution {
public:
    bool isPowerOfThree(int n) {  
        for( int i = 0 ; i <= 100 ; i++){   // cho i chay tu 0 -> 100 voi i la so mu cua 3
            if( n == pow(3,i)){  neu 3^i == n  thi tra ve TRUE va nguoc lai
                return true;
            }
        }
        return false;
    
    }
};

 

