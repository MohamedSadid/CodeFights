bool tennisSet(int score1, int score2) {
    if ((score1 >= 5) || (score2 >= 5)) {
        if (((score1 - score2 == 2) && score1 == 7) || ((score2 - score1 == 2) && score2 == 7)){
            return true;
        }
        
        if (((score1 - score2 == 1) && score1 == 7) || ((score2 - score1 == 1) && score2 == 7)){
            return true;
        }
        
    }
    
    if ((score1 == 6) && (score2 < 5)) {
        return true;
    }
    
    if ((score2 == 6) && (score1 < 5)) {
        return true;
    }
    
    return false;
}