
public class GrdCalc {
	
	float writ;
	float lab;
	float asig;
	float grd;



float grdEq() {
	float grd= (writ*60)/100 + (lab*20)/100 + (asig*10)/100;
	return  grd;
}

}