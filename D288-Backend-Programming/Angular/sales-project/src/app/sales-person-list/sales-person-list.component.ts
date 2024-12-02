import { Component } from '@angular/core';
import { SalesPerson } from './sales-person';

@Component({
  selector: 'app-sales-person-list',
  standalone: false,
  
  templateUrl: './sales-person-list-bootstrap.component.html',
  styleUrl: './sales-person-list.component.css'
})
export class SalesPersonListComponent {

  salesPersonList: SalesPerson[] = [
    new SalesPerson("John", "Doe", "john.doe@burgesscompany.com", 70000),
    new SalesPerson("Bob", "Jenkins", "bob.jenkins@burgesscompany.com", 60000),
    new SalesPerson("Henry", "Wrangler", "henry.wrangler@burgesscompany.com", 65000),
    new SalesPerson("Travis", "American", "travis.american@burgesscompany.com", 40000)
  ];

  constructor(){}

}
