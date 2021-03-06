/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	BOOL _didUpgrade;
	unsigned _userDataDisposition;
	NSString* _restoredBackupBuildVersion;
	NSString* _restoredBackupProductType;
	NSString* _dmBundleIdentifier;

}

@property (assign,nonatomic) unsigned userDataDisposition;                            //@synthesize userDataDisposition=_userDataDisposition - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupBuildVersion;                   //@synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupProductType;                    //@synthesize restoredBackupProductType=_restoredBackupProductType - In the implementation block
@property (nonatomic,copy) NSString * dmBundleIdentifier;                             //@synthesize dmBundleIdentifier=_dmBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
@property (assign,nonatomic) BOOL didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setDmBundleIdentifier:(NSString *)arg1 ;
-(BOOL)didUpgrade;
-(BOOL)didRestoreFromBackup;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(BOOL)performMigration;
-(unsigned)userDataDisposition;
-(void)setUserDataDisposition:(unsigned)arg1 ;
-(NSString *)restoredBackupBuildVersion;
-(void)setRestoredBackupBuildVersion:(NSString *)arg1 ;
-(NSString *)restoredBackupProductType;
-(void)setRestoredBackupProductType:(NSString *)arg1 ;
-(void)setDidUpgrade:(BOOL)arg1 ;
-(NSString *)dmBundleIdentifier;
@end

