/*
 * Modify the broker.c program of Section 5.2 by making both of the following changes:
 *
 * a. Ask the user to enter the number of shares and the price per share, instead of the value
 *    of the trade.
 *
 * b. Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
 *    share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more).
 *    Display the rival's commission as well as the commission charged by the original broker.
 *
 *
 * When stocks are sold or purchased through a broker, the broker's commission is
 * often computed using a sliding scale that depends upon the value of the stocks
 * traded. Let's say that a broker charges the amounts shown in the following table:
 *
 * Transaction size     Commission rate
 * Under $2,500         $30 + 1.7%
 * $2,500 - $6,250      $56 + 0.66%
 * $6,250 - $20,000     $76 + 0.34%
 * $20,000 - $50,000    $100 + 0.22%
 * $50,000 - $500,000   $155 + 0.11%
 * Over $500,000        $255 + 0.09%
 *
 * The minimum charge is $39. Our next program asks the user to enter the amount of
 * the trade, then displays the amount of the commission:
 *
 * Enter value of trade: 30000
 * Commission: $166.00
 *
 * The heart of the program is a cascaded if statement that determines which range
 * the trade falls into.
 */

/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    int total_shares;
    float default_commission, rival_commission, share_price, value;
    printf("Enter the number of shares to buy: ");
    scanf ("%d", &total_shares);
    printf("Enter the share price: ");
    scanf("%f", &share_price);
    
    value = total_shares * share_price;
    
    if (value < 2500.00f)
        default_commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        default_commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        default_commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        default_commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        default_commission = 155.00f + .0011f * value;
    else
        default_commission = 255.00f + .0009f * value;
    if (default_commission < 39.00f)
        default_commission = 39.00f;
        
    if (total_shares < 2000)
        rival_commission = 33.00f + 0.03f * total_shares;
    else
        rival_commission = 33.00f + .02f * total_shares;

    printf("Commission at the default broker: $%.2f\nCommission at rival broker: $%.2f\n", default_commission, rival_commission);
    
    return 0;
}
