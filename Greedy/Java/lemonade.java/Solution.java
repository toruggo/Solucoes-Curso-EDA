class Solution {
    public boolean lemonadeChange(int[] bills) {
        int[] my_bills = {0, 0, 0};

        for(int i = 0; i < bills.length; i++){
            // adiciona a nota recebida nas nossas notas
            if(bills[i] == 5) my_bills[0]++;
            else if(bills[i] == 10) my_bills[1]++;
            else if(bills[i] == 20) my_bills[2]++;

            int change = bills[i] - 5;

            // guloso: devolve notas comecando por 20, depois 10, depois 5
            int bill_index = 2;
            while(change > 0) {
                int current_value;
                // descobre valor da nota atual
                if(bill_index == 2) current_value = 20;
                else if(bill_index == 1) current_value = 10;
                else current_value = 5;
                
                if(bill_index < 0)
                    return false;
                // se nota for alta demais ou nao tivermos nota desse tipo
                if(change - current_value < 0 || my_bills[bill_index] == 0)
                    bill_index--;
                else{
                    change -= current_value;
                    my_bills[bill_index]--;
                }
            }
        }

        return true;
    }
}