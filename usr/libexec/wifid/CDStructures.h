//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct WiFiMetricsManagerAirplayHistogramBin;

struct WiFiMetricsManagerAirplayStatistics {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
    char _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    struct WiFiMetricsManagerAirplayHistogramBin *_field24;
    unsigned int _field25;
    struct WiFiMetricsManagerAirplayHistogramBin *_field26;
    struct WiFiMetricsManagerAirplayHistogramBin *_field27;
    struct WiFiMetricsManagerAirplayHistogramBin *_field28;
    unsigned int _field29;
    struct WiFiMetricsManagerP2pPeerTraffic _field30;
};

struct WiFiMetricsManagerP2pPeerTraffic {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDStruct_183601bc *_field4;
    unsigned int _field5;
    CDStruct_183601bc *_field6;
    unsigned int _field7;
    CDStruct_183601bc *_field8;
    unsigned int _field9;
    CDStruct_183601bc *_field10;
    unsigned int _field11;
    CDStruct_183601bc *_field12;
    unsigned int _field13;
    CDStruct_183601bc *_field14;
    unsigned int _field15;
    CDStruct_183601bc *_field16;
    unsigned int _field17;
    CDStruct_183601bc *_field18;
    unsigned int _field19;
    CDStruct_183601bc *_field20;
    unsigned int _field21;
    CDStruct_183601bc *_field22;
    unsigned int _field23;
    CDStruct_183601bc *_field24;
    unsigned int _field25;
    CDStruct_183601bc *_field26;
    unsigned int _field27;
    CDStruct_183601bc *_field28;
    unsigned int _field29;
    CDStruct_183601bc *_field30;
    unsigned int _field31;
};

struct WiFiMetricsManagerSidecarBssSteering {
    int _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned int _field9;
};

struct WiFiMetricsManagerSidecarStatistics {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    _Bool _field9;
    unsigned int _field10;
    char *_field11;
    unsigned char _field12;
    struct WiFiMetricsManagerSidecarBssSteering _field13;
    struct WiFiMetricsManagerP2pPeerTraffic _field14;
};

struct __CFData;

struct __CFString;

struct __WiFiMetricsManagerNetworkTransitionCumulative {
    unsigned short _field1;
    unsigned short _field2[166];
};

struct apple80211_chip_power_limit {
    unsigned int version;
    unsigned short powerTable[12];
    unsigned short dutyCycleTable[12];
};

struct mitigationAttemptInfo {
    unsigned int mitigationAttemptCount[7];
    double lastMitigationTime[7];
    _Bool mitigationAllowedFlag[7];
};

struct softErrorCounters {
    unsigned int wifiToggleErrorCount;
    unsigned int noNetworksFoundErrorCount;
    unsigned int slowAutoJoinErrorCount;
    unsigned int txDataStallErrorCount;
    unsigned int rxDataStallErrorCount;
    unsigned int triggerDisconnectCount;
    unsigned int userDisconnectCount;
    unsigned int wifiToggleErrorUserConfirmCount;
    unsigned int noNetworksFoundErrorUserConfirmCount;
    unsigned int slowAutoJoinErrorUserConfirmCount;
    unsigned int txDataStallErrorUserConfirmCount;
    unsigned int rxDataStallErrorUserConfirmCount;
    unsigned int triggerDisconnectUserConfirmCount;
    unsigned int UserDisconnectUserConfirmCount;
    unsigned int awdlSoftErrorCount;
    unsigned int slowWiFiErrorCount;
    unsigned int slowWiFiUserConfirmCount;
    int lastSoftErrorUserFeedbk;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
} CDStruct_b31ca263;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
} CDStruct_de0e5961;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
} CDStruct_f4b747e6;

typedef struct {
    unsigned char _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_e8211f4e;

typedef struct {
    unsigned char _field1;
    char _field2[0];
} CDStruct_1d7abdeb;

typedef struct {
    unsigned char _field1;
} CDStruct_6b48f683;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned int _field6;
} CDStruct_f2c29a7a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
} CDStruct_aaf269f3;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
} CDStruct_0307c87d;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
} CDStruct_95ce6899;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_a561fd19;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_cc4e5495;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
} CDStruct_4cef2586;

typedef struct {
    unsigned int _field1;
    unsigned char _field2[8];
} CDStruct_30c4e00f;

typedef struct {
    unsigned int _field1;
    double _field2;
    unsigned char _field3;
    unsigned int _field4;
} CDStruct_eb5aa7f0;

typedef struct {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    int _field6;
} CDStruct_d0632ee2;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned char _field12[3];
    unsigned char _field13[3];
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned long long _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned long long _field21;
    unsigned int _field22;
    unsigned int _field23;
    _Bool _field24;
    _Bool _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned char _field34[6];
    unsigned char _field35[6];
} CDStruct_0031ec31;

typedef struct {
    unsigned long long type;
    void *refcon;
} CDStruct_777f7d9a;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6[16];
} CDStruct_02c0ccd4;

typedef struct {
    unsigned short _field1[13];
    unsigned short _field2[11];
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned short _field9;
    unsigned short _field10;
} CDStruct_5478c3ab;

typedef struct {
    int _field1[30];
    int _field2[30];
    int _field3[30];
    int _field4[30];
    int _field5[30];
    int _field6[30];
    int _field7[30];
    unsigned int _field8;
} CDStruct_c203e5c3;

typedef struct {
    unsigned char _field1[3];
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_853d9d76;

typedef struct {
    unsigned char _field1[3];
} CDStruct_8356e4f6;

typedef struct {
    double _field1;
    unsigned int _field2;
} CDStruct_20c13360;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4[3];
} CDStruct_30ae134f;

typedef struct {
    int _field1;
    int _field2;
    unsigned char _field3[3];
    int _field4;
    int _field5;
    int _field6;
    unsigned char _field7[3];
    char _field8[0];
} CDStruct_ee00bbfb;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    double _field4;
    double _field5;
    double _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned long long _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned char _field14;
    unsigned int _field15;
} CDStruct_1fc1c3b2;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned long long _field18;
    unsigned int _field19;
    CDStruct_183601bc *_field20;
    unsigned int _field21;
    CDStruct_183601bc *_field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned long long _field29;
    CDStruct_183601bc *_field30;
    unsigned int _field31;
    CDStruct_183601bc *_field32;
    unsigned int _field33;
    CDStruct_183601bc *_field34;
} CDStruct_ab83e539;

typedef struct {
    unsigned char _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
        unsigned char _field17;
        unsigned int _field18;
        unsigned int _field19;
        unsigned char _field20;
        unsigned int _field21;
        unsigned int _field22;
        unsigned int _field23;
        double _field24;
        unsigned int _field25;
        double _field26;
        double _field27;
        unsigned int _field28;
        unsigned int _field29;
        unsigned long long _field30;
        unsigned long long _field31;
        unsigned long long _field32;
        unsigned char _field33;
        char _field34;
        unsigned char _field35;
        unsigned char _field36;
        unsigned char _field37;
    } _field2[10];
} CDStruct_b75b73a9;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    unsigned char _field6;
    unsigned int _field7;
    char _field8[64];
    unsigned long long _field9;
    unsigned long long _field10;
    char _field11[32];
    unsigned int _field12;
    char _field13[32];
    unsigned char _field14;
    unsigned int _field15;
    unsigned int _field16[80];
    unsigned int _field17;
    unsigned int _field18[80];
    unsigned int _field19;
    unsigned int _field20[80];
    unsigned int _field21;
    unsigned int _field22[80];
    unsigned int _field23;
    unsigned int _field24[80];
    unsigned int _field25;
    unsigned int _field26[80];
    unsigned int _field27;
    unsigned int _field28[80];
    unsigned int _field29;
    unsigned int _field30[80];
    unsigned int _field31;
    unsigned int _field32[80];
    unsigned int _field33;
    unsigned int _field34[80];
    unsigned int _field35;
    unsigned int _field36[80];
    unsigned int _field37;
    unsigned int _field38[80];
    unsigned int _field39;
    unsigned int _field40[80];
    unsigned int _field41;
    unsigned int _field42[80];
    unsigned int _field43;
    unsigned char _field44;
    unsigned int _field45[80];
    unsigned int _field46;
    unsigned int _field47[80];
    unsigned int _field48;
    unsigned int _field49[80];
    unsigned int _field50;
    unsigned int _field51[80];
    unsigned int _field52;
    unsigned int _field53[80];
    unsigned int _field54;
    struct __CFString *_field55;
    struct __CFString *_field56;
    struct __CFString *_field57;
    struct __CFString *_field58;
    struct __CFString *_field59;
    struct __CFString *_field60;
    struct __CFString *_field61;
    struct __CFString *_field62;
    struct __CFString *_field63;
    unsigned int _field64;
    unsigned char _field65[3];
} CDStruct_4a093ba1;

typedef struct {
    unsigned char _field1[3];
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned short _field8;
    char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    struct __CFString *_field19;
    struct __CFString *_field20;
} CDStruct_a9c4f86c;

typedef struct {
    unsigned char _field1[3];
    unsigned int _field2;
    struct __CFData *_field3;
    unsigned int _field4;
    unsigned long long _field5;
} CDStruct_1490e47e;

typedef struct {
    char *_field1;
    struct __CFString *_field2;
    struct __CFString *_field3;
    struct __CFString *_field4;
    struct __CFString *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    struct __CFString *_field8;
    struct __CFString *_field9;
    struct __CFString *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    unsigned int _field14;
    unsigned int _field15;
} CDStruct_d361f42f;

typedef struct {
    CDStruct_183601bc *_field1;
    unsigned short _field2;
} CDStruct_0b3a2485;

typedef struct {
    struct __CFData *_field1;
    struct __CFData *_field2;
} CDStruct_5bae0375;

typedef struct {
    struct __CFString *_field1;
    struct __CFArray *_field2;
} CDStruct_46441b56;

typedef struct {
    struct __WiFiMetricsManagerNetworkTransitionRecord *_field1;
    unsigned short _field2;
} CDStruct_32e92d78;

typedef struct {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned short _field12;
    unsigned short _field13;
    unsigned short _field14;
    unsigned short _field15;
    unsigned short _field16;
    struct {
        unsigned char _field1[3];
        unsigned char _field2;
        unsigned char _field3;
        unsigned char _field4;
        unsigned int :1;
        unsigned int :7;
        double _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        int _field9;
        struct __CFString *_field10;
    } _field17[5];
} CDStruct_e0daccdd;

typedef struct {
    CDStruct_c203e5c3 _field1;
    _Bool _field2;
    _Bool _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned int _field6;
        unsigned char _field7[3];
        CDStruct_e8211f4e _field8;
        CDStruct_02c0ccd4 _field9;
        CDStruct_30c4e00f _field10;
        double _field11;
        struct __CFString *_field12;
        struct __CFString *_field13;
        struct __CFString *_field14;
        struct __CFString *_field15;
        struct __CFString *_field16;
        struct __CFString *_field17;
        struct __CFString *_field18;
        struct __CFString *_field19;
        struct __CFString *_field20;
        struct __CFString *_field21;
        struct __CFString *_field22;
        struct __CFString *_field23;
        int _field24;
        int _field25;
    } _field7;
    int _field8;
} CDStruct_8e6166fd;

typedef struct {
    CDStruct_c203e5c3 _field1;
    _Bool _field2;
    _Bool _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned int _field6;
        unsigned char _field7[3];
        CDStruct_e8211f4e _field8;
        CDStruct_02c0ccd4 _field9;
        CDStruct_30c4e00f _field10;
    } _field6;
    unsigned char _field7[255];
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned char _field11[255];
    unsigned int _field12;
    unsigned char _field13;
    unsigned short _field14;
    unsigned char _field15[255];
    unsigned short _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned char _field20[255];
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    int _field25;
} CDStruct_f998206b;

