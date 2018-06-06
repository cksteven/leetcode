public class Codec {
    
    public static HashMap<String,String> map = new HashMap<String,String>();
    public static final String head = "http://tinyurl.com/";
    
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        map.put(String.valueOf(longUrl.hashCode()),longUrl);
        return head+String.valueOf(longUrl.hashCode());
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        return map.get(shortUrl.substring(head.length()));
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));