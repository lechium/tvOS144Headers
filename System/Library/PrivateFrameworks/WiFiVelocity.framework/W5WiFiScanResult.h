/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSString, NSArray, W5WiFiChannel;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIBSS;
	BOOL _isPasspoint;
	BOOL _isPersonalHotspot;
	BOOL _isAppleSWAP;
	BOOL _supportsWEPCipher;
	BOOL _supportsTKIPCipher;
	int _supportedPHYModes;
	NSDictionary* _scanRecord;
	NSData* _ssid;
	NSString* _ssidString;
	NSString* _bssid;
	NSArray* _supportedSecurityTypes;
	long long _rssi;
	long long _noise;
	NSString* _countryCode;
	long long _beaconInterval;
	NSString* _airPortBaseStationModelName;
	W5WiFiChannel* _channel;

}

@property (nonatomic,copy) NSDictionary * scanRecord;                           //@synthesize scanRecord=_scanRecord - In the implementation block
@property (nonatomic,copy) NSData * ssid;                                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                               //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                    //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSArray * supportedSecurityTypes;                    //@synthesize supportedSecurityTypes=_supportedSecurityTypes - In the implementation block
@property (assign,nonatomic) int supportedPHYModes;                             //@synthesize supportedPHYModes=_supportedPHYModes - In the implementation block
@property (assign,nonatomic) long long rssi;                                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                                   //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) BOOL isIBSS;                                       //@synthesize isIBSS=_isIBSS - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long beaconInterval;                          //@synthesize beaconInterval=_beaconInterval - In the implementation block
@property (assign,nonatomic) BOOL isPasspoint;                                  //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (assign,nonatomic) BOOL isPersonalHotspot;                            //@synthesize isPersonalHotspot=_isPersonalHotspot - In the implementation block
@property (assign,nonatomic) BOOL isAppleSWAP;                                  //@synthesize isAppleSWAP=_isAppleSWAP - In the implementation block
@property (nonatomic,copy) NSString * airPortBaseStationModelName;              //@synthesize airPortBaseStationModelName=_airPortBaseStationModelName - In the implementation block
@property (nonatomic,copy) W5WiFiChannel * channel;                             //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL supportsWEPCipher;                            //@synthesize supportsWEPCipher=_supportsWEPCipher - In the implementation block
@property (assign,nonatomic) BOOL supportsTKIPCipher;                           //@synthesize supportsTKIPCipher=_supportsTKIPCipher - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(W5WiFiChannel *)channel;
-(void)setCountryCode:(NSString *)arg1 ;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(NSData *)ssid;
-(void)setSsid:(NSData *)arg1 ;
-(void)setChannel:(W5WiFiChannel *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(void)setNoise:(long long)arg1 ;
-(long long)noise;
-(void)setSupportedSecurityTypes:(NSArray *)arg1 ;
-(NSArray *)supportedSecurityTypes;
-(NSDictionary *)scanRecord;
-(BOOL)isPersonalHotspot;
-(NSString *)ssidString;
-(void)setSsidString:(NSString *)arg1 ;
-(void)setIsPasspoint:(BOOL)arg1 ;
-(BOOL)isPasspoint;
-(int)supportedPHYModes;
-(BOOL)supportsPHYMode:(int)arg1 ;
-(NSString *)airPortBaseStationModelName;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(void)setScanRecord:(NSDictionary *)arg1 ;
-(void)setSupportedPHYModes:(int)arg1 ;
-(long long)beaconInterval;
-(void)setBeaconInterval:(long long)arg1 ;
-(BOOL)isAppleSWAP;
-(void)setIsAppleSWAP:(BOOL)arg1 ;
-(BOOL)isIBSS;
-(void)setIsIBSS:(BOOL)arg1 ;
-(void)setIsPersonalHotspot:(BOOL)arg1 ;
-(void)setAirPortBaseStationModelName:(NSString *)arg1 ;
-(BOOL)supportsWEPCipher;
-(void)setSupportsWEPCipher:(BOOL)arg1 ;
-(BOOL)supportsTKIPCipher;
-(void)setSupportsTKIPCipher:(BOOL)arg1 ;
-(BOOL)supportsSecurity:(long long)arg1 ;
-(long long)strongestSupportedSecurity;
-(int)fastestSupportedPHYMode;
-(BOOL)isAirPortBaseStation:(out id*)arg1 modelID:(out char*)arg2 ;
@end

