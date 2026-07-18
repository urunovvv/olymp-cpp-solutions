public class PasswordGenerator{
    public static void Main(string[] args){
        List<char> lettersLC = new List<char>(){'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
        List<char> lettersUC = new List<char>(){'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
        List<int> nums = new List<int>(){0,1,2,3,4,5,6,7,8,9};
        List<char> specSyms = new List<char>(){'!', '@', '#', '$', '%', '^', '&, *', '(', ')'};
        List<List> vars = new List<List>{lettersLC, LettersUC, nums, specSyms};
        
    }
}