/*
 * Note: this file originally auto-generated by mib2c using
 *  : mib2c.iterate.conf 17821 2009-11-11 09:00:00Z dts12 $
 */
#ifndef DATATYPESTABLE_H
#define DATATYPESTABLE_H

/* function declarations */
void init_dataTypesRoutingTable(void);
void initialize_table_dataTypesRoutingTable(void);
Netsnmp_Node_Handler dataTypesRoutingTable_handler;
Netsnmp_First_Data_Point  dataTypesRoutingTable_get_first_data_point;
Netsnmp_Next_Data_Point   dataTypesRoutingTable_get_next_data_point;

/* column number definitions for table dataTypesRoutingTable */
       #define COLUMN_DATATYPENAME		1
       #define COLUMN_DATATYPEREQUESTS		2
       #define COLUMN_DATATYPESUCCESS		3
       #define COLUMN_DATATYPEERROR		4
#endif /* DATATYPESTABLE_H */
