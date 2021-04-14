/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoftwareUpdateCoreSupport/SoftwareUpdateCoreSupport-Structs.h>
@class NSString, NSDictionary;

@interface SUCoreDevice : NSObject {

	BOOL _deviceSupportsMobileGestalt;
	BOOL _deviceSupportsCoreServices;
	BOOL _deviceSupportsAppleInternalVariant;
	BOOL _deviceSupportsSFRSystemVersion;
	BOOL _deviceSupportsSFRRestoreVersion;
	BOOL _deviceSupportsRestoreVersion;
	BOOL _deviceSupportsMultiVolumeBoot;
	BOOL _isInternal;
	BOOL _isBootedOSSecureInternal;
	BOOL _hasEmbeddedOS;
	BOOL _hasBridgeOS;
	BOOL _isBridgeInternal;
	BOOL _hasSFR;
	NSString* _targetedSystemVolume;
	NSString* _systemVersionPlistPath;
	NSDictionary* _systemVersionPlistContents;
	NSString* _restoreVersionPlistPath;
	NSDictionary* _restoreVersionPlistContents;
	NSString* _appleInternalVariantPlistPath;
	NSDictionary* _appleInternalVariantPlistContents;
	NSString* _sfrSystemVersionPlistPath;
	NSDictionary* _sfrSystemVersionPlistContents;
	NSString* _sfrRestoreVersionPlistPath;
	NSDictionary* _sfrRestoreVersionPlistContents;
	NSString* _buildVersion;
	NSString* _productVersion;
	NSString* _hwModelString;
	NSString* _deviceClass;
	NSString* _productType;
	NSString* _releaseType;
	NSString* _deviceBoardID;
	NSString* _hwTarget;
	NSString* _restoreVersion;
	NSString* _bridgeBuildVersion;
	NSString* _bridgeRestoreVersion;
	NSString* _sfrBuildVersion;
	NSString* _sfrProductVersion;
	NSString* _sfrRestoreVersion;
	NSString* _sfrReleaseType;
	NSString* _bridgeVersionPlistPath;
	NSDictionary* _bridgeVersionPlistContents;
	NSString* _bridgeVersion;

}

@property (nonatomic,retain,readonly) NSString * rootVolumeUUID; 
@property (nonatomic,readonly) BOOL rootVolumeSealValid; 
@property (nonatomic,retain) NSString * targetedSystemVolume;                               //@synthesize targetedSystemVolume=_targetedSystemVolume - In the implementation block
@property (nonatomic,retain) NSString * systemVersionPlistPath;                             //@synthesize systemVersionPlistPath=_systemVersionPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * systemVersionPlistContents;                     //@synthesize systemVersionPlistContents=_systemVersionPlistContents - In the implementation block
@property (nonatomic,retain) NSString * restoreVersionPlistPath;                            //@synthesize restoreVersionPlistPath=_restoreVersionPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * restoreVersionPlistContents;                    //@synthesize restoreVersionPlistContents=_restoreVersionPlistContents - In the implementation block
@property (nonatomic,retain) NSString * bridgeVersionPlistPath;                             //@synthesize bridgeVersionPlistPath=_bridgeVersionPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * bridgeVersionPlistContents;                     //@synthesize bridgeVersionPlistContents=_bridgeVersionPlistContents - In the implementation block
@property (nonatomic,retain) NSString * sfrSystemVersionPlistPath;                          //@synthesize sfrSystemVersionPlistPath=_sfrSystemVersionPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * sfrSystemVersionPlistContents;                  //@synthesize sfrSystemVersionPlistContents=_sfrSystemVersionPlistContents - In the implementation block
@property (nonatomic,retain) NSString * sfrRestoreVersionPlistPath;                         //@synthesize sfrRestoreVersionPlistPath=_sfrRestoreVersionPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * sfrRestoreVersionPlistContents;                 //@synthesize sfrRestoreVersionPlistContents=_sfrRestoreVersionPlistContents - In the implementation block
@property (nonatomic,retain) NSString * appleInternalVariantPlistPath;                      //@synthesize appleInternalVariantPlistPath=_appleInternalVariantPlistPath - In the implementation block
@property (nonatomic,retain) NSDictionary * appleInternalVariantPlistContents;              //@synthesize appleInternalVariantPlistContents=_appleInternalVariantPlistContents - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsMobileGestalt;                              //@synthesize deviceSupportsMobileGestalt=_deviceSupportsMobileGestalt - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsCoreServices;                               //@synthesize deviceSupportsCoreServices=_deviceSupportsCoreServices - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsAppleInternalVariant;                       //@synthesize deviceSupportsAppleInternalVariant=_deviceSupportsAppleInternalVariant - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsRestoreVersion;                             //@synthesize deviceSupportsRestoreVersion=_deviceSupportsRestoreVersion - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsSFRSystemVersion;                           //@synthesize deviceSupportsSFRSystemVersion=_deviceSupportsSFRSystemVersion - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsSFRRestoreVersion;                          //@synthesize deviceSupportsSFRRestoreVersion=_deviceSupportsSFRRestoreVersion - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsMultiVolumeBoot;                            //@synthesize deviceSupportsMultiVolumeBoot=_deviceSupportsMultiVolumeBoot - In the implementation block
@property (nonatomic,retain) NSString * buildVersion;                                       //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                     //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * hwModelString;                                      //@synthesize hwModelString=_hwModelString - In the implementation block
@property (nonatomic,retain) NSString * deviceClass;                                        //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) NSString * productType;                                        //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                        //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSString * deviceBoardID;                                      //@synthesize deviceBoardID=_deviceBoardID - In the implementation block
@property (nonatomic,retain) NSString * hwTarget;                                           //@synthesize hwTarget=_hwTarget - In the implementation block
@property (nonatomic,retain) NSString * restoreVersion;                                     //@synthesize restoreVersion=_restoreVersion - In the implementation block
@property (nonatomic,retain) NSString * bridgeVersion;                                      //@synthesize bridgeVersion=_bridgeVersion - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                                               //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL isBootedOSSecureInternal;                                 //@synthesize isBootedOSSecureInternal=_isBootedOSSecureInternal - In the implementation block
@property (assign,nonatomic) BOOL hasEmbeddedOS;                                            //@synthesize hasEmbeddedOS=_hasEmbeddedOS - In the implementation block
@property (assign,nonatomic) BOOL hasBridgeOS;                                              //@synthesize hasBridgeOS=_hasBridgeOS - In the implementation block
@property (nonatomic,retain) NSString * bridgeBuildVersion;                                 //@synthesize bridgeBuildVersion=_bridgeBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * bridgeRestoreVersion;                               //@synthesize bridgeRestoreVersion=_bridgeRestoreVersion - In the implementation block
@property (assign,nonatomic) BOOL isBridgeInternal;                                         //@synthesize isBridgeInternal=_isBridgeInternal - In the implementation block
@property (assign,nonatomic) BOOL hasSFR;                                                   //@synthesize hasSFR=_hasSFR - In the implementation block
@property (nonatomic,retain) NSString * sfrBuildVersion;                                    //@synthesize sfrBuildVersion=_sfrBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * sfrProductVersion;                                  //@synthesize sfrProductVersion=_sfrProductVersion - In the implementation block
@property (nonatomic,retain) NSString * sfrRestoreVersion;                                  //@synthesize sfrRestoreVersion=_sfrRestoreVersion - In the implementation block
@property (nonatomic,retain) NSString * sfrReleaseType;                                     //@synthesize sfrReleaseType=_sfrReleaseType - In the implementation block
+(id)sharedDevice;
-(NSString *)rootVolumeUUID;
-(BOOL)rootVolumeSealValid;
-(id)description;
-(NSString *)productVersion;
-(NSString *)productType;
-(NSString *)deviceClass;
-(NSString *)releaseType;
-(NSString *)buildVersion;
-(void)setDeviceClass:(NSString *)arg1 ;
-(id)summary;
-(BOOL)isInternal;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)bridgeVersion;
-(void)setReleaseType:(NSString *)arg1 ;
-(id)_copyGestaltValueForKey:(long long)arg1 ;
-(NSString *)restoreVersion;
-(void)setRestoreVersion:(NSString *)arg1 ;
-(NSString *)sfrBuildVersion;
-(NSString *)hwModelString;
-(BOOL)isBootedOSSecureInternal;
-(NSString *)deviceBoardID;
-(id)initTargetingSystemVolume:(id)arg1 ;
-(void)adjustTargetingSystemVolume:(id)arg1 ;
-(void)setTargetedSystemVolume:(NSString *)arg1 ;
-(void)setSystemVersionPlistPath:(NSString *)arg1 ;
-(void)setRestoreVersionPlistPath:(NSString *)arg1 ;
-(void)setAppleInternalVariantPlistPath:(NSString *)arg1 ;
-(void)setSfrSystemVersionPlistPath:(NSString *)arg1 ;
-(void)setSfrRestoreVersionPlistPath:(NSString *)arg1 ;
-(NSString *)systemVersionPlistPath;
-(NSString *)restoreVersionPlistPath;
-(NSString *)appleInternalVariantPlistPath;
-(NSString *)sfrSystemVersionPlistPath;
-(NSString *)sfrRestoreVersionPlistPath;
-(BOOL)_supportsMobileGestalt;
-(void)setDeviceSupportsMobileGestalt:(BOOL)arg1 ;
-(BOOL)_supportsCoreServices;
-(void)setDeviceSupportsCoreServices:(BOOL)arg1 ;
-(BOOL)_supportsAppleInternalVariant;
-(void)setDeviceSupportsAppleInternalVariant:(BOOL)arg1 ;
-(BOOL)_supportsRestoreVersion;
-(void)setDeviceSupportsRestoreVersion:(BOOL)arg1 ;
-(BOOL)_supportsSFRSystemVersion;
-(void)setDeviceSupportsSFRSystemVersion:(BOOL)arg1 ;
-(BOOL)_supportsSFRRestoreVersion;
-(void)setDeviceSupportsSFRRestoreVersion:(BOOL)arg1 ;
-(void)setDeviceSupportsMultiVolumeBoot:(BOOL)arg1 ;
-(void)setSystemVersionPlistContents:(NSDictionary *)arg1 ;
-(BOOL)deviceSupportsCoreServices;
-(void)setRestoreVersionPlistContents:(NSDictionary *)arg1 ;
-(BOOL)deviceSupportsRestoreVersion;
-(void)setSfrSystemVersionPlistContents:(NSDictionary *)arg1 ;
-(BOOL)deviceSupportsSFRSystemVersion;
-(void)setSfrRestoreVersionPlistContents:(NSDictionary *)arg1 ;
-(BOOL)deviceSupportsSFRRestoreVersion;
-(void)setAppleInternalVariantPlistContents:(NSDictionary *)arg1 ;
-(id)_copyStringValueForKey:(long long)arg1 ;
-(void)setHwModelString:(NSString *)arg1 ;
-(id)_copyDeviceBoardID;
-(void)setDeviceBoardID:(NSString *)arg1 ;
-(void)setHwTarget:(NSString *)arg1 ;
-(void)setIsBootedOSSecureInternal:(BOOL)arg1 ;
-(void)setHasEmbeddedOS:(BOOL)arg1 ;
-(void)setHasBridgeOS:(BOOL)arg1 ;
-(void)setBridgeRestoreVersion:(NSString *)arg1 ;
-(void)setBridgeBuildVersion:(NSString *)arg1 ;
-(void)setIsBridgeInternal:(BOOL)arg1 ;
-(void)_initializeBridgeOSProperties;
-(BOOL)_supportsSFR;
-(void)setHasSFR:(BOOL)arg1 ;
-(void)setSfrRestoreVersion:(NSString *)arg1 ;
-(void)setSfrBuildVersion:(NSString *)arg1 ;
-(void)setSfrProductVersion:(NSString *)arg1 ;
-(void)setSfrReleaseType:(NSString *)arg1 ;
-(BOOL)hasSFR;
-(void)_adjustValuesForMacOS;
-(void)_parseBridgeOSBuildInformationFromDevice:(id)arg1 ;
-(long long)_queryMethodForKey:(long long)arg1 ;
-(id)_copyCoreServicesValueForKey:(long long)arg1 ;
-(id)_copyCoreServicesAppleInternalValue;
-(id)_copyRestoreVersionValueForKey:(long long)arg1 ;
-(id)_copySysCtlValueForKey:(long long)arg1 ;
-(id)_copySFRSystemVersionValueForKey:(long long)arg1 ;
-(id)_copySFRRestoreVersionValueForKey:(long long)arg1 ;
-(id)_nameForQueryMethod:(long long)arg1 ;
-(id)_nameForQueryKey:(long long)arg1 ;
-(BOOL)deviceSupportsMultiVolumeBoot;
-(CFStringRef)_gestaltKeyForQueryKey:(long long)arg1 ;
-(id)_coreServicesKeyForQueryKey:(long long)arg1 ;
-(NSDictionary *)systemVersionPlistContents;
-(id)_restoreVersionKeyForQueryKey:(long long)arg1 ;
-(NSDictionary *)restoreVersionPlistContents;
-(NSDictionary *)appleInternalVariantPlistContents;
-(id)_sysCtlKeyForQueryKey:(long long)arg1 ;
-(NSDictionary *)sfrSystemVersionPlistContents;
-(NSDictionary *)sfrRestoreVersionPlistContents;
-(NSString *)targetedSystemVolume;
-(BOOL)deviceSupportsMobileGestalt;
-(BOOL)deviceSupportsAppleInternalVariant;
-(NSString *)hwTarget;
-(BOOL)hasEmbeddedOS;
-(BOOL)hasBridgeOS;
-(NSString *)bridgeBuildVersion;
-(NSString *)bridgeRestoreVersion;
-(BOOL)isBridgeInternal;
-(NSString *)sfrProductVersion;
-(NSString *)sfrRestoreVersion;
-(NSString *)sfrReleaseType;
-(id)_copyDeviceNVRAMHardwareModel;
-(NSString *)bridgeVersionPlistPath;
-(void)setBridgeVersionPlistPath:(NSString *)arg1 ;
-(NSDictionary *)bridgeVersionPlistContents;
-(void)setBridgeVersionPlistContents:(NSDictionary *)arg1 ;
-(void)setBridgeVersion:(NSString *)arg1 ;
@end

