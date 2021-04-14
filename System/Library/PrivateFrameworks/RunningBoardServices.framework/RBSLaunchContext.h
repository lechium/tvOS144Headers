/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSUUID, RBSProcessIdentity, RBProcess, NSNumber;

@interface RBSLaunchContext : NSObject <RBSXPCSecureCoding, NSCopying> {

	BOOL _lsManageRoleOnly;
	BOOL _forceSubmit;
	unsigned char _initialRole;
	unsigned char _spawnType;
	unsigned short _lsUMask;
	unsigned _lsPersona;
	int _hostPid;
	unsigned long long _lsSpawnFlags;
	NSArray* _lsBinpref;
	NSString* _bundleIdentifier;
	NSDictionary* _extensionOverlay;
	NSUUID* _oneShotUUID;
	NSString* _standardOutputPath;
	NSString* _standardErrorPath;
	NSString* _standardInPath;
	NSString* _beforeTranslocationBundlePath;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;
	RBSProcessIdentity* _identity;
	NSArray* _arguments;
	unsigned long long _executionOptions;
	NSArray* _attributes;
	NSString* _explanation;
	NSString* _managedPersona;
	RBProcess* _hostProcess;
	NSString* __overrideExecutablePath;
	NSArray* __additionalMachServices;
	NSDictionary* __additionalEnvironment;
	NSUUID* _requiredCacheUUID;
	NSNumber* _requiredSequenceNumber;

}

@property (nonatomic,retain) RBProcess * hostProcess;                                                            //@synthesize hostProcess=_hostProcess - In the implementation block
@property (assign,nonatomic) unsigned char initialRole;                                                          //@synthesize initialRole=_initialRole - In the implementation block
@property (nonatomic,copy) NSString * homeDirectory;                                                             //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,copy) NSString * tmpDirectory;                                                              //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (setter=_setOverrideExecutablePath:,nonatomic,copy) NSString * _overrideExecutablePath;                //@synthesize _overrideExecutablePath=__overrideExecutablePath - In the implementation block
@property (setter=_setAdditionalMachServices:,nonatomic,copy) NSArray * _additionalMachServices;                 //@synthesize _additionalMachServices=__additionalMachServices - In the implementation block
@property (setter=_setAdditionalEnvironment:,nonatomic,copy) NSDictionary * _additionalEnvironment;              //@synthesize _additionalEnvironment=__additionalEnvironment - In the implementation block
@property (nonatomic,copy) NSUUID * requiredCacheUUID;                                                           //@synthesize requiredCacheUUID=_requiredCacheUUID - In the implementation block
@property (nonatomic,copy) NSNumber * requiredSequenceNumber;                                                    //@synthesize requiredSequenceNumber=_requiredSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL lsManageRoleOnly;                                                              //@synthesize lsManageRoleOnly=_lsManageRoleOnly - In the implementation block
@property (assign,nonatomic) unsigned long long lsSpawnFlags;                                                    //@synthesize lsSpawnFlags=_lsSpawnFlags - In the implementation block
@property (assign,nonatomic) unsigned short lsUMask;                                                             //@synthesize lsUMask=_lsUMask - In the implementation block
@property (nonatomic,copy) NSArray * lsBinpref;                                                                  //@synthesize lsBinpref=_lsBinpref - In the implementation block
@property (assign,nonatomic) unsigned lsInitialRole; 
@property (assign,nonatomic) unsigned lsPersona;                                                                 //@synthesize lsPersona=_lsPersona - In the implementation block
@property (nonatomic,copy) NSString * beforeTranslocationBundlePath;                                             //@synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath - In the implementation block
@property (assign,nonatomic) int hostPid;                                                                        //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionOverlay;                                                    //@synthesize extensionOverlay=_extensionOverlay - In the implementation block
@property (nonatomic,retain) NSUUID * oneShotUUID;                                                               //@synthesize oneShotUUID=_oneShotUUID - In the implementation block
@property (assign,nonatomic) BOOL forceSubmit;                                                                   //@synthesize forceSubmit=_forceSubmit - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * identity;                                                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                                                  //@synthesize arguments=_arguments - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;                                                //@synthesize executionOptions=_executionOptions - In the implementation block
@property (assign,nonatomic) unsigned char spawnType;                                                            //@synthesize spawnType=_spawnType - In the implementation block
@property (nonatomic,copy) NSString * executablePath; 
@property (nonatomic,copy) NSArray * machServices; 
@property (nonatomic,copy) NSDictionary * environment; 
@property (nonatomic,copy) NSString * standardOutputPath;                                                        //@synthesize standardOutputPath=_standardOutputPath - In the implementation block
@property (nonatomic,copy) NSString * standardErrorPath;                                                         //@synthesize standardErrorPath=_standardErrorPath - In the implementation block
@property (nonatomic,copy) NSString * standardInPath;                                                            //@synthesize standardInPath=_standardInPath - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                                                                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                                               //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                                                            //@synthesize managedPersona=_managedPersona - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
+(id)contextWithIdentity:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSProcessIdentity *)identity;
-(NSString *)bundleIdentifier;
-(NSArray *)attributes;
-(NSString *)executablePath;
-(NSArray *)arguments;
-(NSDictionary *)environment;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setIdentity:(RBSProcessIdentity *)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(NSString *)managedPersona;
-(void)setManagedPersona:(NSString *)arg1 ;
-(void)_setOverrideExecutablePath:(id)arg1 ;
-(NSArray *)machServices;
-(void)_setAdditionalMachServices:(id)arg1 ;
-(void)_setAdditionalEnvironment:(id)arg1 ;
-(void)setStandardOutputPath:(NSString *)arg1 ;
-(void)setStandardErrorPath:(NSString *)arg1 ;
-(unsigned long long)executionOptions;
-(void)setSpawnType:(unsigned char)arg1 ;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(NSString *)explanation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(RBProcess *)hostProcess;
-(NSString *)homeDirectory;
-(unsigned long long)lsSpawnFlags;
-(unsigned char)spawnType;
-(NSArray *)_additionalMachServices;
-(NSString *)_overrideExecutablePath;
-(NSDictionary *)_additionalEnvironment;
-(NSString *)standardOutputPath;
-(NSString *)standardErrorPath;
-(NSString *)standardInPath;
-(unsigned)lsPersona;
-(unsigned char)initialRole;
-(NSArray *)lsBinpref;
-(unsigned short)lsUMask;
-(NSDictionary *)extensionOverlay;
-(int)hostPid;
-(NSUUID *)oneShotUUID;
-(NSString *)beforeTranslocationBundlePath;
-(NSString *)tmpDirectory;
-(NSUUID *)requiredCacheUUID;
-(NSNumber *)requiredSequenceNumber;
-(void)setHostPid:(int)arg1 ;
-(void)setInitialRole:(unsigned char)arg1 ;
-(void)setHostProcess:(RBProcess *)arg1 ;
-(void)setHomeDirectory:(NSString *)arg1 ;
-(void)setTmpDirectory:(NSString *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)lsManageRoleOnly;
-(BOOL)forceSubmit;
-(void)setStandardInPath:(NSString *)arg1 ;
-(void)setLsManageRoleOnly:(BOOL)arg1 ;
-(void)setLsSpawnFlags:(unsigned long long)arg1 ;
-(void)setLsUMask:(unsigned short)arg1 ;
-(void)setLsBinpref:(NSArray *)arg1 ;
-(void)setLsPersona:(unsigned)arg1 ;
-(void)setExtensionOverlay:(NSDictionary *)arg1 ;
-(void)setOneShotUUID:(NSUUID *)arg1 ;
-(void)setForceSubmit:(BOOL)arg1 ;
-(void)setBeforeTranslocationBundlePath:(NSString *)arg1 ;
-(unsigned)lsInitialRole;
-(void)setLsInitialRole:(unsigned)arg1 ;
-(void)setRequiredCacheUUID:(NSUUID *)arg1 ;
-(void)setRequiredSequenceNumber:(NSNumber *)arg1 ;
@end

