import cocotb
from cocotb.triggers import Timer

########################################################################################
# ТЕСТИРОВАНИЕ СУММАТОРА
########################################################################################

@cocotb.test() # тест сложения двух наибольших положительных чисел
async def test1(dut):
    
    dut.exu2ialu_cmd_i.value = 4               # задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x7FFFFFFF # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x7FFFFFFF # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))  # выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))  # выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value))  # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0xFFFFFFFE), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"           # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect"           # проверка отсутствия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест сложения наибольшего и наименьшего положительного числа
async def test2(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x7FFFFFFF # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x00000001 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x80000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения произвольных положительных чисел
async def test3(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x5abe17d9 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x741c3ea8 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0xceda5681), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения наименьших отрицательных чисел
async def test4(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x80000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x80000000 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw.value == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw.value == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест сложения наибольших отрицательных чисел
async def test5(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0xffffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xffffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0xFFFFFFFE), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест сложения произвольных отрицательных чисел
async def test6(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x8a1b2c3d # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xbfa11eaf # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x49bc4aec), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения наибольшего положительного числа и наименьшего отрицательного
async def test7(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x7fffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x80000000 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0xffffffff), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b1), "overflow signal is incorrect"  # проверка наличия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения наибольшего положительного числа и наибольшего отрицательного
async def test8(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x7fffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xffffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x7FFFFFFE), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения наименьшего положительного числа и наибольшего отрицательного
async def test9(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x00000001 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xffffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест сложения положительного числа и его же отрицательного
async def test10(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x00000007 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xfffffff9 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест на отрицательное переполнение
async def test11(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0xfffffff0 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x00000010 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b1), "overflow signal is incorrect" # проверка наличия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест на положительное переполнение
async def test12(dut):
    
    dut.exu2ialu_cmd_i.value = 4 #задаем операцию сложения    
    dut.exu2ialu_main_op1_i.value = 0x40000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x80000000 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0xc0000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b1), "overflow signal is incorrect"  # проверка наличия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################
# ТЕСТИРОВАНИЕ ВЫЧИТАТЕЛЯ    
########################################################################################
    
@cocotb.test() # тест вычитания двух наибольших положительных чисел
async def test13(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x7fffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x7fffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка наличия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения
  
########################################################################################
    
@cocotb.test() # тест вычитания наибольшего положительного числа из наименьшего
async def test14(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x00000001 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x7fffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x80000002), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения
  
########################################################################################
    
@cocotb.test() # тест вычитания наименьшего положительного числа из наибольшего
async def test15(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x7fffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x00000001 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x7ffffffe), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения
  
########################################################################################
    
@cocotb.test() # тест вычитания наименьших отрицательных чисел
async def test16(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x80000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x80000000 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################
    
@cocotb.test() # тест вычитания наибольших отрицательных чисел
async def test17(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0xffffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xffffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test() # тест вычитания наименьшего отрицательного числа из наибольшего
async def test18(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x80000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0xffffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x80000001), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test()  # тест вычитания наибольшего отрицательного числа из наименьшего
async def test19(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0xffffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x80000000 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x7fffffff), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test()  # тест вычитания наибольшего положительного числа из наименьшего отрицательного
async def test20(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x80000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x7fffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x00000001), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b1), "overflow signal is incorrect" # проверка наличия отрицательного переполнения

########################################################################################

@cocotb.test()  # тест вычитания наибольшего положительного числа из наибольшего отрицательного
async def test21(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0xffffffff # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x7fffffff # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x80000000), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b0), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################

@cocotb.test()  # тест вычитания наименьшего положительного числа из наибольшего отрицательного
async def test22(dut):
    
    dut.exu2ialu_cmd_i.value = 5 #задаем операцию вычитания    
    dut.exu2ialu_main_op1_i.value = 0x80000000 # задаем первый операнд
    dut.exu2ialu_main_op2_i.value = 0x00000001 # задаем второй операнд
    await Timer(10, units="ns")

    dut._log.info("op1 is: %s", hex(dut.exu2ialu_main_op1_i.value))#выводим 1 операнд
    dut._log.info("op2 is: %s", hex(dut.exu2ialu_main_op2_i.value))#выводим 2 операнд
    dut._log.info("res is: %s", hex(dut.ialu2exu_main_res_o.value)) # выводим результат

    assert (dut.ialu2exu_main_res_o.value == 0x7fffffff), "main result is incorrect" # проверка результата
    assert (dut.main_sum_pos_ovflw == 0b0), "overflow signal is incorrect"  # проверка отсутствия положительного переполнения
    assert (dut.main_sum_neg_ovflw == 0b1), "overflow signal is incorrect" # проверка отсутствия отрицательного переполнения

########################################################################################