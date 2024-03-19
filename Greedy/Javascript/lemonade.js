/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {
    let my_bills = [0, 0, 0];

    let ans = true;
    for(let i = 0; i < bills.length; i++){
        // adiciona a nota recebida nas nossas notas
        if(bills[i] == 5) my_bills[0]++;
        else if(bills[i] == 10) my_bills[1]++;
        else if(bills[i] == 20) my_bills[2]++;

        let change = bills[i] - 5;

        // greedy: give bills starting by 20, then 10, then 5
        let bill_index = 2;
        while(change > 0) {
            let current_value;
            // discovers currently bill value
            if(bill_index == 2) current_value = 20;
            else if(bill_index == 1) current_value = 10;
            else if(bill_index == 0) current_value = 5;
            
            if(bill_index < 0)
                return false;
            // if current bill is too high or we don't have spare bills
            if(change - current_value < 0 || my_bills[bill_index] == 0)
                bill_index--;
            // select a bill to give
            else{
                change -= current_value;
                my_bills[bill_index]--;
            }
        }
    }

    return true;
};