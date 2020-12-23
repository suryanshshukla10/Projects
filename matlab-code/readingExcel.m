[data,TXT,RAW] = xlsread('Exp2.xlsx');
C2 = data(:,1);
disp('In SS')
ANSWER1 = max(C2);
disp('Maximum Marks: ');
disp(ANSWER1);
ANSWER2 = min(C2);
disp('Minimum Marks: ');
disp(ANSWER2);
C3 = data(:,2);
disp('In PTT')
ANSWER1 = max(C3);
disp('Maximum Marks: ');
disp(ANSWER1);
ANSWER2 = min(C3);
disp('Minimum Marks: ');
disp(ANSWER2);



C4 = data(:,3);
disp('In EI')
ANSWER1 = max(C4);
disp('Maximum Marks: ');
disp(ANSWER1);
ANSWER2 = min(C4);
disp('Minimum Marks: ');
disp(ANSWER2);
C5 = data(:,4);
disp('In Digital')
ANSWER1 = max(C5);
disp('Maximum Marks: ');
disp(ANSWER1);
ANSWER2 = min(C5);
disp('Minimum Marks: ');
disp(ANSWER2);




len = length(data);
AvgMatrix = data(:,5);
MaxMarks = max(AvgMatrix);
count =1;
for i= 1:len
    temp = data(i,5);
    if MaxMarks == temp
        MaxMarks = temp;
        MaxMarksList(1,count) = i+1;
        count = count + 1;
    end
end
disp("List of Max Marks of Student")

for i = MaxMarksList
    disp(TXT(i))
end

%%Frequency of marks 
SS = data(:,1);
PTT=data(:,2);
EI=data(:,3);
DIGITAL=data(:,4);

SSMode = mode(SS)
PTTMode = mode(PTT)
DIGITALMode = mode(DIGITAL)
EIMode = mode(EI)

flagSS = 0;
flagPTT = 0;
flagEI =0;
flagDIGITAL = 0;

lenSS = length(SS);
for j = 1:lenSS
    if SS(j) == SSMode
        flagSS = flagSS + 1;
    end
end

lenPTT = length(PTT);
for k = 1:lenPTT
    if PTT(k) == PTTMode
        flagPTT = flagPTT + 1;
    end
end

lenEI = length(EI);
for l = 1:lenEI
    if EI(l) == EIMode
        flagEI = flagEI + 1;
    end
end

lenDigital = length(DIGITAL);
for m = 1:lenDigital
    if DIGITAL(m) == DIGITALMode
        flagDIGITAL = flagDIGITAL + 1;
    end
end



