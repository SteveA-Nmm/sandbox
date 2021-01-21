# sandbox
 development area for new ideas

001.	expandable arrays  /  ENR_swizzler   /   deeprange  /
Problem : The Noise Figure ENR table has to be re-arrainged for converter measurements. 
calibration tables are fixed length arrays saved to excel. They are useful to only the product application they were created for. maintaining multiple product cal tables every time the ENR diode comes back from calibration is tidious. Creating new ENR tables ad hock is error prone.  
Goal: take two ENR tables and calculate the re-arainged table.  return validation meta data.
research: 
data saved to excel is shaped: A) fixed size array, initialized at the pre run of the Vee application. -OR- B) appended line by line to the active worksheet.
functions that opperate on array arguments work in A but not B. 
Results	: 
a user function Array_Init to initialize and name the 1D Array to any size. expandable arrays
how to use the excel app objects, methods, and properties from the Vee Formula object. deeprange
beautification with Rich Text Box and external editor. 
how to find first empty row from a named range.... ENR_swizzler
Limits	:  Vee reading data from xlcells craps out if the cell is empty. 





