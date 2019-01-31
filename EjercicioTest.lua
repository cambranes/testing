--[[
Autor: Raul Rivadeneyra 31/Enero/19
Entradas: Cualquier numero natural
Salidas: La suma de los factores del numero natural
Procedimiento general: Iteracion infinita que divide el numero dado si dicha division deja 0 como residuo, empezando de 2 (el primer primo)
]]--

--Entradas
number = io.read()
copy = number
enabled = true
divisor = 2
sum  = 0

if number ~= 0 then
    --Proceso
    while enabled do
        if (number % divisor) == 0 then
            sum = sum + divisor
            number = number / divisor
        else
            divisor = divisor + 1
        end
        if number == 1 then
           enabled = false 
        end
    end
else
    --Salida
    io.write("The sum of factors of the number "..copy.." is: "..sum + 1)
end