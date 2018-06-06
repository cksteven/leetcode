class Solution {
    public String complexNumberMultiply(String a, String b) {
        int int1 = Integer.parseInt(a.split("\\+")[0]);
        int int2 = Integer.parseInt(b.split("\\+")[0]);
        int i1 = Integer.parseInt(a.split("\\+")[1].split("i")[0]);
        int i2 = Integer.parseInt(b.split("\\+")[1].split("i")[0]);
        return (int1*int2-i1*i2)+"+"+(i1*int2+int1*i2)+"i";
    }
}