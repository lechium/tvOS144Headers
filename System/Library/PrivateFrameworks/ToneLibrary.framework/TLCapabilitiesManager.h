/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject {

	BOOL _isRingtoneStoreAvailable;
	BOOL _isAlertToneStoreAvailable;
	NSDictionary* _deviceCodeNameSimplicationMapping;

}

@property (getter=isRingtoneStoreAvailable,nonatomic,readonly) BOOL ringtoneStoreAvailable; 
@property (getter=isAlertToneStoreAvailable,nonatomic,readonly) BOOL alertToneStoreAvailable; 
@property (nonatomic,readonly) BOOL hasVibratorCapability; 
@property (nonatomic,readonly) BOOL hasUserGeneratedVibrationsCapability; 
@property (nonatomic,readonly) NSString * deviceCodeName; 
@property (nonatomic,readonly) NSString * simplifiedDeviceCodeName; 
@property (getter=isHomePod,nonatomic,readonly) BOOL homePod; 
+(id)sharedCapabilitiesManager;
-(id)init;
-(void)dealloc;
-(BOOL)isHomePod;
-(BOOL)_hasTelephonyCapability;
-(NSString *)deviceCodeName;
-(NSString *)simplifiedDeviceCodeName;
-(BOOL)hasVibratorCapability;
-(void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1 ;
-(void)_checkRingtoneStoreAvailability;
-(void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2 ;
-(BOOL)isRingtoneStoreAvailable;
-(BOOL)isAlertToneStoreAvailable;
-(BOOL)hasUserGeneratedVibrationsCapability;
@end

