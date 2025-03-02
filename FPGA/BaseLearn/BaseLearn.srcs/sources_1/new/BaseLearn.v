/*********************************************************************/
/**************************Module_Learn******************************/
/*********************************************************************/

/*
 *@brief Module_Top Top层模块定义
*/
module Module_Top(
                    input Pin_1,
                    input Pin_2,
                    output Pin_3
                    );

parameter vriable = 10;//parameter 定义方法

//可以给线网类型分配宽度 
wire [2:0]  wire_1;
reg  [21:0] reg_1;
reg         s_clk;

initial s_clk = 0;

/*assign 使用方法*/
/*assign 是并行操作的*/ 
/*assign 是描述组合逻辑的 这句话可以理解为逻辑运算后将得值与线网另一端 另一端具体是什么不好说等GPT*/                  
assign wire_1[0] = 1'b0;
assign wire_1[1] = 1'b1;


/*always使用方法 切记只要带有always一定要有时钟*/
always #10 reg_1[0] = ~reg_1[0];

/*always @(posedge reg_1[0] or posedge Pin_2)begin
    reg_1[10] = 1'b1;
end*/
                
endmodule                   
/*
 *@brief Module_Low Low层模块定义
*/
module Module_Low
                (
                   input  Pin_1,
                   input  Pin_2,
                   output Pin_3
                );

/*
 * @brief Module_E 实例化模板
*/
Module_Top Module_E
                   (
                    .Pin_1(Pin1),
                    .Pin_2(Pin2),
                    .Pin_3(Pin3)
                   );
endmodule
