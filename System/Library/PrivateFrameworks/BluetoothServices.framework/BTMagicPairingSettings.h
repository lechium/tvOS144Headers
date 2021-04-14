/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface BTMagicPairingSettings : NSObject <NSSecureCoding> {

	NSString* _bluetoothAddress;
	NSData* _masterKey;
	NSData* _masterHint;
	NSData* _accessoryKey;
	NSData* _accessoryHint;
	NSData* _encryptionKey;
	NSData* _irk;
	NSString* _productID;
	NSString* _vendorID;
	NSString* _buttonModes;
	NSString* _color;
	NSString* _deviceIDFeatureBitsV1;
	NSString* _deviceIDFeatureBitsV2;
	NSString* _listeningServices;
	NSString* _spatialAudio;
	NSString* _optimizedBatteryCharging;
	NSString* _optimizedBatteryFullChargeDeadline;
	NSString* _ratchet;
	NSString* _reserved;
	NSString* _settingsMask;
	NSString* _supportedServices;
	NSString* _version;

}

@property (nonatomic,retain) NSString * bluetoothAddress;                                //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSData * masterKey;                                         //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,retain) NSData * masterHint;                                        //@synthesize masterHint=_masterHint - In the implementation block
@property (nonatomic,retain) NSData * accessoryKey;                                      //@synthesize accessoryKey=_accessoryKey - In the implementation block
@property (nonatomic,retain) NSData * accessoryHint;                                     //@synthesize accessoryHint=_accessoryHint - In the implementation block
@property (nonatomic,retain) NSData * encryptionKey;                                     //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * irk;                                               //@synthesize irk=_irk - In the implementation block
@property (nonatomic,retain) NSString * productID;                                       //@synthesize productID=_productID - In the implementation block
@property (nonatomic,retain) NSString * vendorID;                                        //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,retain) NSString * buttonModes;                                     //@synthesize buttonModes=_buttonModes - In the implementation block
@property (nonatomic,retain) NSString * color;                                           //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * deviceIDFeatureBitsV1;                           //@synthesize deviceIDFeatureBitsV1=_deviceIDFeatureBitsV1 - In the implementation block
@property (nonatomic,retain) NSString * deviceIDFeatureBitsV2;                           //@synthesize deviceIDFeatureBitsV2=_deviceIDFeatureBitsV2 - In the implementation block
@property (nonatomic,retain) NSString * listeningServices;                               //@synthesize listeningServices=_listeningServices - In the implementation block
@property (nonatomic,retain) NSString * spatialAudio;                                    //@synthesize spatialAudio=_spatialAudio - In the implementation block
@property (nonatomic,retain) NSString * optimizedBatteryCharging;                        //@synthesize optimizedBatteryCharging=_optimizedBatteryCharging - In the implementation block
@property (nonatomic,retain) NSString * optimizedBatteryFullChargeDeadline;              //@synthesize optimizedBatteryFullChargeDeadline=_optimizedBatteryFullChargeDeadline - In the implementation block
@property (nonatomic,retain) NSString * ratchet;                                         //@synthesize ratchet=_ratchet - In the implementation block
@property (nonatomic,retain) NSString * reserved;                                        //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,retain) NSString * settingsMask;                                    //@synthesize settingsMask=_settingsMask - In the implementation block
@property (nonatomic,retain) NSString * supportedServices;                               //@synthesize supportedServices=_supportedServices - In the implementation block
@property (nonatomic,retain) NSString * version;                                         //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)magicSettingsWithBluetoothAddress:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reserved;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)productID;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)vendorID;
-(void)setProductID:(NSString *)arg1 ;
-(void)setVendorID:(NSString *)arg1 ;
-(NSString *)supportedServices;
-(void)setSupportedServices:(NSString *)arg1 ;
-(void)setReserved:(NSString *)arg1 ;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSData *)masterKey;
-(void)setMasterKey:(NSData *)arg1 ;
-(NSString *)spatialAudio;
-(id)initWithBluetoothAddress:(id)arg1 ;
-(NSData *)masterHint;
-(NSData *)accessoryHint;
-(NSData *)accessoryKey;
-(NSString *)buttonModes;
-(NSString *)deviceIDFeatureBitsV1;
-(NSString *)deviceIDFeatureBitsV2;
-(NSData *)irk;
-(NSString *)listeningServices;
-(NSString *)optimizedBatteryCharging;
-(NSString *)optimizedBatteryFullChargeDeadline;
-(NSString *)ratchet;
-(NSString *)settingsMask;
-(void)setMasterHint:(NSData *)arg1 ;
-(void)setAccessoryHint:(NSData *)arg1 ;
-(void)setAccessoryKey:(NSData *)arg1 ;
-(void)setButtonModes:(NSString *)arg1 ;
-(void)setDeviceIDFeatureBitsV1:(NSString *)arg1 ;
-(void)setDeviceIDFeatureBitsV2:(NSString *)arg1 ;
-(void)setIrk:(NSData *)arg1 ;
-(void)setListeningServices:(NSString *)arg1 ;
-(void)setOptimizedBatteryCharging:(NSString *)arg1 ;
-(void)setOptimizedBatteryFullChargeDeadline:(NSString *)arg1 ;
-(void)setRatchet:(NSString *)arg1 ;
-(void)setSettingsMask:(NSString *)arg1 ;
-(void)setSpatialAudio:(NSString *)arg1 ;
@end

