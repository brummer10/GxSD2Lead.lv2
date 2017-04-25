// generated from file './/sd2lead.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace sd2lead {

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<100> sd1table __rt_data = {
	0,0.970874,101.97,100, {
	0.0,-0.0098068059233,-0.0196136118466,-0.0294204177699,-0.0392272236932,
	-0.0490340296165,-0.0588408355399,-0.0686476414632,-0.0784544473865,-0.0882612533098,
	-0.0980680592331,-0.107874865156,-0.11768167108,-0.127488477003,-0.137295282926,
	-0.14710208885,-0.156908894773,-0.166715700696,-0.17652250662,-0.186329312543,
	-0.196136118466,-0.20594292439,-0.215749730313,-0.225556536236,-0.235363342159,
	-0.245170148083,-0.254976954006,-0.264783759929,-0.274590565853,-0.284397371776,
	-0.294204177699,-0.304010983623,-0.313817789546,-0.323624595469,-0.333431401393,
	-0.343238207316,-0.353045013239,-0.362851819162,-0.372658625086,-0.382465431009,
	-0.392272236932,-0.402079042856,-0.411885848779,-0.421692654702,-0.431499460626,
	-0.441306266549,-0.451113072472,-0.460919878396,-0.470726684319,-0.480533490242,
	-0.490340296166,-0.500147102089,-0.509953908012,-0.519760713935,-0.529567519859,
	-0.539374325782,-0.549181131705,-0.558987937629,-0.568794743552,-0.578601549475,
	-0.588408355399,-0.598215161322,-0.608021967245,-0.617828773169,-0.627635579092,
	-0.637442385015,-0.647249190938,-0.657055996862,-0.666862802785,-0.676669608708,
	-0.686476414632,-0.696283220555,-0.706090026478,-0.715896832402,-0.725703638325,
	-0.735510444248,-0.745317250172,-0.755124056095,-0.764930862018,-0.774737667942,
	-0.784544473865,-0.794351279788,-0.804158085711,-0.813964891635,-0.823771697558,
	-0.833578503481,-0.843385309405,-0.853192115328,-0.862998921251,-0.872805727175,
	-0.882612533098,-0.892419339021,-0.902226144945,-0.912032950868,-0.921839756791,
	-0.931646562715,-0.941453368638,-0.951260174561,-0.961066980484,-0.970873786408
	}
};

static table1d_imp<100> sd2table __rt_data = {
	0,0.970874,101.97,100, {
	0.0,-0.00980539880937,-0.0196107747732,-0.0294161046756,-0.0392213645538,
	-0.0490265293097,-0.0588315723033,-0.0686364649208,-0.0784411761117,-0.0882456718856,
	-0.0980499147627,-0.107853863168,-0.117657470759,-0.127460685678,-0.137263449717,
	-0.147065697378,-0.156867354819,-0.16666833867,-0.176468554692,-0.186267896273,
	-0.196066242715,-0.20586345732,-0.215659385206,-0.225453850854,-0.235246655333,
	-0.245037573169,-0.254826348799,-0.264612692594,-0.274396276351,-0.284176728239,
	-0.293953627094,-0.303726496026,-0.313494795234,-0.323257913969,-0.333015161539,
	-0.34276575729,-0.352508819442,-0.362243352724,-0.371968234691,-0.381682200666,
	-0.391383827236,-0.401071514255,-0.410743465358,-0.420397666996,-0.430031866107,
	-0.439643546556,-0.449229904616,-0.458787823846,-0.468313849862,-0.477804165659,
	-0.487254568313,-0.496660448091,-0.506016771188,-0.515318067508,-0.524558425093,
	-0.533731492915,-0.542830493807,-0.551848249266,-0.560777217671,-0.569609547123,
	-0.578337143576,-0.586951754238,-0.595445065347,-0.603808812463,-0.612034900397,
	-0.620115528958,-0.628043319926,-0.635811440156,-0.643413715576,-0.650844731134,
	-0.658099912419,-0.665175585697,-0.672069014398,-0.678778411476,-0.685302928412,
	-0.691642622845,-0.697798407763,-0.703771985823,-0.709565772666,-0.715182813117,
	-0.720626693906,-0.725901456121,-0.731011510074,-0.73596155466,-0.740756502743,
	-0.745401413523,-0.74990143243,-0.754261738664,-0.758487500236,-0.762583836135,
	-0.766555785103,-0.770408280403,-0.774146129946,-0.777774001118,-0.781296409665,
	-0.784717712061,-0.788042100795,-0.791273602092,-0.794416075631,-0.797473215879
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;

	double 	fLowVec0[2];
	int 	iLowConst0;
	double 	fLowConst1;
	double 	fLowConst2;
	double 	fLowConst3;
	double 	fLowConst4;
	double 	fLowRec0[2];
	double 	fLow2Vec0[2];
	int 	iLow2Const0;
	double 	fLow2Const1;
	double 	fLow2Const2;
	double 	fLow2Const3;
	double 	fLow2Const4;
	double 	fLow2Rec0[2];

	double 	fRec0[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fRec2[2];
	double 	fConst5;
	double 	fConst6;
	double 	fVec0[2];
	double 	fConst7;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec4[2];
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fRec3[2];
	double 	fVec1[2];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fRec5[2];
	double 	fVec2[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fConst20;
	double 	fRec1[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double sd1nonlin(double x);
	static double sd2nonlin(double x);
	static double sqr(double x);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "sd1sim";
	name = N_("Super Overdrive");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;

	for (int i=0; i<2; i++) fLowVec0[i] = 0;
	for (int i=0; i<2; i++) fLowRec0[i] = 0;
	for (int i=0; i<2; i++) fLow2Vec0[i] = 0;
	for (int i=0; i<2; i++) fLow2Rec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (2.08234114092347e-05 * fConst1);
	fConst3 = (0.000476252356733052 + fConst2);
	fConst4 = ((0.000476252356733052 - fConst2) / fConst3);
	fConst5 = (2.02358669144664e-05 * fConst1);
	fConst6 = (0 - fConst5);
	fConst7 = (1.0 / fConst3);
	fConst8 = (3.28e-07 * fConst1);
	fConst9 = (0.0015416000000000002 * fConst1);
	fConst10 = (1 + fConst9);
	fConst11 = (1.0 / (fConst10 * fConst3));
	fConst12 = (0 - ((1 - fConst9) / fConst10));
	fConst13 = (0.009213599999999999 * fConst1);
	fConst14 = (1 - fConst13);
	fConst15 = (1 + fConst13);
	fConst16 = (0.00041359999999999997 * fConst1);
	fConst17 = (1 + fConst16);
	fConst18 = (1.0 / fConst17);
	fConst19 = (0 - ((1 - fConst16) / fConst17));
	fConst20 = (6.283185307179586 / double(iConst0));

	iLowConst0 = min(192000, max(1, fSamplingFreq));
	fLowConst1 = (1.0 / tan((0.7853981633974483 * (double(iLowConst0) / double(iLowConst0)))));
	fLowConst2 = (1 + fLowConst1);
	fLowConst3 = (1.0 / fLowConst2);
	fLowConst4 = (0 - ((1 - fLowConst1) / fLowConst2));
	iLow2Const0 = min(192000, max(1, fSamplingFreq));
	fLow2Const1 = (1.0 / tan((0.7853981633974483 * (double(iLow2Const0) / double(iLow2Const0)))));
	fLow2Const2 = (1 + fLow2Const1);
	fLow2Const3 = (1.0 / fLow2Const2);
	fLow2Const4 = (0 - ((1 - fLow2Const1) / fLow2Const2));

	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::sd1nonlin(double x) {
    double f = fabs(x);
    f = (f/(3.0 + f) - sd1table.low) * sd1table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = sd1table.data[0];
    } else if (i >= sd1table.size-1) {
        f = sd1table.data[sd1table.size-1];
    } else {
	f -= i;
	f = sd1table.data[i]*(1-f) + sd1table.data[i+1]*f;
    }
    return copysign(f, -x);
}

double always_inline Dsp::sd2nonlin(double x) {
    double f = fabs(x);
    f = (f/(3.0 + f) - sd2table.low) * sd2table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = sd2table.data[0];
    } else if (i >= sd2table.size-1) {
        f = sd2table.data[sd2table.size-1];
    } else {
	f -= i;
	f = sd2table.data[i]*(1-f) + sd2table.data[i+1]*f;
    }
    return copysign(f, -x);
}

double always_inline Dsp::sqr(double x)
{
    return x*x;
}

double always_inline Dsp::symclip(double x) {

    //Hard limiting
    if(x >= 0.8) x = 0.8;
    else if(x <= -0.72) x = -0.72;

    //Soft clipping
    if(x > 0.43){
        x -= 2.45 * sqr(x - 0.43);
    } else if(x < -0.33){
        x += 2.45 * sqr(x - -0.33);
    }
    return x;
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * double(fslider0))));
	double 	fSlow1 = (4.748558434412966e-05 * (exp((5 * double(fslider1))) - 1));
	double 	fSlow2 = (1.0 / tan((fConst20 * double(fslider2))));
	double 	fSlow3 = (1 + fSlow2);
	double 	fSlow4 = (1.0 / fSlow3);
	double 	fSlow5 = (0 - ((1 - fSlow2) / fSlow3));
	
	double zerostuffed[count*2];
	int j = 0;
	for (int i=0; i<count*2; i++) {
		zerostuffed[i] = input0[j] * 2.0;
		i++;
		zerostuffed[i] = 0.0;
		j++;
	}
	for (int i=0; i<count*2; i++) {
		double fLowTemp0 = (double)zerostuffed[i];
		fLowVec0[0] = fLowTemp0;
		fLowRec0[0] = ((fLowConst4 * fLowRec0[1]) + (fLowConst3 * (fLowVec0[0] + fLowVec0[1])));
		zerostuffed[i] = (FAUSTFLOAT)fLowRec0[0];
		// post processing
		fLowRec0[1] = fLowRec0[0];
		fLowVec0[1] = fLowVec0[0];
	}

	for (int i=0; i<count*2; i++) {
		fRec0[0] = ((0.999 * fRec0[1]) + fSlow0);
		fRec2[0] = ((double)zerostuffed[i] - (fConst4 * fRec2[1]));
		double fTemp0 = ((fConst6 * fRec2[1]) + (fConst5 * fRec2[0]));
		fVec0[0] = fTemp0;
		double fTemp1 = (fConst7 * fVec0[0]);
		fRec4[0] = (fSlow1 + (0.993 * fRec4[1]));
		double fTemp2 = (fConst8 * (4700 + (250000 * fRec4[0])));
		fRec3[0] = ((fConst12 * fRec3[1]) + (fConst11 * ((fVec0[0] * (1 + fTemp2)) + (fVec0[1] * (1 - fTemp2)))));
		double fTemp3 = symclip((fTemp1 - sd1nonlin((fRec3[0] - fTemp1))));
		fVec1[0] = fTemp3;
		fRec5[0] = ((fConst19 * fRec5[1]) + (fConst18 * ((fConst15 * fVec1[0]) + (fConst14 * fVec1[1]))));
		double fTemp4 = (fVec1[0] - sd2nonlin((fRec5[0] - fVec1[0])));
		fVec2[0] = symclip(fTemp4);
		fRec1[0] = ((fSlow5 * fRec1[1]) + (fSlow4 * (fVec2[0] + fVec2[1])));
		zerostuffed[i] = (FAUSTFLOAT)(fRec1[0] * fRec0[0]);
		// post processing
		fRec1[1] = fRec1[0];
		fVec2[1] = fVec2[0];
		fRec5[1] = fRec5[0];
		fVec1[1] = fVec1[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		fVec0[1] = fVec0[0];
		fRec2[1] = fRec2[0];
		fRec0[1] = fRec0[0];
	}
	for (int i=0; i<count*2; i++) {
		double fLow2Temp0 =  zerostuffed[i];
		fLow2Vec0[0] = fLow2Temp0;
		fLow2Rec0[0] = ((fLow2Const4 * fLow2Rec0[1]) + (fLow2Const3 * (fLow2Vec0[0] + fLow2Vec0[1])));
		zerostuffed[i] = (FAUSTFLOAT)fLow2Rec0[0];
		// post processing
		fLow2Rec0[1] = fLow2Rec0[0];
		fLow2Vec0[1] = fLow2Vec0[0];
	}
	j = 0;
	for (int i=0; i<count*2; i++) {
		output0[j] = zerostuffed[i];
		i++;
		j++;
	}
	
#undef fslider0
#undef fslider1
#undef fslider2
}
		
void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case LEVEL: 
		fslider0_ = (float*)data; // , -16.0, -2e+01, 4.0, 0.1 
		break;
	case TONE: 
		fslider2_ = (float*)data; // , 4e+02, 1e+02, 1e+03, 1.03 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   LEVEL, 
   TONE, 
} PortIndex;
*/

} // end namespace sd2lead
