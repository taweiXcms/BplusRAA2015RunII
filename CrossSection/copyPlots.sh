MYPWD=${PWD}

rm -rf analysisNote
svn co -N svn+ssh://svn.cern.ch/reps/tdr2 analysisNote
cd analysisNote
svn update utils
svn update -N notes
svn update notes/AN-15-155
eval `./notes/tdr runtime -sh`
cd notes/AN-15-155/trunk

cp "$MYPWD"/canvasClosurepp.pdf Plots/Efficiency/.
cp "$MYPWD"/canvasClosurePbPb.pdf Plots/Efficiency/.
cp "$MYPWD"/CentralityWeight.pdf Plots/Efficiency/.

#tdr --style=an b AN-15-308 

svn add Plots/*/*
svn commit -m "update of plots" Plots
cd "$MYPWD"


