function [] = rpm2v(Nr,R)
    w = (2*pi/60)*Nr;
    v = w*R;
    fprintf('v = %g [m/s]\n',v);
    fprintf('v = %g [km/h]\n',v*3.6);
end

