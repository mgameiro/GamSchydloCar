function [thetaR] = rpm2rad(thetaD)
    %Converte velocidades em rpm para rad/s
    
    thetaR = (2*pi/60)*thetaD;
end

