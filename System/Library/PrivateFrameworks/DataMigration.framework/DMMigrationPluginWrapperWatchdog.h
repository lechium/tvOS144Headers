/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, DMPluginFaulter, DMTimer;

@interface DMMigrationPluginWrapperWatchdog : NSObject {

	NSString* _pluginBundleIdentifier;
	NSString* _backupDeviceUUID;
	DMPluginFaulter* _faulter;
	unsigned long long _secondsBeforeNextFault;
	unsigned long long _secondsOfLeeway;
	DMTimer* _timer;
	unsigned long long _fireCount;

}

@property (nonatomic,copy) NSString * pluginBundleIdentifier;                        //@synthesize pluginBundleIdentifier=_pluginBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * backupDeviceUUID;                              //@synthesize backupDeviceUUID=_backupDeviceUUID - In the implementation block
@property (nonatomic,retain) DMPluginFaulter * faulter;                              //@synthesize faulter=_faulter - In the implementation block
@property (assign,nonatomic) unsigned long long secondsBeforeNextFault;              //@synthesize secondsBeforeNextFault=_secondsBeforeNextFault - In the implementation block
@property (assign,nonatomic) unsigned long long secondsOfLeeway;                     //@synthesize secondsOfLeeway=_secondsOfLeeway - In the implementation block
@property (nonatomic,retain) DMTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long fireCount;                           //@synthesize fireCount=_fireCount - In the implementation block
+(id)_messageStringWithPluginBundleIdentifier:(id)arg1 minutes:(long long)arg2 backupDeviceUUID:(id)arg3 ;
-(void)cancel;
-(void)resume;
-(unsigned long long)fireCount;
-(NSString *)backupDeviceUUID;
-(void)setBackupDeviceUUID:(NSString *)arg1 ;
-(void)setTimer:(DMTimer *)arg1 ;
-(void)setSecondsOfLeeway:(unsigned long long)arg1 ;
-(DMTimer *)timer;
-(unsigned long long)secondsOfLeeway;
-(void)setPluginBundleIdentifier:(NSString *)arg1 ;
-(void)setFaulter:(DMPluginFaulter *)arg1 ;
-(void)setSecondsBeforeNextFault:(unsigned long long)arg1 ;
-(void)setFireCount:(unsigned long long)arg1 ;
-(unsigned long long)secondsBeforeNextFault;
-(void)_migrationPluginDuration5Minutes;
-(void)_migrationPluginDuration10Minutes;
-(void)_migrationPluginDuration20Minutes;
-(void)_migrationPluginDuration40Minutes;
-(NSString *)pluginBundleIdentifier;
-(DMPluginFaulter *)faulter;
-(id)initWithPluginBundleIdentifier:(id)arg1 backupDeviceUUID:(id)arg2 ;
@end

