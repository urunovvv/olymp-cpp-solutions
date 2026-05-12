def main():
    card1, card2, trump = input().split()
    if card1[-1] == trump and card2[-1] != trump:
        print('yes')
        return
    elif card1[-1] != trump and card2[-1] == trump:
        print('no')
        return
    elif card1[-1] != trump and card2[-1] != trump:
        print('no')
        return
    card1_value = card1[:-1]
    card2_value = card2[:-1]
    honors = {'6': 0, '7': 1, '8': 2, '9': 3, '10': 4, 'J': 5, 'Q': 6, 'K': 7, 'A': 8}
    if honors[card1_value] > honors[card2_value]:
        print('yes')
    else:
        print('no')

if __name__ == "__main__":
    main()