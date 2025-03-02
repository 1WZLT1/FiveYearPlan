/*********************************************************************/
/**************************Module_Learn******************************/
/*********************************************************************/

/*
 *@brief Module_Top Top��ģ�鶨��
*/
module Module_Top(
                    input Pin_1,
                    input Pin_2,
                    output Pin_3
                    );

parameter vriable = 10;//parameter ���巽��

//���Ը��������ͷ����� 
wire [2:0]  wire_1;
reg  [21:0] reg_1;
reg         s_clk;

initial s_clk = 0;

/*assign ʹ�÷���*/
/*assign �ǲ��в�����*/ 
/*assign ����������߼��� ��仰�������Ϊ�߼�����󽫵�ֵ��������һ�� ��һ�˾�����ʲô����˵��GPT*/                  
assign wire_1[0] = 1'b0;
assign wire_1[1] = 1'b1;


/*alwaysʹ�÷��� �м�ֻҪ����alwaysһ��Ҫ��ʱ��*/
always #10 reg_1[0] = ~reg_1[0];

/*always @(posedge reg_1[0] or posedge Pin_2)begin
    reg_1[10] = 1'b1;
end*/
                
endmodule                   
/*
 *@brief Module_Low Low��ģ�鶨��
*/
module Module_Low
                (
                   input  Pin_1,
                   input  Pin_2,
                   output Pin_3
                );

/*
 * @brief Module_E ʵ����ģ��
*/
Module_Top Module_E
                   (
                    .Pin_1(Pin1),
                    .Pin_2(Pin2),
                    .Pin_3(Pin3)
                   );
endmodule
